%{
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    extern int lineNum;
    extern int charNum;

    int yylex();
    double ans = 0;
    void dealwithError(int);
    void ErrorMsg(int);
    void yyerror();
    void format_print();
    char msg[256];
    char temp[256];
    int flag = 1;

    int current_block_stack = 1;
    char symbol_table[10][20][25];
    int symbol_table_next_avalible_index[10] = {0,0,0,0,0,0,0,0,0,0};

    void create();
    void blockReset();
    int lookup(char* str);
    void insert(char* str);
    void IDduplicateJudge(char* str);
    char* conflictID;

%}
%union{
    char strVal[256];
}
%type <strVal> NUMBER
%type <strVal> expression term factor group
%token PLUS MINUS MUL DIV EQ PLUS1 MINUS1
%token LP RP LB RB LLB RLB FUNC_LP
%token THESAME NotEQ GTEEQ LOWEQ GTE LOW
%token NUMBER NEWLINE SEMICOLON COMMA NEW


%type <strVal> TYPE_RW ID id_list valDeclare class_RW fr_RW MAIN while_RW for_RW ELSE IF
%type <strVal> PLUS1 MINUS1 otherargs arrayElementOrNOT STRING type_and_name
%token TYPE_RW ID STATIC FINAL class_RW fr_RW STRING
%token SPACE PRINT READ MAIN while_RW for_RW ELSE IF RETURN
%token Comment_end

%%

//---------------------------------------------
// lines
// are the structure of every inputline
//---------------------------------------------
lines: /* empty (epsilon)*/ /*{printf("1\n");}*/
    |lines things_In_A_Line {
        /*printf("30\n");*/
        format_print();
    }newline
    |lines Comment_end{
    }newline
    |lines if_statement {
        /*printf("30\n");*/
        format_print();
    }else_block
    |lines onlyelse{
        dealwithError(4);
        yyerrok;
        format_print();
    }newline

    ;
things_In_A_Line:{}
    | expression SEMICOLON {strcat(msg," ; ");}
    | valDeclare SEMICOLON {strcat(msg," ; ");}
    | valDeclare error {
        dealwithError(3);
        yyerrok;
    }
    | statement SEMICOLON {strcat(msg," ; ");}
    | classDeclare
    | methodDeclare
    | loop;
    | llb {strcat(msg," { ");format_print();} newline lines rlb {strcat(msg," } ");}
    ;
//-----------------------------------------------------------------------
// comment
//-----------------------------------------------------------------------


//-----------------------------------------------------------------------
// expression
// include +-*/ string NUMBER ID  ++ -- and methodcall
//-----------------------------------------------------------------------
expression:
    expression PLUS {strcat(msg, " + ");} term {
        /* printf("3\n"); */

    }
    | expression MINUS {strcat(msg, " - ");} term{
        /* printf("4\n"); */
        }
    | term {
        /* printf("5\n"); */
    }
    ;

term:
    term MUL {strcat(msg, " * ");} factor {
        /* printf("6\n"); */
    }
    | term DIV {strcat(msg, " / ");} factor {
        /* printf("7\n");*/
    }
    | factor {
        /* printf("8\n"); */
    }
    | STRING {
        strcat(msg, $1);
    }
    | error NUMBER { /* Error happened, discard token until it find NUMBER. */
        /*printf("9\n");*/
        yyerrok;     /* Error recovery. */
    }
    ;
factor:  
    | group {
        /* printf("10\n"); */
    }
    | NUMBER {
        /* printf("11\n"); */
        strcat(msg, $1);
    }
    | arrayElementOrNOT
    | unary_expr{
    }
    | METHODCALL
    ;
NUMorarrayElementOrNOT:NUMBER {strcat(msg, $1);}
    | arrayElementOrNOT
    ;
arrayElementOrNOT:ID {strcat(msg, $1);}
    | ID { strcat(msg, $1);} LB {strcat(msg, " [ ");} expression RB {strcat(msg, " ] ");}
    ;
unary_expr:
    PREFIX NUMorarrayElementOrNOT
    | NUMorarrayElementOrNOT POSTFIX
    ;
METHODCALL: ID {strcat(msg, $1);} LP {strcat(msg, " ( ");} parameter RP{
        strcat(msg, " ) ");
    };
parameter : expression
    | expression COMMA{strcat(msg, " , ");} parameter
    ;
PREFIX: MINUS1 {
        strcat(msg, $1);
    }
    | PLUS1 {
        strcat(msg, $1);
    }
    MINUS {
        strcat(msg, " - ");
    }
    | PLUS {
        strcat(msg, " + ");
    };
POSTFIX: MINUS1 {
        strcat(msg, $1);
    }
    | PLUS1 {
        strcat(msg, $1);
    };
group:
    LP {strcat(msg, " ( ");} expression RP{
        /* printf("12\n"); */
        strcat(msg, " ) ");
    }
    ;

//-----------------------------------------------------------------------
// variable
// for all Var declare and class instance create
//-----------------------------------------------------------------------
valDeclare:
    STATIC {strcat(msg, "static ");} TYPE_RW {strcat(msg, $3);strcat(msg, " ");} id_list{
    }
    | type_and_name otherargs{
        /*printf("valDeclare -2\n");*/
    }
    | ID ID EQ NEW ID LP RP {
        /*printf("valDeclare -2\n");*/
        strcat(msg, $1);
        strcat(msg, " ");
        strcat(msg, $2);
        strcat(msg, " = ");
        strcat(msg, "new ");
        strcat(msg, $5);
        strcat(msg, " ( ");
        strcat(msg, ") ");
    }
    | FINAL {strcat(msg, "final ");} TYPE_RW {strcat(msg, $3);strcat(msg, " ");} ID {strcat(msg, $5);} EQ {strcat(msg, " = ");} expression {
    }
    | TYPE_RW {strcat(msg, $1);} LB {strcat(msg, " [ ");} RB {strcat(msg, " ] ");} ID {strcat(msg, $7);} EQ {strcat(msg, " = ");} NEW {strcat(msg, " new ");} TYPE_RW {strcat(msg, $1);} LB {strcat(msg, " [ ");} expression RB {strcat(msg, " ] ");}
    ;
otherargs:{}
    | EQ {strcat(msg, " = ");} expression
    | COMMA {strcat(msg, " , ");} id_list
    | error {dealwithError(2);} initialize_or_not{
        yyerrok;
    }

id_list:
    initialize_or_not {
    }
    | initialize_or_not COMMA {strcat(msg, " , ");} id_list {
    }
    ;
initialize_or_not:
    ID {
        IDduplicateJudge($1);
        strcat(msg, $1);
    }
    | ID {
        IDduplicateJudge($1);
        strcat(msg, $1);
    } EQ {strcat(msg, " = ");} expression
    ;
//-----------------------------------------------------------------------
// class
// class strcture and definition
// classhead { body }
//-----------------------------------------------------------------------
classDeclare:
    classHead NEWLINE llb {
        //  { 在下一行
        /*printf("25\n");*/
        format_print();

        printf("line %d: { \n", ++lineNum);

    } newline classBody rlb {strcat(msg," } ");}
    | classHead llb {
        //  { 在同一行
        strcat(msg," { ");
        /*printf("25\n");*/
        format_print();

    } newline classBody rlb {strcat(msg," } ");}
    ;
classHead: class_RW {strcat(msg,$1);strcat(msg," ");} ID {
        strcat(msg, $3);
    };

classBody: lines ;

//-----------------------------------------------------------------------
// method/function
// medthod strcture and definition
// medthodhead ( args ) { body }
//-----------------------------------------------------------------------

methodDeclare:
    metohdhead NEWLINE llb {
        format_print();

        printf("line %d: { \n", ++lineNum);
    }newline metohdBody rlb {strcat(msg," } ");}
    | metohdhead llb{
        strcat(msg, " { ");
        format_print();

    }newline metohdBody rlb {strcat(msg," } ");}
    ;
metohdhead: type_and_name LP {strcat(msg, " ( ");} argument RP{
        strcat(msg, " ) ");
    };
type_and_name:
    MAIN {strcat(msg, $1);}
    | return_type MAIN {strcat(msg, $2);}
    | return_type ID {strcat(msg, $2);IDduplicateJudge($2);}
    ;
return_type :
    TYPE_RW {strcat(msg, $1);strcat(msg, " ");}
    | fr_RW {strcat(msg, $1);strcat(msg, " ");}
    ;
argument: {}
    | TYPE_RW {strcat(msg, $1);strcat(msg, " ");} initialize_or_not {
    }
    | argument COMMA {strcat(msg, " , ");} TYPE_RW {strcat(msg, $4);strcat(msg, " ");} initialize_or_not {
    }
    ;

metohdBody: lines ;
//-----------------------------------------------------------------------
// statement
// only can be single statment
// compound statment definded in lines:
// sum
//-----------------------------------------------------------------------
statement: arrayElementOrNOT EQ {strcat(msg, " = ");} expression  {
    }
    | PRINT{strcat(msg, "print");} LP{strcat(msg, " ( ");} expression RP{
        strcat(msg, " ) ");
    }
    | READ {strcat(msg, "read");} LP{strcat(msg, " ( ");} expression RP{
        strcat(msg, " ) ");
    }
    | RETURN {strcat(msg, "return");} LP{strcat(msg, " ( ");} expression RP{
        strcat(msg, " ) ");
    }
    ;

//-----------------------------------------------------------------------
// condition
//-----------------------------------------------------------------------
bool_expr: expression INFIX expression
        | error {dealwithError(5);yyerrok;}
        ;

INFIX: THESAME {
        strcat(msg, " == ");
    }
    | NotEQ {
        strcat(msg, " != ");
    }
    | GTE {
        strcat(msg, " > ");
    }
    | LOW {
        strcat(msg, " < ");
    }
    | GTEEQ {
        strcat(msg, " >= ");
    }
    | LOWEQ {
        strcat(msg, " <= ");
    };
//-----------------------------------------------------------------------
// if-else
// 2 parts if parts and else part
// let else empty to make only if
//-----------------------------------------------------------------------
if_statement:
    if_statement_head NEWLINE llb{
        format_print();

        printf("line %d: { \n", ++lineNum);
    } newline if_statement_body rlb{strcat(msg," } ");}
    | if_statement_head llb {
        strcat(msg, " { ");
        format_print();

    }newline if_statement_body rlb {strcat(msg," } ");}
    ;

if_statement_head: IF {strcat(msg,$1);} LP {strcat(msg," ( ");} bool_expr RP{
        strcat(msg," ) ");
    };
if_statement_body:lines;

else_block:newline
    | newline else_block_head NEWLINE llb{
        format_print();

        printf("line %d: { \n", ++lineNum);
    } newline else_block_body rlb{strcat(msg," } ");}
    | newline else_block_head llb {
        strcat(msg, " { ");
        format_print();

     }newline else_block_body rlb {strcat(msg," } ");};

else_block_head:ELSE {strcat(msg,$1);};

else_block_body:lines;

onlyelse: ELSE {strcat(msg,$1);};

//-----------------------------------------------------------------------
// loop
// while and for
//-----------------------------------------------------------------------
loop:
    loophead NEWLINE llb{
        format_print();

        printf("line %d: { \n", ++lineNum);
    } newline loopbody rlb{strcat(msg," } ");}
    | loophead llb {
        strcat(msg, " { ");
        format_print();

    }newline loopbody rlb {strcat(msg," } ");}
    | loophead NEWLINE {format_print();lineNum++;} expression SEMICOLON {strcat(msg," ; ");}
    ;

loophead: while_RW {strcat(msg,$1);} LP {strcat(msg," ( ");} bool_expr RP{
        strcat(msg," ) ");
    }
    | for_RW {strcat(msg,$1);} LP {strcat(msg," ( ");}
    forloopstart SEMICOLON {strcat(msg," ; ");}
    bool_expr SEMICOLON {strcat(msg," ; ");}
    expression RP{
        strcat(msg," ) ");
    };

forloopstart: statement | valDeclare;

loopbody:lines;
//-----------------------------------------------------------------------
// block_seperate
// detect the curly brackets to know the code block
// and which symbol table to use
//-----------------------------------------------------------------------
llb:LLB{
    current_block_stack++;
}
rlb:RLB{
    blockReset();
    current_block_stack--;
}

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
newline: NEWLINE {
        charNum = 0;
        lineNum++;
    };

%%

int main(){
    create();
    yyparse();
    return 0;
}
void yyerror() {flag = 0;}

void ErrorMsg(int errortype) {
    switch(errortype){
        case 1:
            printf(">>>>>>>>>>: duplicate declare at line %d, Var name \"%s\"\n", lineNum,conflictID);
            break;
        case 2:
            printf(">>>>>>>>>>: declare format error at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        case 3:
            printf(">>>>>>>>>>: need ';' at EOL at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        case 4:
            printf(">>>>>>>>>>: else without if at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        case 5:
            printf(">>>>>>>>>>: error boolean expression at line %d, char %d(not counting space)\n", lineNum,charNum);
            break;
        default:
            break;
    }
        flag = 0;
        errortype = 0;
};

void format_print(){
    if(flag == 1){
            printf("line %d: %s\n", lineNum, msg);
            memset(msg, 0, 256);
        }
    else{
        flag = 1;
        memset(msg, 0, 256);
    }
}

void dealwithError(int etype){
    ErrorMsg(etype);
    flag = 1;
}



//-------------------------------------------
// symbol table function to use
//-------------------------------------------
void blockReset(){
    for(int j = 0; j < 20; j++)
        for(int k= 0; k < 25; k++)
            symbol_table[current_block_stack][j][k] = '\0';
    symbol_table_next_avalible_index[current_block_stack] = 0;
}


void create(){ /*reset*/
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 20; j++)
            for(int k= 0; k < 25; k++)
                symbol_table[i][j][k]='\0';
}

int lookup(char* str){
    if(symbol_table[current_block_stack][0][0]=='\0')
        return 0; /*empty symbol table*/
    for(int i = 0; i < symbol_table_next_avalible_index[current_block_stack]; i++){
        for(int j = 0; j < 25;j++){
            if(symbol_table[current_block_stack][i][j]=='\0' && str[j]=='\0'){
                return 1;
            }
            if(symbol_table[current_block_stack][i][j]!=str[j])
                break;
        }
    }
    return 0;
}

void insert(char* str){
    for(int i = 0; i < 25;i++){
        symbol_table[current_block_stack][symbol_table_next_avalible_index[current_block_stack]][i]=str[i];
        if(str[i]=='\0') break;
    }
    symbol_table_next_avalible_index[current_block_stack]++;
}

void IDduplicateJudge(char* str){
    if(lookup(str)){
        conflictID = str;
        dealwithError(1);
    }
    else
        insert(str);
}
