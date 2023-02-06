

%{
   #include "tokens-manual.h"
   int lineno;
   struct yylval {
    char *string_literal;
    int integer;
    char *type;
    double finteger;
   };
   struct yylval yylval;
        
        
%}

DIGIT                            [1-9]+[0-9]*
DIGITFLOAT                       [0-9]
OCTAL                            0[1-7]*
HEX                              0[xX][0-9|a-f|A-F]+
LONG                             [lL]
LONGLONG                         [(LL)|(ll)]
UNSIGNED                         [uU]
EXP                              [eE][+-]?{DIGITFLOAT}+
P                                [pP][+-]?{DIGITFLOAT}+
DOTTEDDIGITS                     ([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)
HEXDOTTEDDIGITS                  0[xX]([0-9|a-f|A-F]+\.[0-9|a-f|A-F]*)|([0-9|a-f|A-F]*\.[0-9|a-f|A-F]+)


ESCSEQ                           \\[abfnrtv'"\?\\]
OCTESC                           \\[0-7]{1,3}
HEXESC                           \\x[0-9a-fA-F]{1,2}
SC                               [^\n\\\']{1}
SCS                              [^\n\\\"]{1}
ANYTHING                         [.]
%x charseq
%x str
%%
    char string_buf[1024]; 
    char charvalue;
    char *string_buf_ptr;
    int char_count; 
    

\n                  { lineno++; }
{DIGIT}                         { yylval.integer = atoi(yytext); yylval.type = "int"; return NUMBER; }
{DIGIT}{LONG}                   { yylval.integer = atoi(yytext); yylval.type = "int, long"; return NUMBER; }
{DIGIT}{LONGLONG}               { yylval.integer = atoi(yytext); yylval.type = "int, longlong"; return NUMBER; }
{DIGIT}{UNSIGNED}               { yylval.integer = atoi(yytext); yylval.type = "int, unsigned"; return NUMBER; }
{DIGIT}{UNSIGNED}{LONG}         { yylval.integer = atoi(yytext); yylval.type = "int, unsigned long"; return NUMBER; }
{DIGIT}{UNSIGNED}{LONGLONG}     { yylval.integer = atoi(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{HEX}                           { yylval.integer = atoi(yytext);  yylval.type = "int"; return NUMBER; }
{HEX}{LONG}                     { yylval.integer = atoi(yytext); yylval.type = "int, long"; return NUMBER; }
{HEX}{LONGLONG}                 { yylval.integer = atoi(yytext); yylval.type = "int, longlong"; return NUMBER; }
{HEX}{UNSIGNED}                 { yylval.integer = atoi(yytext); yylval.type = "int, unsigned"; return NUMBER; }
{HEX}{UNSIGNED}{LONG}           { yylval.integer = atoi(yytext); yylval.type = "int, unsigned long"; return NUMBER; }
{HEX}{UNSIGNED}{LONGLONG}       { yylval.integer = atoi(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{OCTAL}                         { yylval.integer = atoi(yytext); yylval.type = "int"; return NUMBER; }
{OCTAL}{LONG}                   { yylval.integer = atoi(yytext); yylval.type = "int, long"; return NUMBER; }
{OCTAL}{LONGLONG}               { yylval.integer = atoi(yytext); yylval.type = "int, longlong"; return NUMBER; }
{OCTAL}{UNSIGNED}               { yylval.integer = atoi(yytext); yylval.type = "int, unsigned"; return NUMBER; }
{OCTAL}{UNSIGNED}{LONG}         { yylval.integer = atoi(yytext); yylval.type = "int, unsigned long"; return NUMBER; }
{OCTAL}{UNSIGNED}{LONGLONG}     { yylval.integer = atoi(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{DOTTEDDIGITS}{EXP}?            { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DOTTEDDIGITS}{EXP}?[Ff]        { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DOTTEDDIGITS}{EXP}?[Ll]        { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{DIGITFLOAT}+{EXP}              { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DIGITFLOAT}+{EXP}[Ff]          { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }
{DIGITFLOAT}+{EXP}[Ll]          { yylval.finteger = atof(yytext); yylval.type = "int, unsigned longlong"; return NUMBER; }

{HEXDOTTEDDIGITS}{P}      
{HEXDOTTEDDIGITS}{P}[Ff]
{HEXDOTTEDDIGITS}{P}[Ll]

\'   {   char_count = 0; BEGIN(charseq); }
<charseq>\'  { BEGIN(INITIAL); 
              if(char_count != 1) {
                fprintf(stderr, "Error multibyte char only first value was used \n");
              }  
              printf("%c", charvalue); 
              }
<charseq>{OCTESC} {
    int result;
    if (char_count == 0) {
    printf("GETTING OCTAL\n");
    sscanf(yytext + 1, "%o", &result);
    charvalue = result; 
    }
    char_count++;
}
<charseq>{HEXESC} {
      int result;
      yytext[0] = '0';
    if (char_count == 0) {
    printf("GETTING HEX\n");
    sscanf(yytext, "%x", &result);
    charvalue = result; 
    }
    char_count++;
}
<charseq>\\a  {  if(char_count == 0) charvalue = '\a'; char_count++; }
<charseq>\\b  {  if(char_count == 0) charvalue = '\b'; char_count++; }
<charseq>\\f  {  if(char_count == 0) charvalue = '\f'; char_count++; }
<charseq>\\r  {  if(char_count == 0) charvalue = '\r'; char_count++; }
<charseq>\\t  {  if(char_count == 0) charvalue = '\t'; char_count++; }
<charseq>\\v  {  if(char_count == 0) charvalue = '\v'; char_count++; }
<charseq>\\?  {  if(char_count == 0) charvalue = '\?'; char_count++; }
<charseq>\\'  {  if(char_count == 0) charvalue = '\''; char_count++; }
<charseq>\\n  {  if(char_count == 0) charvalue = '\n'; char_count++; }
<charseq>\\\\ {  if(char_count == 0) charvalue = '\\'; char_count++; }
<charseq>{SC} {
    int result;
    if(char_count == 0) {
        printf("GETTING SC \n"); 
        charvalue = yytext[0];
    }
    char_count++;
}

<charseq>(.|\n|\\|\') {
    printf("Error invalid value in char seq");
}    

\"  {string_buf_ptr = string_buf; BEGIN(str);}

<str>\" {BEGIN(INITIAL); 
    *string_buf_ptr = '\0';
    printf("%s\n", string_buf); }
<str>{OCTESC} {
    int result;
    sscanf(yytext+1, "%o", &result);
    *string_buf_ptr++ = result;

}
<str>{HEXESC} {
    int result;
    yytext[0] = '0';
    printf("GETTING HEX\n");
    sscanf(yytext, "%x", &result);
    *string_buf_ptr++ = result;
}
<str>{SCS} {
    *string_buf_ptr++ = yytext[0];
}
<str>\\a  {  *string_buf_ptr++ = '\a';}
<str>\\b  {   *string_buf_ptr++ = '\b';}
<str>\\f  {   *string_buf_ptr++ = '\f'; }
<str>\\r  {   *string_buf_ptr++ = '\r'; }
<str>\\t  {   *string_buf_ptr++ = '\t'; }
<str>\\v  {   *string_buf_ptr++ = '\v'; }
<str>\\?  {   *string_buf_ptr++ = '\?'; }
<str>\\\"  {   *string_buf_ptr++ = '\"'; }
<str>\\n  {   *string_buf_ptr++ = '\n'; }
<str>\\\\ {   *string_buf_ptr++ = '\\'; }


[ \n\t\r\v\f]+      { printf("white space"); }
"auto"              { return AUTO; }
"_Bool"             { return _BOOL; }
"break"             { return BREAK; }
"case"              { return CASE; }
"char"              { return CHAR; }
"_Complex"          { return _COMPLEX; } 
"const"             { return CONST;}
"continue"          { return CONTINUE; }
"default"           { return DEFAULT; }
"do"                { return DO; }
"double"            { return DOUBLE; }
"else"              { return ELSE; }
"enum"              { return ENUM; }
"extern"            { return EXTERN; }
"float"             { return FLOAT; }
"for"               { return FOR; }
"goto"              { return GOTO; }
"if"                { return IF; }
"_Imaginary"        { return _IMAGINARY; }
"inline"            { return INLINE; }
"int"               { return INT; }
"long"              { return LONG; }
"register"          { return REGISTER; }
"restrict"          { return RESTRICT; }
"return"            { return RETURN; }
"short"             { return SHORT; }
"signed"            { return SIGNED; }
"sizeof"            { return SIZEOF; }
"static"            { return STATIC; }
"struct"            { return STRUCT; }
"switch"            { return SWITCH; }
"typedef"           { return TYPEDEF; }
"union"             { return UNION; }
"unsigned"          { return UNSIGNED; }
"void"              { return VOID; }
"volatile"          { return VOLATILE; }
"while"             { return WHILE; }
  
"->"                { return INDSEL;  } 
"++"                { return PLUSPLUS; }
"--"                { return MINUSMINUS; }
"<<"                { return SHL; }
">>"                { return SHR; }
"<="                { return LTEQ; }
">="                { return GTEQ; }
"=="                { return EQEQ; }
"!="                { return NOTEQ; }
"&&"                { return LOGAND; }
"||"                { return LOGOR; }
"..."               { return ELLIPSIS; }
"*="                { return TIMESEQ; }
"/="                { return DIVEQ; }
"%="                { return MODEQ; }
"+="                { return PLUSEQ; }
"-="                { return MINUSEQ; }
"<<="               { return SHLEQ; }
">>="               { return SHREQ; }
"&="                { return ANDEQ; }
"|="                { return OREQ; }
"^="                { return XOREQ; }


"!"                 { return '!'; }
"^"                 { return '^'; }
"&"                 { return '&'; }
"*"                 { return '*'; }
"-"                 { return '-'; }
"+"                 { return '+'; }              
"="                 { return '='; }
"~"                 { return '~'; }
"|"                 { return '|'; }
"."                 { return '.'; }
"<"                 { return '<'; }
">"                 { return '>'; }
"/"                 { return '/'; }
"?"                 { return '?'; }
"("                 { return '('; }
")"                 { return ')'; }
"["                 { return '['; }
"]"                 { return ']'; }
","                 { return ','; }
";"                 { return ';'; }
":"                 { return ':'; }     

[_a-zA-Z][_a-zA-Z0-9]+       { yylval.string_literal = strdup(yytext); return IDENT; /* put somewhere */ }
.                           { printf("Error unrecognized token\n"); }
%%
int yywrap() {}
int main() {
int t = yylex();
int x = 0;
if(t && x == 0)
{printf("%d %s %f %s\n", t, yylval.string_literal, yylval.finteger, yylval.type);
    x++;
}
}
