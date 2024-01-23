#include "include/token.h"
#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern char *yytext;
extern char *yytname;
extern int line_count;

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    if (!yyin)
    {
        printf("Could not open lex.yy.c!\n");
        return 1;
    }

    while (1)
    {
        Token t = yylex();
        if (t == TOKEN_EOF)
        {
            break;
        }
        printf("Token: %d; text: %s\n", t, yytext);
    }
    printf("Line count: %d\n", line_count);
}