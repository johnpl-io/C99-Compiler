

%{
 
   #include <stdlib.h>
   #include <stdio.h>
   #include <ctype.h>
   #include "../parser/parser.tab.h"
   int get_line_info();
   int handle_error();
   int lineno = 1;
   /*  enum type {
        INT_SIGNED,
        INT_LONG,
        INT_LONGLONG,
        INT_UNSIGNED,
        INT_ULONG,
        INT_ULONGLONG,
        FLOATV,
        DOUBLEV,
        DOUBLE_LONG,
    };
    */
/*    
       struct Num  {
    unsigned long long integer;
     long double fvalue;
     enum type type;
 
   };
*/
   /*
   union yylval {
    char *string_literal;
    char charlit;
    struct Num num;
   
   }; */
 

  /* typedef union yylval YYSTYPE;
  */ extern YYSTYPE yylval; 
    char filename_buf[256];
    char *filename_buf_ptr;
    int string_buf_len = 0;
        
%}

DIGIT                            ([1-9]+[0-9]*)|("0")
DIGITFLOAT                       [0-9]
OCTAL                            0[0-7]+
HEX                              0[xX][0-9|a-f|A-F]+
LONG                             [lL]
LONGLONG                         (LL)|(ll)
UNSIGNED                         [uU]
EXP                              [eE][+-]?{DIGITFLOAT}+
P                                [pP][+-]?{DIGITFLOAT}+
DOTTEDDIGITS                     ([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)
HEXDOTTEDDIGITS                  0[xX]([0-9|a-f|A-F]+\.[0-9|a-f|A-F]*)|([0-9|a-f|A-F]*\.[0-9|a-f|A-F]+)
DIGITS                           {DIGITS}|"0"

ESCSEQ                           \\[abfnrtv'"\?\\]
OCTESC                           \\[0-7]{1,3}
HEXESC                           \\x[0-9a-fA-F]{1,2}
SC                               [^\n\\\']{1}
SCS                              [^\n\\\"]{1}
ANYTHING                         [.]
%x charseq
%x str
%x filename
%%

    char string_buf[1024]; 
    char charvalue;
    char *string_buf_ptr;
    int char_count; 
    int count = 0;
\n                  { lineno++; }
"#"[ ][0-9]+" \""  { count = 0; filename_buf_ptr = filename_buf; lineno = 0;  BEGIN(filename);  }


<filename>\" { 
    count++;
    if(count == 1) {
     *filename_buf_ptr = '\0'; 
    }
}
<filename>\n {BEGIN(INITIAL); }
<filename>. { *filename_buf_ptr++ = yytext[0];  }

{DIGIT}                         { yylval.num.integer= atoi(yytext); yylval.num.type = INT_SIGNED; return NUMBER; }
{DIGIT}{LONG}                   { yylval.num.integer = atol(yytext); yylval.num.type =  INT_LONG; return NUMBER; }
{DIGIT}{LONGLONG}               { yylval.num.integer = atoll(yytext); yylval.num.type = INT_LONGLONG; return NUMBER; }
{DIGIT}{UNSIGNED}               { yylval.num.integer = strtoul(yytext, NULL, 10); yylval.num.type = INT_UNSIGNED; return NUMBER; }
{DIGIT}{UNSIGNED}{LONG}         { yylval.num.integer = strtoul(yytext, NULL, 10); yylval.num.type = INT_ULONG; return NUMBER; }
{DIGIT}{UNSIGNED}{LONGLONG}     { yylval.num.integer = strtoull(yytext, NULL, 10); yylval.num.type = INT_ULONGLONG; return NUMBER; }

{HEX}                           { yylval.num.integer = strtoul(yytext, NULL, 16);  yylval.num.type = INT_SIGNED; return NUMBER; }
{HEX}{LONG}                     { yylval.num.integer = strtoul(yytext, NULL, 16); yylval.num.type = INT_LONG; return NUMBER; }
{HEX}{LONGLONG}                 { yylval.num.integer = strtoull(yytext, NULL, 16); yylval.num.type = INT_LONGLONG; return NUMBER; }
{HEX}{UNSIGNED}                 { yylval.num.integer = strtoul(yytext, NULL, 16); yylval.num.type = INT_UNSIGNED; return NUMBER; }
{HEX}{UNSIGNED}{LONG}           { yylval.num.integer = strtoull(yytext, NULL, 16); yylval.num.type = INT_ULONG; return NUMBER; }
{HEX}{UNSIGNED}{LONGLONG}       { yylval.num.integer = strtoull(yytext, NULL, 16); yylval.num.type = INT_ULONGLONG; return NUMBER; }

{OCTAL}                         { yylval.num.integer = strtoul(yytext, NULL, 8); yylval.num.type = INT_SIGNED; return NUMBER; }
{OCTAL}{LONG}                   { yylval.num.integer = strtoul(yytext, NULL, 8); yylval.num.type = INT_LONG; return NUMBER; }
{OCTAL}{LONGLONG}               { yylval.num.integer = strtoull(yytext, NULL, 8); yylval.num.type = INT_LONGLONG; return NUMBER; }
{OCTAL}{UNSIGNED}               { yylval.num.integer = strtoull(yytext, NULL, 8); yylval.num.type = INT_UNSIGNED; return NUMBER; }
{OCTAL}{UNSIGNED}{LONG}         { yylval.num.integer = strtoull(yytext, NULL, 8); yylval.num.type = INT_ULONG; return NUMBER; }
{OCTAL}{UNSIGNED}{LONGLONG}     { yylval.num.integer = strtoull(yytext, NULL, 8); yylval.num.type =  INT_ULONGLONG; return NUMBER; }

{DOTTEDDIGITS}{EXP}?            { yylval.num.fvalue = atof(yytext); yylval.num.type = DOUBLEV;  return NUMBER;}
{DOTTEDDIGITS}{EXP}?[Ff]        { yylval.num.fvalue = atof(yytext); yylval.num.type =  FLOATV; return NUMBER; }
{DOTTEDDIGITS}{EXP}?[Ll]        { yylval.num.fvalue = atof(yytext); yylval.num.type =  DOUBLE_LONG; return NUMBER; }

{DIGITFLOAT}+{EXP}              { yylval.num.fvalue = atof(yytext); yylval.num.type =  DOUBLEV; return NUMBER; }
{DIGITFLOAT}+{EXP}[Ff]          { yylval.num.fvalue = atof(yytext); yylval.num.type = FLOATV; return NUMBER; }
{DIGITFLOAT}+{EXP}[Ll]          { yylval.num.fvalue = atof(yytext); yylval.num.type = DOUBLE_LONG; return NUMBER; }

{HEXDOTTEDDIGITS}{P}      { yylval.num.fvalue = strtod(yytext, NULL); yylval.num.type = DOUBLEV; return NUMBER; }
{HEXDOTTEDDIGITS}{P}[Ff]  { yylval.num.fvalue = strtold(yytext, NULL); yylval.num.type = FLOATV; return NUMBER; }
{HEXDOTTEDDIGITS}{P}[Ll] { yylval.num.fvalue = strtold(yytext, NULL); yylval.num.type = DOUBLE_LONG; return NUMBER; }

{HEX}{P}                 { yylval.num.fvalue = strtod(yytext, NULL); yylval.num.type = DOUBLEV; return NUMBER; }
{HEX}{P}[Ff]             { yylval.num.fvalue = strtold(yytext, NULL); yylval.num.type = FLOATV; return NUMBER; }
{HEX}{P}[Ll]            { yylval.num.fvalue = strtold(yytext, NULL); yylval.num.type = DOUBLE_LONG; return NUMBER; }


\'   {   char_count = 0; BEGIN(charseq); }
<charseq>\'  { BEGIN(INITIAL); 
              if(char_count == 0) {
                fprintf(stderr, "%s : %d Error multibyte char onfdasdfly first value was used \n", filename_buf, lineno);
              }  
              if(char_count > 1) {
                fprintf(stderr, "  %s : %d Error multibyte char only first value was used\n", filename_buf, lineno);
              }
             // printf("%d", charvalue); 
              yylval.charlit = charvalue;
              return CHARLIT;
              }
<charseq>{OCTESC} {
    int result;
    if (char_count == 0) {
   // printf("GETTING OCTAL\n");
    sscanf(yytext + 1, "%o", &result);
    charvalue = result; 
    }
    char_count++;
}
<charseq>\\[0-9]+ {
    fprintf(stderr, "%s : %d invalid octal",filename_buf, lineno );
}
<charseq>{HEXESC} {
   
      int result;
      yytext[0] = '0';
    if (char_count == 0) {
   //printf("GETTING HEX\n");
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
<charseq>\\\?  {  if(char_count == 0) charvalue = '\?'; char_count++; }
<charseq>\\'  {  if(char_count == 0) charvalue = '\''; char_count++; }
<charseq>\\n  {  if(char_count == 0) charvalue = '\n'; char_count++; }
<charseq>\\\\ {  if(char_count == 0) charvalue = '\\'; char_count++; }
<charseq>{SC} {

    int result;
    if(char_count == 0) {
      //  printf("GETTING SC \n"); 
        charvalue = yytext[0];
    }
    char_count++;
}

<charseq>(.|\n|\\|\') {
    fprintf(stderr, "%s : %d Error invalid value in char sequence.\n", filename_buf, lineno);
}    

\"  {string_buf_ptr = string_buf; BEGIN(str);}

<str>\" {BEGIN(INITIAL); 
    *string_buf_ptr = '\0';
  //printf("%s\n", string_buf);
  string_buf_len = string_buf_ptr - string_buf;
  yylval.string_literal = strdup(string_buf);
  return STRING;
   }
<str>{OCTESC} {
    int result;
    sscanf(yytext+1, "%o", &result);
    *string_buf_ptr++ = result;

}
<str>{HEXESC} {
    int result;
    yytext[0] = '0';
   // printf("GETTING HEX\n");
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
<str>\\\?  {   *string_buf_ptr++ = '\?';}
<str>\\\"  {   *string_buf_ptr++ = '\"'; }
<str>\\'  {   *string_buf_ptr++ = '\''; }
<str>\\n  {   *string_buf_ptr++ = '\n'; }
<str>\\\\ {   *string_buf_ptr++ = '\\'; }

<str>(,|\n|\\|\") {
    fprintf(stderr, "%s : %d Error Invalid sequence in string\n", filename_buf, lineno);
    //should be a fatal error
}   
[ \t\r\v\f]+      { ; }
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
"{"                 { return '{'; }
"}"                 { return '}'; }
"%"                 { return '%'; }
","                 { return ','; }
";"                 { return ';'; }
":"                 { return ':'; }     

[_A-Za-z][_a-zA-Z0-9]*      { yylval.string_literal = strdup(yytext); return IDENT; /* put somewhere */ }
.                           { fprintf(stderr, "Error unrecognized token : %s\n", yytext); }
%%

int get_line_info(){
    printf("got here at least");
    lineno = 0;
    
}
// print filename, line number and the incorrect token
// int handle_error(){
//     fprintf(stderr, "Error in file %s on line number %d: %s\n", filename, lineno, yytext);
// }
void charhelper(char val) {
    switch(val) {
        case '\a': printf("\\a"); break;
        case '\b': printf("\\b"); break;
        case '\f': printf("\\f"); break;
        case '\n': printf("\\n"); break;
        case '\r': printf("\\r"); break;
        case '\t': printf("\\t"); break;
        case '\v': printf("\\v"); break;
        default: printf("\\%03o", val);
    }
}
int yywrap() {}

/*
int main() {
    int t;
while(t = yylex())  {
   printf("%s \t\t %d \t\t",filename_buf, lineno);  
    switch(t) 
    {
        case AUTO:               printf("AUTO\n"); break;
        case _BOOL:             printf("_BOOL\n"); break;
        case BREAK:             printf("BREAK\n"); break;
        case CASE:              printf("CASE\n"); break;
        case CHAR:              printf("CHAR\n"); break;
        case _COMPLEX:          printf("_COMPLEX\n"); break;
        case CONST:             printf("CONST\n"); break;
        case CONTINUE:          printf("CONTINUE\n"); break;
        case DEFAULT:           printf("DEFAULT\n"); break;
        case DO:                printf("DO\n"); break;
        case DOUBLE:            printf("DOUBLE\n"); break;
        case ELSE:              printf("ELSE\n"); break;
        case ENUM:              printf("ENUM\n"); break;
        case EXTERN:            printf("EXTERN\n"); break;
        case FLOAT:             printf("Float\n"); break;
        case FOR:               printf("For\n"); break;
        case GOTO:              printf("Goto\n"); break;
        case IF:                printf("If\n"); break;
        case _IMAGINARY:        printf("_IMAGINARY\n"); break;
        case INLINE:            printf("Inline\n"); break;
        case INT:               printf("Int\n"); break;
        case LONG:              printf("Long\n"); break;
        case REGISTER:          printf("Register\n"); break;
        case RESTRICT:          printf("Restrict\n"); break;
        case RETURN:            printf("Return\n"); break;
        case SHORT:             printf("Short\n"); break;
        case SIGNED:            printf("Signed\n"); break;
        case SIZEOF:            printf("Sizeof\n"); break;
        case STATIC:            printf("Static\n"); break;
        case STRUCT:            printf("Struct\n"); break;
        case SWITCH:            printf("Switch\n"); break;
        case TYPEDEF:           printf("Typedef\n"); break;
        case UNION:             printf("Union\n"); break;
        case UNSIGNED:          printf("Unsigned\n"); break;
        case VOID:              printf("Void\n"); break;
        case VOLATILE:          printf("Volatile\n"); break;
        case WHILE:             printf("While\n"); break;
        case INDSEL:            printf("->\n"); break;
        case PLUSPLUS:          printf("++\n"); break;
        case MINUSMINUS:        printf("--\n"); break;
        case SHL:               printf("<<\n"); break;
        case SHR:               printf(">>\n"); break;
        case LTEQ:              printf("<=\n"); break;
        case GTEQ:              printf(">=\n"); break;
        case EQEQ:              printf("==\n"); break;
        case NOTEQ:             printf("!=\n"); break;
        case LOGAND:            printf("&&\n"); break;
        case LOGOR:             printf("||\n"); break;
        case ELLIPSIS:          printf("ELIPSIS\n"); break;
        case TIMESEQ:           printf("*=\n"); break;
        case DIVEQ:             printf("/=\n"); break;
        case MODEQ:             printf("\n"); break;
        case PLUSEQ:            printf("+=\n"); break;
        case MINUSEQ:           printf("-=\n"); break;
        case SHLEQ:             printf("<<=\n"); break;
        case SHREQ:             printf(">>=\n"); break;
        case ANDEQ:             printf("&=\n"); break;
        case OREQ:              printf("|=\n"); break;
        case XOREQ:             printf("^=\n"); break;
        case '!':               printf("!\n"); break;
        case '^':               printf("^\n"); break;
        case '&':               printf("&\n"); break;
        case '*':               printf("*\n"); break;
        case '-':               printf("-\n"); break;
        case '+':               printf("+\n"); break;
        case '=':               printf("=\n"); break;
        case '~':               printf("~\n"); break;
        case '|':               printf("|\n"); break;
        case '.':               printf(".\n"); break;
        case '<':               printf("<\n"); break;
        case '>':               printf(">\n"); break;
        case '/':               printf("/\n"); break;
        case '?':               printf("?\n"); break;
        case '(':               printf("(\n"); break;
        case ')':               printf(")\n"); break;
        case '[':               printf("[\n"); break;
        case ']':               printf("]\n"); break;
        case ',':               printf(",\n"); break;
        case ';':               printf(";\n"); break;
        case ':':               printf(":\n"); break;
        case '{':               printf("{\n"); break;
        case '}':               printf("{\n"); break;
        case '%':               printf("{\n"); break;
        case IDENT:             printf("IDENT    %s\n", yylval.string_literal); break;
        case NUMBER:  printf("NUMBER:  "); switch(yylval.num.type) {
            case INT_SIGNED: printf(" \t INTEGER %d  \t INT\n", yylval.num.integer); break;
            case INT_LONG: printf(" \t INTEGER %d \t LONG INT\n", yylval.num.integer ); break;
            case INT_LONGLONG: printf(" \t INTEGER %d \t LONG LONG INT\n", yylval.num.integer ); break;
            case INT_ULONG: printf(" \t INTEGER %d \t UNSIGNED LONG INT\n", yylval.num.integer ); break;
            case INT_ULONGLONG: printf(" \t INTEGER %d \t UNSIGNED LONG LONG INT\n", yylval.num.integer ); break;
            case FLOATV: printf("\t REAL \t %Lf \t FLOAT\n", yylval.num.fvalue); break;
            case DOUBLEV: printf("\t REAL \t %Lf \t DOUBLE\n", yylval.num.fvalue); break;
            case DOUBLE_LONG: printf("\t REAL \t %Lf \t LONG DOUBLE\n", yylval.num.fvalue); break;

        } break;
        case CHARLIT: {
            printf("\t CHARLIT \t");
          if(isprint(yylval.charlit)) {
            if(yylval.charlit == '\'' || yylval.charlit == '\'' || yylval.charlit == '\"' || yylval.charlit == '\\' ) {
                printf("\\%c\n", yylval.charlit);
            } else {
            printf("%c\n", yylval.charlit); 
            }
          } else {
            charhelper(yylval.charlit);
            printf("\n");
          }
            
        } break;

       case STRING: { 
        printf("\t STRING \t");
        for(int i = 0; i < string_buf_len; i++) {
                if(isprint(yylval.string_literal[i])) {
            if(yylval.string_literal[i]== '\'' || yylval.string_literal[i] == '\'' || yylval.string_literal[i] == '\"' || yylval.string_literal[i] == '\\') {
                printf("\\%c", yylval.string_literal[i]);
            } else {
            printf("%c", yylval.string_literal[i]); 
            }
          } else {
            charhelper(yylval.string_literal[i]);
        
          }
              
        }
        printf("\n");
       } break;



        //we have to add the rest 
        default: ;
    }
  
    
}

}
*/
