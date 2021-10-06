%{
#include "y.tab.h" // Remember to includ this header file
#include <stdio.h>
int lineNum = 1;
int charNum = 0;
%}
Digit [0-9]+
reserve_word_type boolean|char|int|float|String
func_return_RW void
id [_A-Za-z][A-Za-z0-9]*
str \"(([\\][^nr\n\r])*[^\'\"\n\r]*)*[^\\]\"
comments \/\/[^\n]*
longcomment \/\*([^\*][\/]|[\*][^\/]|[^\*\/]*|[\*][ ][\/])*(\*\/)
static_RW static
final_RW final
new_RW new
class_RW class
print_RW print
read_RW read
main_RW main
while_RW while
for_RW for
if_RW if
else_RW else
return_RW return

space [ \t]+
semicolon ;
comma ,
%%
{longcomment} {
    printf("line %d: ", lineNum);
    for(int i = 0;i < yyleng;i++){
        if(yytext[i] == '\n'){
            printf("\n");
            printf("line %d: ", ++lineNum);
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }
    }
    printf("\n");
    return Comment_end;
}

{comments} {
    printf("line %d: ", lineNum);
    for(int i = 0;i < yyleng;i++){
        if(yytext[i] == '\n'){
            printf("\n");
            printf("line %d: ", ++lineNum);
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }
    }
    printf("\n");
    return Comment_end;
}
{str} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return STRING;
}
{Digit}	{
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return NUMBER;
}
{while_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return while_RW;
}
{for_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return for_RW;
}
{static_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return STATIC;
}
{final_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return FINAL;
}
{new_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return NEW;
}
{class_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return class_RW;
}
{reserve_word_type} {
    sscanf(yytext, "%s", yylval.strVal); // strVal is defined in "calc.y"
    charNum+=yyleng;
    return TYPE_RW;
}
{func_return_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return fr_RW;
}
{print_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return PRINT;
}
{read_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return READ;
}
{main_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return MAIN;
}
{if_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return IF;
}
{else_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return ELSE;
}
{return_RW} {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return RETURN;
}
\+\+ {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return PLUS1;
}
\-\- {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return MINUS1;
}
\=\= {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return THESAME;
}
\!\= {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return NotEQ;
}
\>\= {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return GTEEQ;
}
\<\= {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return LOWEQ;
}
\> {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return GTE;
}
\< {
    sscanf(yytext, "%s", yylval.strVal); // floatVal is defined in "calc.y"
    charNum+=yyleng;
    return LOW;
}

\+ {
    charNum+=yyleng;
    return PLUS;
}
\- {
    charNum+=yyleng;
    return MINUS;
}
\* {
    charNum+=yyleng;
    return MUL;
}
\/ {
    charNum+=yyleng;
    return DIV;
}
\( {
    charNum+=yyleng;
    return LP;
}
\) {
    charNum+=yyleng;
    return RP;
}
\[ {
    charNum+=yyleng;
    return LB;
}
\] {
    charNum+=yyleng;
    return RB;
}
\{ {
    charNum+=yyleng;
    return LLB;
}
\} {
    charNum+=yyleng;
    return RLB;
}
\n {
    return NEWLINE;
}
\r\n {
    charNum+=yyleng;
    return NEWLINE;
}
\= {
    charNum+=yyleng;
    return EQ;
}
{space} {
}
{semicolon} {
    sscanf(yytext, "%s", yylval.strVal); // strVal is defined in "calc.y"
    charNum+=yyleng;
    return SEMICOLON;
}
{comma} {
    sscanf(yytext, "%s", yylval.strVal); // strVal is defined in "calc.y"
    charNum+=yyleng;
    return COMMA;
}

{id} {
    sscanf(yytext, "%s", yylval.strVal); // strVal is defined in "calc.y"
    charNum+=yyleng;
    return ID;
}


. {
    return yytext[0];
}
%%

int yywrap(){
    return 1;
}
