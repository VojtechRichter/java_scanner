%{
    #include "include/token.h"

    int line_count = 1;
%}

DIGIT [0-9]
LETTER [a-zA-Z]
LINE .*\n

%%
(" "|\t|\n)
\+|\-\/|\* { return INFIX_OP; }
byte { return TYPE_BYTE; }
short { return TYPE_SHORT; } 
char { return TYPE_CHAR; }
int { return TYPE_INT; }
long { return TYPE_LONG; }
float { return TYPE_FLOAT; }
double { return TYPE_DOUBLE; }
boolean { return TYPE_BOOLEAN; }
^{LETTER}({LETTER}|{DIGIT})+ { return ID; }
\{ { return LBRACE; }
\} { return RBRACE; }
\[ { return LBRACKET; }
\] { return RBRACKET; }
\( { return LPAREN; }
\) { return RPAREN; }
{LETTER}|{DIGIT}*.{LETTER}|{DIGIT}* { return ID; }
class { return CLASS_DECL; }
type { return TYPE_DECL; }
enum { return ENUM_DECL; }
interface { return INTERFACE_DECL; }
import { return IMPORT_DECL; }
switch|while|do|for|break|continue|if|else|return|throw|try|catch { return STATEMENT; }
\" { return DQUOTE; }
\' { return QUOTE; }
String { return TYPE_STRING; }
void { return TYPE_VOID; }
{LINE} { line_count += 1; }

. { printf("Unknown token\n"); }

<<EOF>> { return TOKEN_EOF; }
%%

int yywrap(void) {return 1;}