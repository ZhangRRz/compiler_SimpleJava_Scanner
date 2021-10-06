%{
#include<stdio.h>
#include "table.h"
unsigned charCount = 1,idCount = 0, lineCount = 1;

%}

/* Comment */
comments \/\/.*[\n]
longcomment \/\*([^\*][\/]|[\*][^\/]|[^\*\/]*|[\*][ ][\/])*(\*\/)

/*Symbols*/
symbols [\,\:\;\(\)\[\]\{\}]

/*Operators*/
add \+
addone \+\+
sub \-
subone \-\-
mul \*
div \/
mod \%
assign \=
low \<
lowe \<\=
gre \>
gree \>\=
eq \=\=
neq \!\=
and \&\&
or \|\|
not \!

operator {addone}|{subone}|{lowe}|{gree}|{eq}|{neq}|{add}|{sub}|{mul}|{div}|{mod}|{assign}|{low}|{gre}|{and}|{or}|{not}

/*Reserved words*/
Reserved_words boolean|break|byte|case|char|catch|class|const|continue|default|do|double|else|extends|false|final|finally|float|for|if|implements|int|long|main|new|print|private|protected|public|return|short|static|string|switch|this|true|try|void|while

/* id */
id (([\_]*[a-zA-Z]+[0-9]*)|([\_][a-zA-Z0-9]*))+

/* number */
integernum [-]?([1-9][0-9]*|[0])
floatnum [-]?([0]|[1-9][0-9]*)[\.][0-9]+([Ee][\+\-][0-9]+[Ff]?)?

/* invalid str */
notstr_0 [\'][^\']*[\']

/* string */
/*str \"(([\\][\'\"])*[^a\'\"]*[a]*)*[^\\]\"*/
str \"(([\\][^nr\n\r])*[^\'\"\n\r]*)*[^\\]\"

/* invalid string */
notstr_1 [^\"]*[\\][\"][^\r\n]
notstr_2 \"(([\\][\"])*([^\"\r\n])*)*

/* illegal ID*/
notID [\^\#0-9]+(([\_]*[a-zA-Z]+[0-9]*)|([\_][a-zA-Z0-9]*))+



/* newline*/
newline \r\n|\n
/* no need to pass */
space [ \t]

%%
{longcomment} {
    printf("Line: %d, 1st char: %d, \"", lineCount, charCount);

    for(int i = 0;i < yyleng;i++){
        charCount ++;
        if(yytext[i] == '\n'){
            lineCount++;
            charCount = 1;
            printf("\n");
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }

    }
    printf("\" is a \"comment\".\n");

}

{comments} {
    printf("Line: %d, 1st char: %d, \"", lineCount, charCount);

    for(int i = 0;i < yyleng;i++){
        charCount ++;
        if(yytext[i] == '\n'){
            lineCount++;
            charCount = 1;
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }

    }
    printf("\" is a \"comment\".\n");
}

{symbols} {
    printf("Line: %d, 1st char: %d, \"%s\" is a \"symbol\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
}

{operator} {
	printf("Line: %d, 1st char: %d, \"%s\" is an \"operator\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
}
{Reserved_words} {
    printf("Line: %d, 1st char: %d, \"%s\" is a \"reserved word\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
}

{id} {
    printf("Line: %d, 1st char: %d, \"%s\" is an \"ID\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
    insert(yytext);
}

{integernum} {
    printf("Line: %d, 1st char: %d, \"%s\" is an \"integer\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
}

{floatnum} {
    printf("Line: %d, 1st char: %d, \"%s\" is a \"float\".\n", lineCount, charCount, yytext);
	charCount += yyleng;
}
{notstr_0} {
    printf("Line: %d, 1st char: %d, \"", lineCount, charCount);

    for(int i = 0;i < yyleng;i++){
        charCount ++;
        if(yytext[i] == '\n'){
            lineCount++;
            charCount = 1;
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }

    }
    printf("\" is a invalid \"string\".\n");
}

{str} {
    printf("Line: %d, 1st char: %d, \"", lineCount, charCount);

    for(int i = 0;i < yyleng;i++){
        charCount ++;
        if(yytext[i] == '\n'){
            lineCount++;
            charCount = 1;
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }

    }
    printf("\" is a \"string\".\n");
}

{notstr_1} {
    printf("Line: %d, 1st char: %d, \"", lineCount, charCount);

    for(int i = 0;i < yyleng;i++){
        charCount ++;
        if(yytext[i] == '\n'){
            lineCount++;
            charCount = 1;
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }

    }
    printf("\" is a invalid \"string\".\n");
}
{notstr_2} {
    printf("Line: %d, 1st char: %d, \"", lineCount, charCount);

    for(int i = 0;i < yyleng;i++){
        charCount ++;
        if(yytext[i] == '\n'){
            lineCount++;
            charCount = 1;
        }else if(yytext[i] != '\r'){
            printf("%c",yytext[i]);
        }

    }
    printf("\" is a invalid \"string\".\n");
}


{notID} {
    printf("Line: %d, 1st char: %d, \"%s\" is an invalid\"ID\".\n", lineCount, charCount, yytext);
    charCount += yyleng;
}

{newline} {lineCount++;charCount = 1;}
{space} {charCount += yyleng;}

. {
    printf("Line: %d, 1st char: %d, \"%s\" is a \"non-matched token\".\n", lineCount, charCount, yytext);
    charCount += yyleng;
}

%%
int main(){
    create();
    yylex();
    dump();
    return 0;
}