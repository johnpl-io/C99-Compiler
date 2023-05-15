/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "parser/parser.y"
  
    #define YYDEBUG 1
    #include <stdlib.h>
    #include <stdio.h>
    #include <ctype.h>
    #include "ast.h"
    #include "symbtab.h"
    #include "symbtabinsert.h"
    #include "../quads/quads.h"
    int yylex();
    void yyerror (char const *s) {
        fprintf (stderr, "%s\n", s);
 }
    // typedef union yylval YYSTYPE

    // line number and filename for debugging
    extern char filename_buf[256];
    extern int lineno;
    int isFunc; 
    struct astnode *fn_parameters;
    // keep track of current scope, initially at global scope
    struct symbtab *current_scope;
    struct struct_stack *curstruct_scope;
    struct astnode *cur_struct;
    extern  struct symbol *cur_funcsymb;
    struct symbtab *current_functionscope; //for labels;
    extern int stack_offset;
    extern int stack_offset_param;
   FILE* outputfile;

#line 102 "parser/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_CHARLIT = 4,                    /* CHARLIT  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_NUMBER = 6,                     /* NUMBER  */
  YYSYMBOL_INDSEL = 7,                     /* INDSEL  */
  YYSYMBOL_PLUSPLUS = 8,                   /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 9,                 /* MINUSMINUS  */
  YYSYMBOL_SHL = 10,                       /* SHL  */
  YYSYMBOL_SHR = 11,                       /* SHR  */
  YYSYMBOL_LTEQ = 12,                      /* LTEQ  */
  YYSYMBOL_GTEQ = 13,                      /* GTEQ  */
  YYSYMBOL_EQEQ = 14,                      /* EQEQ  */
  YYSYMBOL_NOTEQ = 15,                     /* NOTEQ  */
  YYSYMBOL_LOGAND = 16,                    /* LOGAND  */
  YYSYMBOL_LOGOR = 17,                     /* LOGOR  */
  YYSYMBOL_ELLIPSIS = 18,                  /* ELLIPSIS  */
  YYSYMBOL_TIMESEQ = 19,                   /* TIMESEQ  */
  YYSYMBOL_DIVEQ = 20,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 21,                     /* MODEQ  */
  YYSYMBOL_PLUSEQ = 22,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 23,                   /* MINUSEQ  */
  YYSYMBOL_SHLEQ = 24,                     /* SHLEQ  */
  YYSYMBOL_SHREQ = 25,                     /* SHREQ  */
  YYSYMBOL_ANDEQ = 26,                     /* ANDEQ  */
  YYSYMBOL_OREQ = 27,                      /* OREQ  */
  YYSYMBOL_XOREQ = 28,                     /* XOREQ  */
  YYSYMBOL_AUTO = 29,                      /* AUTO  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_CASE = 31,                      /* CASE  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_CONST = 33,                     /* CONST  */
  YYSYMBOL_CONTINUE = 34,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 35,                   /* DEFAULT  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_DOUBLE = 37,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_ENUM = 39,                      /* ENUM  */
  YYSYMBOL_EXTERN = 40,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_GOTO = 43,                      /* GOTO  */
  YYSYMBOL_IF = 44,                        /* IF  */
  YYSYMBOL_INLINE = 45,                    /* INLINE  */
  YYSYMBOL_INT = 46,                       /* INT  */
  YYSYMBOL_LONG = 47,                      /* LONG  */
  YYSYMBOL_REGISTER = 48,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 49,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 50,                    /* RETURN  */
  YYSYMBOL_SHORT = 51,                     /* SHORT  */
  YYSYMBOL_SIGNED = 52,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 53,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 54,                    /* STATIC  */
  YYSYMBOL_STRUCT = 55,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 56,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 57,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 58,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 59,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 60,                      /* VOID  */
  YYSYMBOL_VOLATILE = 61,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL__BOOL = 63,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 64,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 65,                /* _IMAGINARY  */
  YYSYMBOL_66_ = 66,                       /* '!'  */
  YYSYMBOL_67_ = 67,                       /* '^'  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '-'  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '='  */
  YYSYMBOL_73_ = 73,                       /* '~'  */
  YYSYMBOL_74_ = 74,                       /* '|'  */
  YYSYMBOL_75_ = 75,                       /* '.'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '?'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* '['  */
  YYSYMBOL_83_ = 83,                       /* ']'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_86_ = 86,                       /* '%'  */
  YYSYMBOL_87_ = 87,                       /* ','  */
  YYSYMBOL_88_ = 88,                       /* ';'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_start = 91,                     /* start  */
  YYSYMBOL_92_primary_expression = 92,     /* primary-expression  */
  YYSYMBOL_93_postfix_expression = 93,     /* postfix-expression  */
  YYSYMBOL_94_expression_list = 94,        /* expression-list  */
  YYSYMBOL_95_unary_expression = 95,       /* unary-expression  */
  YYSYMBOL_96_unary_operator = 96,         /* unary-operator  */
  YYSYMBOL_97_cast_expression = 97,        /* cast-expression  */
  YYSYMBOL_98_mult_expression = 98,        /* mult-expression  */
  YYSYMBOL_99_add_expression = 99,         /* add-expression  */
  YYSYMBOL_100_shift_expression = 100,     /* shift-expression  */
  YYSYMBOL_101_relational_expression = 101, /* relational-expression  */
  YYSYMBOL_102_equality_expression = 102,  /* equality-expression  */
  YYSYMBOL_103_bitwise_or_expression = 103, /* bitwise-or-expression  */
  YYSYMBOL_104_bitwise_xor_expression = 104, /* bitwise-xor-expression  */
  YYSYMBOL_105_bitwise_and_expression = 105, /* bitwise-and-expression  */
  YYSYMBOL_106_logical_or_expression = 106, /* logical-or-expression  */
  YYSYMBOL_107_logical_and_expression = 107, /* logical-and-expression  */
  YYSYMBOL_108_conditional_expression = 108, /* conditional-expression  */
  YYSYMBOL_109_assignment_expression = 109, /* assignment-expression  */
  YYSYMBOL_110_assignment_operator = 110,  /* assignment-operator  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_declaration = 112,              /* declaration  */
  YYSYMBOL_113_declaration_specifiers = 113, /* declaration-specifiers  */
  YYSYMBOL_114_init_declarator_list = 114, /* init-declarator-list  */
  YYSYMBOL_115_init_declarator = 115,      /* init-declarator  */
  YYSYMBOL_116_storage_class_specifier = 116, /* storage-class-specifier  */
  YYSYMBOL_117_type_specifier = 117,       /* type-specifier  */
  YYSYMBOL_118_struct_or_union_specifier = 118, /* struct-or-union-specifier  */
  YYSYMBOL_119_1 = 119,                    /* $@1  */
  YYSYMBOL_120_2 = 120,                    /* $@2  */
  YYSYMBOL_121_3 = 121,                    /* $@3  */
  YYSYMBOL_122_4 = 122,                    /* $@4  */
  YYSYMBOL_123_struct_or_union = 123,      /* struct-or-union  */
  YYSYMBOL_124_struct_declaration_list = 124, /* struct-declaration-list  */
  YYSYMBOL_125_struct_declaration = 125,   /* struct-declaration  */
  YYSYMBOL_126_specifier_qualifier_list = 126, /* specifier-qualifier-list  */
  YYSYMBOL_127_struct_declarator_list = 127, /* struct-declarator-list  */
  YYSYMBOL_128_struct_declarator = 128,    /* struct-declarator  */
  YYSYMBOL_129_enum_specifier = 129,       /* enum-specifier  */
  YYSYMBOL_130_enumerator_list = 130,      /* enumerator-list  */
  YYSYMBOL_enumerator = 131,               /* enumerator  */
  YYSYMBOL_132_type_qualifier = 132,       /* type-qualifier  */
  YYSYMBOL_133_function_specifier = 133,   /* function-specifier  */
  YYSYMBOL_declarator = 134,               /* declarator  */
  YYSYMBOL_135_direct_declarator = 135,    /* direct-declarator  */
  YYSYMBOL_pointer = 136,                  /* pointer  */
  YYSYMBOL_137_type_qualifier_list = 137,  /* type-qualifier-list  */
  YYSYMBOL_138_parameter_type_list = 138,  /* parameter-type-list  */
  YYSYMBOL_139_parameter_list = 139,       /* parameter-list  */
  YYSYMBOL_140_parameter_declaration = 140, /* parameter-declaration  */
  YYSYMBOL_141_identifier_list = 141,      /* identifier-list  */
  YYSYMBOL_142_type_name = 142,            /* type-name  */
  YYSYMBOL_143_abstract_declarator = 143,  /* abstract-declarator  */
  YYSYMBOL_144_direct_abstract_declarator = 144, /* direct-abstract-declarator  */
  YYSYMBOL_initializer = 145,              /* initializer  */
  YYSYMBOL_146_initializer_list = 146,     /* initializer-list  */
  YYSYMBOL_designation = 147,              /* designation  */
  YYSYMBOL_148_designator_list = 148,      /* designator-list  */
  YYSYMBOL_designator = 149,               /* designator  */
  YYSYMBOL_statement = 150,                /* statement  */
  YYSYMBOL_151_labeled_statement = 151,    /* labeled-statement  */
  YYSYMBOL_152_compound_statement = 152,   /* compound-statement  */
  YYSYMBOL_153_5 = 153,                    /* $@5  */
  YYSYMBOL_154_6 = 154,                    /* $@6  */
  YYSYMBOL_decl_or_stmt_list = 155,        /* decl_or_stmt_list  */
  YYSYMBOL_decl_or_stmt = 156,             /* decl_or_stmt  */
  YYSYMBOL_157_expression_statement = 157, /* expression-statement  */
  YYSYMBOL_158_selection_statement = 158,  /* selection-statement  */
  YYSYMBOL_159_iteration_statement = 159,  /* iteration-statement  */
  YYSYMBOL_160_jump_statement = 160,       /* jump-statement  */
  YYSYMBOL_declaration_or_fndef = 161,     /* declaration_or_fndef  */
  YYSYMBOL_function_definition = 162,      /* function_definition  */
  YYSYMBOL_163_7 = 163                     /* $@7  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  418

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,    86,    68,     2,
      80,    81,    69,    71,    87,    70,    75,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    88,
      76,    72,    77,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    74,    85,    73,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    90,    93,    94,    95,    98,    99,   102,
     103,   104,   105,   106,   107,   108,   109,   112,   113,   117,
     118,   119,   120,   121,   122,   125,   126,   127,   128,   129,
     130,   132,   136,   137,   138,   139,   142,   143,   144,   147,
     148,   149,   152,   153,   154,   155,   156,   159,   160,   161,
     164,   165,   168,   169,   172,   173,   176,   177,   180,   181,
     184,   185,   188,   189,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   205,   206,   212,   214,   217,
     218,   219,   220,   221,   222,   223,   224,   227,   228,   231,
     232,   237,   238,   239,   240,   241,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     265,   279,   265,   280,   290,   280,   291,   294,   295,   298,
     301,   304,   307,   308,   309,   310,   312,   313,   315,   316,
     319,   326,   327,   328,   330,   331,   334,   335,   340,   341,
     342,   345,   349,   350,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   369,   370,
     371,   372,   375,   376,   379,   380,   383,   384,   387,   388,
     389,   392,   393,   397,   398,   401,   402,   403,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   422,   423,   424,
     427,   428,   429,   430,   433,   436,   437,   440,   441,   445,
     446,   447,   448,   449,   450,   454,   455,   456,   460,   471,
     459,   472,   474,   475,   478,   479,   482,   483,   486,   487,
     488,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   508,   509,   510,   511,   512,
     515,   516,   519,   519
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "CHARLIT",
  "STRING", "NUMBER", "INDSEL", "PLUSPLUS", "MINUSMINUS", "SHL", "SHR",
  "LTEQ", "GTEQ", "EQEQ", "NOTEQ", "LOGAND", "LOGOR", "ELLIPSIS",
  "TIMESEQ", "DIVEQ", "MODEQ", "PLUSEQ", "MINUSEQ", "SHLEQ", "SHREQ",
  "ANDEQ", "OREQ", "XOREQ", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "'!'", "'^'", "'&'", "'*'", "'-'", "'+'",
  "'='", "'~'", "'|'", "'.'", "'<'", "'>'", "'/'", "'?'", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "'%'", "','", "';'", "':'", "$accept",
  "start", "primary-expression", "postfix-expression", "expression-list",
  "unary-expression", "unary-operator", "cast-expression",
  "mult-expression", "add-expression", "shift-expression",
  "relational-expression", "equality-expression", "bitwise-or-expression",
  "bitwise-xor-expression", "bitwise-and-expression",
  "logical-or-expression", "logical-and-expression",
  "conditional-expression", "assignment-expression", "assignment-operator",
  "expression", "declaration", "declaration-specifiers",
  "init-declarator-list", "init-declarator", "storage-class-specifier",
  "type-specifier", "struct-or-union-specifier", "$@1", "$@2", "$@3",
  "$@4", "struct-or-union", "struct-declaration-list",
  "struct-declaration", "specifier-qualifier-list",
  "struct-declarator-list", "struct-declarator", "enum-specifier",
  "enumerator-list", "enumerator", "type-qualifier", "function-specifier",
  "declarator", "direct-declarator", "pointer", "type-qualifier-list",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "type-name", "abstract-declarator",
  "direct-abstract-declarator", "initializer", "initializer-list",
  "designation", "designator-list", "designator", "statement",
  "labeled-statement", "compound-statement", "$@5", "$@6",
  "decl_or_stmt_list", "decl_or_stmt", "expression-statement",
  "selection-statement", "iteration-statement", "jump-statement",
  "declaration_or_fndef", "function_definition", "$@7", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-186)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-243)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1469,  -186,  -186,  -186,  -186,    10,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  1319,  -186,    49,  1469,  1469,
    -186,    12,  -186,  1469,  1469,  -186,  -186,   -60,    48,  -186,
    -186,  -186,   102,    16,  -186,   -33,  -186,   -37,   -50,    43,
    -186,  -186,   -17,   -12,  -186,  -186,    48,     9,    30,  -186,
    -186,  -186,   102,     6,    16,  -186,   693,    38,   896,   734,
     -50,    41,  1503,    73,  1255,    13,  -186,  -186,  -186,  -186,
      18,  -186,  -186,  -186,  -186,  1255,  1255,    54,  -186,  -186,
    -186,  -186,  -186,  -186,  1255,   324,  -186,    51,   729,  1255,
    -186,   -13,   171,   218,    71,   230,   110,   132,   101,     3,
     201,  -186,  -186,  -186,    89,  -186,  -186,  -186,    50,   139,
     147,  -186,   -24,  1236,   154,  -186,   167,   766,  1503,  1503,
    1503,  -186,    11,  1503,  -186,    48,  -186,  -186,  -186,  -186,
    -186,  -186,  1163,  -186,   -19,   245,  1255,  -186,    80,   693,
      82,  -186,   251,  -186,  -186,   253,   905,  1255,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  1255,
    -186,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,
    -186,   380,   837,  1274,  -186,    28,  -186,   141,  -186,  1432,
    -186,   255,   179,  1236,  -186,  -186,  1255,   190,  -186,   197,
    1503,  -186,   199,  -186,  1255,   165,  -186,   207,  -186,    40,
     -32,   216,  -186,  1255,  -186,   215,  -186,   650,  -186,  -186,
    -186,  -186,  -186,  -186,    57,  -186,   106,  -186,  -186,  -186,
    -186,   -13,   -13,   171,   171,   218,   218,   218,   218,    71,
      71,   132,   101,   230,   201,   138,   110,   210,   213,  1255,
     220,   214,   526,   229,   308,   232,    36,   233,   234,  -186,
     172,  -186,    49,  -186,  -186,  -186,   380,  -186,  -186,  -186,
    -186,  -186,   235,   236,   237,   238,   141,  1394,   788,  -186,
    -186,  -186,  -186,   239,   241,  -186,  -186,   240,  -186,  -186,
      11,  -186,  1255,  -186,  1356,   158,  -186,  -186,  -186,  -186,
    -186,  -186,   693,  -186,  1255,  -186,  1255,   526,  -186,   246,
    -186,   526,   256,   453,   248,  1255,  -186,   178,  1255,  1255,
    -186,   249,  -186,  -186,  -186,  -186,  -186,  -186,   259,   243,
    -186,   260,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,   526,  -186,   262,   569,   180,   599,  -186,    72,  -186,
      74,    81,  -186,  -186,  -186,  -186,  -186,  1255,   959,   182,
     620,   984,   184,   526,   526,   526,    91,   526,    95,  1005,
    1038,   195,   526,    96,  1084,   306,  -186,  -186,  -186,  -186,
     526,   526,    98,   526,   100,  1117,  -186,   526,   526,   105,
     526,  -186,  -186,   526,  -186,   526,   526,   107,  -186,  -186,
     526,  -186,  -186,  -186,  -186,   526,  -186,  -186
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    94,    97,   138,   102,     0,    92,   101,   141,    99,
     100,    95,   139,    98,   103,    93,   117,    91,   118,   104,
      96,   140,   105,   106,   107,     0,   240,     0,    80,    82,
     108,   113,   109,    84,    86,     2,   241,   133,     0,     1,
       3,   144,   158,     0,    78,     0,    87,    89,   143,     0,
      79,    81,   116,     0,    83,    85,     0,   136,     0,   134,
     162,   161,   159,     0,     0,    77,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,   163,   160,   145,    88,
      89,     4,     7,     6,     5,     0,     0,     0,    27,    29,
      30,    25,    26,    28,     0,     0,     9,    19,    31,     0,
      32,    36,    39,    42,    47,    54,    58,    50,    52,    60,
      56,    62,   187,    90,   208,   243,   171,   157,   170,     0,
     164,   166,     0,     0,    30,   154,     0,     0,     0,   123,
     114,   119,     0,   125,   131,     0,    31,   137,   132,   135,
      20,    21,     0,    75,     0,     0,     0,   191,     0,     0,
       0,   195,     0,    15,    16,     0,     0,     0,    67,    68,
      69,    65,    66,    70,    71,    72,    73,    74,    64,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,     0,     0,     0,   168,   175,   169,   177,   155,     0,
     156,     0,     0,     0,   153,   147,     0,    30,   148,     0,
     111,   122,     0,   120,     0,     0,   126,   128,   124,     0,
     173,     0,     8,     0,   198,     0,   188,     0,   190,   194,
     196,    12,    11,    14,     0,    17,     0,    63,    33,    34,
      35,    38,    37,    40,    41,    44,    46,    43,    45,    48,
      49,    51,    53,    55,    57,     0,    59,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,   214,     0,   215,   200,   199,   209,   212,   201,   202,
     203,   204,     0,     0,    30,     0,   176,     0,     0,   165,
     167,   172,   150,     0,     0,   152,   146,     0,   115,   130,
       0,   121,     0,    23,     0,   175,   174,    24,    76,   197,
     189,   193,     0,    13,     0,    10,     0,     0,   237,     0,
     236,     0,     0,     0,     0,     0,   239,     0,     0,     0,
     216,     0,   213,   185,   178,   183,   181,   186,     0,    30,
     180,     0,   149,   151,   112,   127,   129,   192,    18,    61,
     205,     0,   207,     0,     0,     0,     0,   235,     0,   238,
       0,     0,   210,   184,   182,   179,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   220,   221,   222,   230,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
       0,   229,   228,     0,   226,     0,     0,     0,   233,   232,
       0,   219,   227,   225,   224,     0,   231,   223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,  -186,    29,  -186,   -30,   115,   116,
      17,   112,   161,   159,   166,   164,  -186,   169,   -69,   -57,
    -186,   -93,  -183,     0,  -186,   287,  -186,   -54,  -186,  -186,
    -186,  -186,  -186,  -186,   224,  -109,  -106,  -186,    53,  -186,
     302,   -49,   177,  -186,   -21,   -45,   -40,   -52,   -65,  -186,
     160,  -186,  -186,  -107,  -185,   -88,  -186,   133,  -186,   221,
     -36,  -186,   296,  -186,  -186,  -186,    90,  -186,  -186,  -186,
    -186,   340,  -186,  -186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    96,    97,   234,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   143,
     169,   270,    26,   118,    45,    46,    28,    29,    30,    71,
     297,    53,   212,    31,   130,   131,   132,   215,   216,    32,
      58,    59,    33,    34,    63,    48,    49,    62,   282,   120,
     121,   122,   221,   283,   197,   113,   148,   149,   150,   151,
     273,   274,   275,   191,   331,   276,   277,   278,   279,   280,
     281,    35,    36,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   144,    61,   119,    70,   137,    47,   147,   271,   112,
     286,   196,   126,    37,    41,    52,    57,   127,   129,    41,
     187,   213,    77,   211,    56,    27,   139,   218,    50,    51,
      68,    41,    69,    54,    55,    66,   220,    42,   112,    81,
      82,    83,    84,    80,    85,    86,    41,  -242,   304,   219,
     193,    57,    41,    41,    64,    65,   171,   200,   152,   153,
     154,   228,   222,   201,   236,   172,   202,  -110,   223,   170,
     209,   203,    72,   173,   129,   129,   129,   225,   195,   129,
      42,    74,   188,   178,   179,    42,   139,    78,   129,    87,
      66,    43,   112,   271,    38,   255,    43,   194,   138,   235,
     214,   213,    88,   136,    89,    90,    91,    92,   192,    93,
     193,   217,   237,   306,   140,   141,    94,    75,    42,    42,
     286,   303,   114,    43,   326,   128,   155,   223,   136,    43,
     192,   156,   193,   157,   142,     3,   285,    44,   313,   311,
     356,   238,   239,   240,   314,   299,   293,   180,   181,   294,
      70,    12,   195,   373,   229,   374,   129,   145,   134,   223,
     135,   223,   375,    21,   146,   226,   308,   227,   223,   186,
     112,    42,   388,   327,   190,   136,   390,   397,   223,   403,
     305,   405,   223,   223,   184,   223,   410,   223,   415,   315,
     319,   272,   223,   223,   223,   245,   246,   247,   248,   185,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   189,   136,    60,
     198,   287,   338,   288,   347,   223,   322,   316,   176,   177,
     355,   341,   358,   346,   199,   360,   361,   204,   304,    76,
     193,   174,   175,   136,   182,   183,    60,   349,   224,   133,
     205,    80,   300,   301,   231,   112,   232,   348,   291,   223,
     330,   369,   292,   372,   305,   223,   359,   223,   370,   223,
     379,   223,   384,   295,   376,   378,   272,   381,   383,   217,
     296,   350,   223,   395,   298,   352,   392,   394,   136,   241,
     242,   399,   243,   244,   249,   250,   302,   307,   309,   317,
      60,   318,   407,   321,    76,   133,   133,   133,   320,   323,
     133,   324,   325,   328,   329,   366,   333,   334,   353,   133,
     335,   336,   342,   272,   343,   344,   364,    81,    82,    83,
      84,   136,    85,    86,   362,   351,   357,   385,   386,   387,
     363,   389,   367,   365,   400,   136,   396,   253,   256,   252,
     251,    79,   210,   345,   401,   402,   254,   404,    73,   290,
     312,   408,   409,   115,   411,    40,   332,   412,     0,   413,
     414,   230,     0,     0,   416,     0,     0,    87,     0,   417,
      76,     0,     0,   257,    82,    83,    84,   133,    85,    86,
      88,     0,    89,    90,    91,    92,     0,    93,     0,   145,
       0,     0,     0,     0,    94,     0,   146,     0,    95,     1,
     258,   259,     2,     3,   260,   261,   262,     4,     0,     5,
       6,     7,   263,   264,   265,     8,     9,    10,    11,    12,
     266,    13,    14,    87,    15,    16,   267,    17,    18,    19,
      20,    21,   268,    22,    23,    24,    88,     0,    89,    90,
      91,    92,     0,    93,     0,     0,    81,    82,    83,    84,
      94,    85,    86,     0,   114,     0,     0,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,    87,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,    23,    24,    88,
       0,    89,    90,    91,    92,     0,    93,     0,     0,   257,
      82,    83,    84,    94,    85,    86,     0,     0,     0,     0,
       0,   354,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,   259,     0,     0,
     260,   261,   262,     0,     0,     0,     0,     0,   263,   264,
     265,     0,    81,    82,    83,    84,   266,    85,    86,    87,
       0,     0,   267,     0,     0,     0,     0,     0,   268,     0,
       0,     0,    88,     0,    89,    90,    91,    92,     0,    93,
       0,     0,    81,    82,    83,    84,    94,    85,    86,     0,
     114,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,    87,    81,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,    88,     0,    89,    90,    91,
      92,     0,    93,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    87,    81,    82,    83,    84,   368,    85,    86,
       0,     0,     0,     0,     0,    88,     0,    89,    90,    91,
      92,     0,    93,    87,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,    88,   371,    89,    90,
      91,    92,     0,    93,     0,     0,    81,    82,    83,    84,
      94,    85,    86,    87,     0,     0,     0,     0,   380,     0,
       0,     0,     0,     0,     0,     0,    88,     0,    89,    90,
      91,    92,     0,    93,     0,   145,     0,     0,     0,     0,
      94,     0,   146,     0,    95,   310,     0,    81,    82,    83,
      84,     0,    85,    86,     0,     0,    87,     0,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,     0,    88,
       0,    89,    90,    91,    92,     0,    93,     3,     0,    81,
      82,    83,    84,    94,    85,    86,     0,    95,     0,     0,
       0,     0,     0,    12,     0,     0,     0,    87,   123,     0,
       0,    81,    82,    83,    84,    21,    85,    86,     0,     3,
      88,   168,    89,   124,    91,    92,     0,    93,     0,     0,
       0,     0,     0,     0,    94,    12,     0,   125,     0,    87,
     206,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,    88,     0,    89,   207,    91,    92,     0,    93,
      41,    87,     0,     0,     0,     0,    94,     0,     0,   208,
       0,     0,     0,     0,    88,     0,    89,   339,    91,    92,
       0,    93,     0,     0,     0,     0,     1,     0,    94,     2,
       3,   340,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,   116,
      22,    23,    24,     0,     0,     0,    42,     0,    81,    82,
      83,    84,     0,    85,    86,     0,     0,   192,     0,   193,
       0,     0,     0,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,    87,    22,
      23,    24,    81,    82,    83,    84,     0,    85,    86,     0,
       0,    88,     0,    89,    90,    91,    92,   117,    93,     0,
       0,     0,     0,     0,     0,    94,   233,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,    90,    91,
      92,     0,    93,     0,     0,     0,     0,    87,     0,    94,
     377,    81,    82,    83,    84,     0,    85,    86,     0,     0,
      88,     0,    89,    90,    91,    92,     0,    93,    87,     0,
       0,     0,     0,     0,    94,   382,     0,     0,     0,     0,
       0,    88,     0,    89,    90,    91,    92,     0,    93,     0,
       0,     0,     0,     0,     0,    94,   391,    81,    82,    83,
      84,    87,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,    89,    90,    91,    92,
       0,    93,     0,     0,     0,     0,     0,     0,    94,   393,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,    89,    90,    91,    92,     0,    93,     0,     0,
       0,     0,     0,     0,    94,   398,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,    90,    91,    92,     0,
      93,     0,     0,     0,     0,     2,     3,    94,   406,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,    87,     0,    16,     0,
       0,    18,    19,    20,    21,     0,    22,    23,    24,    88,
       0,    89,    90,    91,    92,     0,    93,     0,     0,    81,
      82,    83,    84,    94,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,     0,    85,    86,     0,    12,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,    88,     0,    89,    90,    91,    92,    87,    93,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    39,
       0,    88,     0,    89,    90,    91,    92,    87,    93,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
      88,     0,    89,   284,    91,    92,     0,    93,     1,     0,
       0,     2,     3,     0,    94,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,    22,
      23,    24,     0,     1,     0,    42,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,   304,     0,   193,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
     289,    17,    18,    19,    20,    21,     0,    22,    23,    24,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,   337,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,    17,
      18,    19,    20,    21,     0,    22,    23,    24,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,     0,     0,    16,     0,
       0,    18,    19,    20,    21,     0,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    94,    42,    68,    49,    74,    27,    95,   191,    66,
     195,   118,    69,     3,     3,     3,     3,    69,    72,     3,
      17,   130,    62,   129,    84,    25,    75,   133,    28,    29,
      80,     3,    82,    33,    34,    72,   142,    69,    95,     3,
       4,     5,     6,    64,     8,     9,     3,    84,    80,   142,
      82,     3,     3,     3,    87,    88,    69,    81,     7,     8,
       9,   149,    81,    87,   157,    78,   123,    84,    87,    99,
     127,   123,    84,    86,   128,   129,   130,   146,   118,   133,
      69,    72,    79,    12,    13,    69,   135,    81,   142,    53,
      72,    80,   149,   276,    84,   188,    80,   118,    85,   156,
      89,   210,    66,    74,    68,    69,    70,    71,    80,    73,
      82,   132,   169,   220,    85,    86,    80,    87,    69,    69,
     305,    81,    84,    80,    88,    84,    75,    87,    99,    80,
      80,    80,    82,    82,    80,    33,   193,    88,    81,   227,
     323,   171,   172,   173,    87,   214,   203,    76,    77,   206,
     195,    49,   192,    81,    72,    81,   210,    75,    85,    87,
      87,    87,    81,    61,    82,    85,   223,    87,    87,    68,
     227,    69,    81,   266,    85,   146,    81,    81,    87,    81,
     220,    81,    87,    87,    74,    87,    81,    87,    81,    83,
     259,   191,    87,    87,    87,   178,   179,   180,   181,    67,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    16,   189,    42,
      81,    80,   287,    82,   312,    87,   262,    89,    10,    11,
     323,   288,   325,   302,    87,   328,   329,    83,    80,    62,
      82,    70,    71,   214,    14,    15,    69,   316,     3,    72,
      83,   272,    87,    88,     3,   312,     3,   314,     3,    87,
      88,   354,    83,   356,   304,    87,    88,    87,    88,    87,
      88,    87,    88,    83,   367,   368,   276,   370,   371,   300,
      83,   317,    87,    88,    85,   321,   379,   380,   259,   174,
     175,   384,   176,   177,   182,   183,    89,    81,    83,    89,
     123,    88,   395,    89,   127,   128,   129,   130,    88,    80,
     133,     3,    80,    80,    80,   351,    81,    81,    62,   142,
      83,    83,    83,   323,    83,    85,    83,     3,     4,     5,
       6,   302,     8,     9,    85,    89,    88,   373,   374,   375,
      81,   377,    80,    83,    38,   316,   382,   186,   189,   185,
     184,    64,   128,   300,   390,   391,   187,   393,    56,   199,
     227,   397,   398,    67,   400,    25,   276,   403,    -1,   405,
     406,   150,    -1,    -1,   410,    -1,    -1,    53,    -1,   415,
     203,    -1,    -1,     3,     4,     5,     6,   210,     8,     9,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    84,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    -1,     3,     4,     5,     6,
      80,     8,     9,    -1,    84,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,     3,
       4,     5,     6,    80,     8,     9,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    -1,     3,     4,     5,     6,    50,     8,     9,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    -1,     3,     4,     5,     6,    80,     8,     9,    -1,
      84,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    53,     3,     4,     5,     6,    88,     8,     9,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    53,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    88,    68,    69,
      70,    71,    -1,    73,    -1,    -1,     3,     4,     5,     6,
      80,     8,     9,    53,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    84,    85,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    53,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    33,    -1,     3,
       4,     5,     6,    80,     8,     9,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,     3,     4,     5,     6,    61,     8,     9,    -1,    33,
      66,    72,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    49,    -1,    83,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
       3,    53,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    29,    -1,    80,    32,
      33,    83,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,     3,
      63,    64,    65,    -1,    -1,    -1,    69,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    53,    63,
      64,    65,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    81,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    53,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    53,    -1,    80,
      81,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    53,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,     3,     4,     5,
       6,    53,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,     3,     4,     5,     6,
      53,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      73,    -1,    -1,    -1,    -1,    32,    33,    80,    81,    -1,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    -1,    51,    52,    53,    -1,    55,    -1,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,     3,
       4,     5,     6,    80,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    53,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,     0,
      -1,    66,    -1,    68,    69,    70,    71,    53,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    29,    -1,
      -1,    32,    33,    -1,    80,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    29,    -1,    -1,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    29,    -1,    69,    32,    33,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    80,    -1,    82,    45,
      46,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      18,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    81,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    29,    -1,
      -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    -1,    51,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    32,    33,    37,    39,    40,    41,    45,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    64,    65,    91,   112,   113,   116,   117,
     118,   123,   129,   132,   133,   161,   162,     3,    84,     0,
     161,     3,    69,    80,    88,   114,   115,   134,   135,   136,
     113,   113,     3,   121,   113,   113,    84,     3,   130,   131,
     132,   136,   137,   134,    87,    88,    72,   163,    80,    82,
     135,   119,    84,   130,    72,    87,   132,   136,    81,   115,
     134,     3,     4,     5,     6,     8,     9,    53,    66,    68,
      69,    70,    71,    73,    80,    84,    92,    93,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   145,    84,   152,     3,    81,   113,   138,
     139,   140,   141,    54,    69,    83,   109,   137,    84,   117,
     124,   125,   126,   132,    85,    87,    95,   108,    85,   131,
      95,    95,    80,   109,   111,    75,    82,   145,   146,   147,
     148,   149,     7,     8,     9,    75,    80,    82,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    72,   110,
      97,    69,    78,    86,    70,    71,    10,    11,    12,    13,
      76,    77,    14,    15,    74,    67,    68,    17,    79,    16,
      85,   153,    80,    82,   134,   136,   143,   144,    81,    87,
      81,    87,   109,   137,    83,    83,    54,    69,    83,   109,
     124,   126,   122,   125,    89,   127,   128,   134,   126,   111,
     126,   142,    81,    87,     3,   108,    85,    87,   145,    72,
     149,     3,     3,    81,    94,   109,   111,   109,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   104,   105,   102,   107,   111,   103,     3,    30,    31,
      34,    35,    36,    42,    43,    44,    50,    56,    62,    88,
     111,   112,   113,   150,   151,   152,   155,   156,   157,   158,
     159,   160,   138,   143,    69,   109,   144,    80,    82,    18,
     140,     3,    83,   109,   109,    83,    83,   120,    85,   108,
      87,    88,    89,    81,    80,   136,   143,    81,   109,    83,
      85,   145,   147,    81,    87,    83,    89,    89,    88,   108,
      88,    89,   150,    80,     3,    80,    88,   111,    80,    80,
      88,   154,   156,    81,    81,    83,    83,    81,   138,    69,
      83,   109,    83,    83,    85,   128,   108,   145,   109,   108,
     150,    89,   150,    62,    88,   111,   112,    88,   111,    88,
     111,   111,    85,    81,    83,    83,   150,    80,    88,   111,
      88,    88,   111,    81,    81,    81,   111,    81,   111,    88,
      88,   111,    81,   111,    88,   150,   150,   150,    81,   150,
      81,    81,   111,    81,   111,    88,   150,    81,    81,   111,
      38,   150,   150,    81,   150,    81,    81,   111,   150,   150,
      81,   150,   150,   150,   150,    81,   150,   150
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     119,   120,   118,   121,   122,   118,   118,   123,   123,   124,
     124,   125,   126,   126,   126,   126,   127,   127,   128,   128,
     128,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   133,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   150,   151,   151,   151,   153,   154,
     152,   152,   155,   155,   156,   156,   157,   157,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   160,   160,   160,
     161,   161,   163,   162
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     1,
       4,     3,     3,     4,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     7,     0,     0,     6,     2,     1,     1,     1,
       2,     3,     2,     1,     2,     1,     1,     3,     1,     3,
       2,     5,     5,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     6,
       5,     6,     5,     4,     3,     4,     4,     3,     1,     2,
       3,     2,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     2,     1,     3,     4,
       3,     3,     4,     3,     4,     3,     3,     1,     3,     4,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     0,     0,
       5,     2,     1,     2,     1,     1,     2,     1,     5,     7,
       5,     5,     6,     9,     8,     8,     7,     8,     7,     7,
       6,     8,     7,     7,     6,     3,     2,     2,     3,     2,
       1,     1,     0,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: declaration_or_fndef  */
#line 89 "parser/parser.y"
                             { }
#line 2069 "parser/parser.tab.c"
    break;

  case 3: /* start: start declaration_or_fndef  */
#line 90 "parser/parser.y"
                                  { }
#line 2075 "parser/parser.tab.c"
    break;

  case 4: /* primary-expression: IDENT  */
#line 93 "parser/parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));   }
#line 2081 "parser/parser.tab.c"
    break;

  case 5: /* primary-expression: NUMBER  */
#line 94 "parser/parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 2087 "parser/parser.tab.c"
    break;

  case 6: /* primary-expression: STRING  */
#line 95 "parser/parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 2095 "parser/parser.tab.c"
    break;

  case 7: /* primary-expression: CHARLIT  */
#line 98 "parser/parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 2101 "parser/parser.tab.c"
    break;

  case 8: /* primary-expression: '(' expression ')'  */
#line 99 "parser/parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2107 "parser/parser.tab.c"
    break;

  case 9: /* postfix-expression: primary-expression  */
#line 102 "parser/parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2113 "parser/parser.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 103 "parser/parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, NULL, ast, '*'); }
#line 2119 "parser/parser.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression '.' IDENT  */
#line 104 "parser/parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 2125 "parser/parser.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 105 "parser/parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2131 "parser/parser.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 106 "parser/parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2137 "parser/parser.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression '(' ')'  */
#line 107 "parser/parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2143 "parser/parser.tab.c"
    break;

  case 15: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 108 "parser/parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2149 "parser/parser.tab.c"
    break;

  case 16: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 109 "parser/parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2155 "parser/parser.tab.c"
    break;

  case 17: /* expression-list: assignment-expression  */
#line 112 "parser/parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2161 "parser/parser.tab.c"
    break;

  case 18: /* expression-list: expression-list ',' assignment-expression  */
#line 113 "parser/parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2167 "parser/parser.tab.c"
    break;

  case 19: /* unary-expression: postfix-expression  */
#line 117 "parser/parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2173 "parser/parser.tab.c"
    break;

  case 20: /* unary-expression: PLUSPLUS unary-expression  */
#line 118 "parser/parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = handleassign((yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2179 "parser/parser.tab.c"
    break;

  case 21: /* unary-expression: MINUSMINUS unary-expression  */
#line 119 "parser/parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = handleassign((yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2185 "parser/parser.tab.c"
    break;

  case 22: /* unary-expression: unary-operator cast-expression  */
#line 120 "parser/parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, NULL, (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2191 "parser/parser.tab.c"
    break;

  case 23: /* unary-expression: SIZEOF '(' expression ')'  */
#line 121 "parser/parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, NULL, (yyvsp[-1].astnode_p), SIZEOF);  }
#line 2197 "parser/parser.tab.c"
    break;

  case 24: /* unary-expression: SIZEOF '(' type-name ')'  */
#line 122 "parser/parser.y"
                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, NULL, (yyvsp[-1].astnode_p), SIZEOF);  }
#line 2203 "parser/parser.tab.c"
    break;

  case 25: /* unary-operator: '-'  */
#line 125 "parser/parser.y"
                    { (yyval.op) = '-'; }
#line 2209 "parser/parser.tab.c"
    break;

  case 26: /* unary-operator: '+'  */
#line 126 "parser/parser.y"
                      { (yyval.op) = '+';  }
#line 2215 "parser/parser.tab.c"
    break;

  case 27: /* unary-operator: '!'  */
#line 127 "parser/parser.y"
                      {(yyval.op) = '!'; }
#line 2221 "parser/parser.tab.c"
    break;

  case 28: /* unary-operator: '~'  */
#line 128 "parser/parser.y"
                      {(yyval.op) = '~'; }
#line 2227 "parser/parser.tab.c"
    break;

  case 29: /* unary-operator: '&'  */
#line 129 "parser/parser.y"
                      {(yyval.op) = '&'; }
#line 2233 "parser/parser.tab.c"
    break;

  case 30: /* unary-operator: '*'  */
#line 130 "parser/parser.y"
                      {(yyval.op) = '*'; }
#line 2239 "parser/parser.tab.c"
    break;

  case 31: /* cast-expression: unary-expression  */
#line 132 "parser/parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2245 "parser/parser.tab.c"
    break;

  case 32: /* mult-expression: cast-expression  */
#line 136 "parser/parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2251 "parser/parser.tab.c"
    break;

  case 33: /* mult-expression: mult-expression '*' cast-expression  */
#line 137 "parser/parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2257 "parser/parser.tab.c"
    break;

  case 34: /* mult-expression: mult-expression '/' cast-expression  */
#line 138 "parser/parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2263 "parser/parser.tab.c"
    break;

  case 35: /* mult-expression: mult-expression '%' cast-expression  */
#line 139 "parser/parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2269 "parser/parser.tab.c"
    break;

  case 36: /* add-expression: mult-expression  */
#line 142 "parser/parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2275 "parser/parser.tab.c"
    break;

  case 37: /* add-expression: add-expression '+' mult-expression  */
#line 143 "parser/parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2281 "parser/parser.tab.c"
    break;

  case 38: /* add-expression: add-expression '-' mult-expression  */
#line 144 "parser/parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2287 "parser/parser.tab.c"
    break;

  case 39: /* shift-expression: add-expression  */
#line 147 "parser/parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2293 "parser/parser.tab.c"
    break;

  case 40: /* shift-expression: shift-expression SHL add-expression  */
#line 148 "parser/parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2299 "parser/parser.tab.c"
    break;

  case 41: /* shift-expression: shift-expression SHR add-expression  */
#line 149 "parser/parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2305 "parser/parser.tab.c"
    break;

  case 42: /* relational-expression: shift-expression  */
#line 152 "parser/parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2311 "parser/parser.tab.c"
    break;

  case 43: /* relational-expression: relational-expression '<' shift-expression  */
#line 153 "parser/parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2317 "parser/parser.tab.c"
    break;

  case 44: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 154 "parser/parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2323 "parser/parser.tab.c"
    break;

  case 45: /* relational-expression: relational-expression '>' shift-expression  */
#line 155 "parser/parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2329 "parser/parser.tab.c"
    break;

  case 46: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 156 "parser/parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2335 "parser/parser.tab.c"
    break;

  case 47: /* equality-expression: relational-expression  */
#line 159 "parser/parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2341 "parser/parser.tab.c"
    break;

  case 48: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 160 "parser/parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2347 "parser/parser.tab.c"
    break;

  case 49: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 161 "parser/parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2353 "parser/parser.tab.c"
    break;

  case 50: /* bitwise-or-expression: bitwise-xor-expression  */
#line 164 "parser/parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2359 "parser/parser.tab.c"
    break;

  case 51: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 165 "parser/parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2365 "parser/parser.tab.c"
    break;

  case 52: /* bitwise-xor-expression: bitwise-and-expression  */
#line 168 "parser/parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2371 "parser/parser.tab.c"
    break;

  case 53: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 169 "parser/parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2377 "parser/parser.tab.c"
    break;

  case 54: /* bitwise-and-expression: equality-expression  */
#line 172 "parser/parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2383 "parser/parser.tab.c"
    break;

  case 55: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 173 "parser/parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2389 "parser/parser.tab.c"
    break;

  case 56: /* logical-or-expression: logical-and-expression  */
#line 176 "parser/parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2395 "parser/parser.tab.c"
    break;

  case 57: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 177 "parser/parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2401 "parser/parser.tab.c"
    break;

  case 58: /* logical-and-expression: bitwise-or-expression  */
#line 180 "parser/parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2407 "parser/parser.tab.c"
    break;

  case 59: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 181 "parser/parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2413 "parser/parser.tab.c"
    break;

  case 60: /* conditional-expression: logical-or-expression  */
#line 184 "parser/parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2419 "parser/parser.tab.c"
    break;

  case 61: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 185 "parser/parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2425 "parser/parser.tab.c"
    break;

  case 62: /* assignment-expression: conditional-expression  */
#line 188 "parser/parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2431 "parser/parser.tab.c"
    break;

  case 63: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 189 "parser/parser.y"
                                                                                     {(yyval.astnode_p) = handleassign((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2437 "parser/parser.tab.c"
    break;

  case 64: /* assignment-operator: '='  */
#line 193 "parser/parser.y"
                         {(yyval.op) = '='; }
#line 2443 "parser/parser.tab.c"
    break;

  case 65: /* assignment-operator: PLUSEQ  */
#line 194 "parser/parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2449 "parser/parser.tab.c"
    break;

  case 66: /* assignment-operator: MINUSEQ  */
#line 195 "parser/parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2455 "parser/parser.tab.c"
    break;

  case 67: /* assignment-operator: TIMESEQ  */
#line 196 "parser/parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2461 "parser/parser.tab.c"
    break;

  case 68: /* assignment-operator: DIVEQ  */
#line 197 "parser/parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2467 "parser/parser.tab.c"
    break;

  case 69: /* assignment-operator: MODEQ  */
#line 198 "parser/parser.y"
                            { (yyval.op) = MODEQ; }
#line 2473 "parser/parser.tab.c"
    break;

  case 70: /* assignment-operator: SHLEQ  */
#line 199 "parser/parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2479 "parser/parser.tab.c"
    break;

  case 71: /* assignment-operator: SHREQ  */
#line 200 "parser/parser.y"
                            { (yyval.op) = SHREQ; }
#line 2485 "parser/parser.tab.c"
    break;

  case 72: /* assignment-operator: ANDEQ  */
#line 201 "parser/parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2491 "parser/parser.tab.c"
    break;

  case 73: /* assignment-operator: OREQ  */
#line 202 "parser/parser.y"
                           {(yyval.op) = OREQ; }
#line 2497 "parser/parser.tab.c"
    break;

  case 74: /* assignment-operator: XOREQ  */
#line 203 "parser/parser.y"
                            { (yyval.op) = XOREQ; }
#line 2503 "parser/parser.tab.c"
    break;

  case 75: /* expression: assignment-expression  */
#line 205 "parser/parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2509 "parser/parser.tab.c"
    break;

  case 76: /* expression: expression ',' assignment-expression  */
#line 206 "parser/parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2515 "parser/parser.tab.c"
    break;

  case 77: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 212 "parser/parser.y"
                                                             {  if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, current_scope, NULL, 0);   }
#line 2522 "parser/parser.tab.c"
    break;

  case 78: /* declaration: declaration-specifiers ';'  */
#line 214 "parser/parser.y"
                                  { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);} symbent_struct_reset((yyvsp[-1].astnode_p), lineno, filename_buf, current_scope); }
#line 2528 "parser/parser.tab.c"
    break;

  case 79: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 217 "parser/parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2534 "parser/parser.tab.c"
    break;

  case 80: /* declaration-specifiers: storage-class-specifier  */
#line 218 "parser/parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2540 "parser/parser.tab.c"
    break;

  case 81: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 219 "parser/parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2546 "parser/parser.tab.c"
    break;

  case 82: /* declaration-specifiers: type-specifier  */
#line 220 "parser/parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2552 "parser/parser.tab.c"
    break;

  case 83: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 221 "parser/parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2558 "parser/parser.tab.c"
    break;

  case 84: /* declaration-specifiers: type-qualifier  */
#line 222 "parser/parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2564 "parser/parser.tab.c"
    break;

  case 85: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 223 "parser/parser.y"
                                                { }
#line 2570 "parser/parser.tab.c"
    break;

  case 86: /* declaration-specifiers: function-specifier  */
#line 224 "parser/parser.y"
                         { }
#line 2576 "parser/parser.tab.c"
    break;

  case 87: /* init-declarator-list: init-declarator  */
#line 227 "parser/parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 2582 "parser/parser.tab.c"
    break;

  case 88: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 228 "parser/parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2588 "parser/parser.tab.c"
    break;

  case 89: /* init-declarator: declarator  */
#line 231 "parser/parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2594 "parser/parser.tab.c"
    break;

  case 90: /* init-declarator: declarator '=' initializer  */
#line 232 "parser/parser.y"
                                 {/* do not have to do yet */ }
#line 2600 "parser/parser.tab.c"
    break;

  case 91: /* storage-class-specifier: TYPEDEF  */
#line 237 "parser/parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2606 "parser/parser.tab.c"
    break;

  case 92: /* storage-class-specifier: EXTERN  */
#line 238 "parser/parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2612 "parser/parser.tab.c"
    break;

  case 93: /* storage-class-specifier: STATIC  */
#line 239 "parser/parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2618 "parser/parser.tab.c"
    break;

  case 94: /* storage-class-specifier: AUTO  */
#line 240 "parser/parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2624 "parser/parser.tab.c"
    break;

  case 95: /* storage-class-specifier: REGISTER  */
#line 241 "parser/parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2630 "parser/parser.tab.c"
    break;

  case 96: /* type-specifier: VOID  */
#line 246 "parser/parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2636 "parser/parser.tab.c"
    break;

  case 97: /* type-specifier: CHAR  */
#line 247 "parser/parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2642 "parser/parser.tab.c"
    break;

  case 98: /* type-specifier: SHORT  */
#line 248 "parser/parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2648 "parser/parser.tab.c"
    break;

  case 99: /* type-specifier: INT  */
#line 249 "parser/parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2654 "parser/parser.tab.c"
    break;

  case 100: /* type-specifier: LONG  */
#line 250 "parser/parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2660 "parser/parser.tab.c"
    break;

  case 101: /* type-specifier: FLOAT  */
#line 251 "parser/parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2666 "parser/parser.tab.c"
    break;

  case 102: /* type-specifier: DOUBLE  */
#line 252 "parser/parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2672 "parser/parser.tab.c"
    break;

  case 103: /* type-specifier: SIGNED  */
#line 253 "parser/parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2678 "parser/parser.tab.c"
    break;

  case 104: /* type-specifier: UNSIGNED  */
#line 254 "parser/parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2684 "parser/parser.tab.c"
    break;

  case 105: /* type-specifier: _BOOL  */
#line 255 "parser/parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2690 "parser/parser.tab.c"
    break;

  case 106: /* type-specifier: _COMPLEX  */
#line 256 "parser/parser.y"
                            { }
#line 2696 "parser/parser.tab.c"
    break;

  case 107: /* type-specifier: _IMAGINARY  */
#line 257 "parser/parser.y"
                           { }
#line 2702 "parser/parser.tab.c"
    break;

  case 108: /* type-specifier: struct-or-union-specifier  */
#line 258 "parser/parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2708 "parser/parser.tab.c"
    break;

  case 110: /* $@1: %empty  */
#line 265 "parser/parser.y"
                                                 {            
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
             cur_struct = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
            curstruct_scope = struct_push(curstruct_scope, cur_struct);
        }
         symbent_struct(curstruct_scope, current_scope, lineno,  filename_buf, curstruct_scope->astnode->structunion.name, false); 
         
        }
#line 2725 "parser/parser.tab.c"
    break;

  case 111: /* $@2: %empty  */
#line 279 "parser/parser.y"
                                     {  curstruct_scope->astnode->structunion.is_complete = 1; cur_struct = curstruct_scope->astnode; curstruct_scope = struct_pop(curstruct_scope);  printf("}\n");}
#line 2731 "parser/parser.tab.c"
    break;

  case 112: /* struct-or-union-specifier: struct-or-union IDENT $@1 '{' struct-declaration-list $@2 '}'  */
#line 279 "parser/parser.y"
                                                                                                                                                                                                          {    (yyval.astnode_p) = cur_struct;   }
#line 2737 "parser/parser.tab.c"
    break;

  case 113: /* $@3: %empty  */
#line 280 "parser/parser.y"
                                            {
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion((yyvsp[0].op), NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
            curstruct_scope = struct_push(curstruct_scope, newStructUnion((yyvsp[0].op), NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1));
        }
        
                            
                        }
#line 2753 "parser/parser.tab.c"
    break;

  case 114: /* $@4: %empty  */
#line 290 "parser/parser.y"
                                                        {curstruct_scope->astnode->structunion.is_complete = 1;  cur_struct = curstruct_scope->astnode; curstruct_scope = struct_pop(curstruct_scope); printf("}\n"); }
#line 2759 "parser/parser.tab.c"
    break;

  case 115: /* struct-or-union-specifier: struct-or-union $@3 '{' struct-declaration-list $@4 '}'  */
#line 290 "parser/parser.y"
                                                                                                                                                                                                                           { (yyval.astnode_p) = cur_struct;  }
#line 2765 "parser/parser.tab.c"
    break;

  case 116: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 291 "parser/parser.y"
                                                 { (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL, filename_buf, lineno, 0);   }
#line 2771 "parser/parser.tab.c"
    break;

  case 117: /* struct-or-union: STRUCT  */
#line 294 "parser/parser.y"
                        { (yyval.op) = STRUCT; }
#line 2777 "parser/parser.tab.c"
    break;

  case 118: /* struct-or-union: UNION  */
#line 295 "parser/parser.y"
                        { (yyval.op) =  UNION; }
#line 2783 "parser/parser.tab.c"
    break;

  case 119: /* struct-declaration-list: struct-declaration  */
#line 298 "parser/parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2791 "parser/parser.tab.c"
    break;

  case 121: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 304 "parser/parser.y"
                                                                        { symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, curstruct_scope->astnode->structunion.minitable, current_scope, 0);    }
#line 2797 "parser/parser.tab.c"
    break;

  case 122: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 307 "parser/parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2803 "parser/parser.tab.c"
    break;

  case 123: /* specifier-qualifier-list: type-specifier  */
#line 308 "parser/parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2809 "parser/parser.tab.c"
    break;

  case 124: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 309 "parser/parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2815 "parser/parser.tab.c"
    break;

  case 125: /* specifier-qualifier-list: type-qualifier  */
#line 310 "parser/parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2821 "parser/parser.tab.c"
    break;

  case 126: /* struct-declarator-list: struct-declarator  */
#line 312 "parser/parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2827 "parser/parser.tab.c"
    break;

  case 127: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 313 "parser/parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2833 "parser/parser.tab.c"
    break;

  case 128: /* struct-declarator: declarator  */
#line 315 "parser/parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2839 "parser/parser.tab.c"
    break;

  case 129: /* struct-declarator: declarator ':' conditional-expression  */
#line 316 "parser/parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2847 "parser/parser.tab.c"
    break;

  case 130: /* struct-declarator: ':' conditional-expression  */
#line 319 "parser/parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2855 "parser/parser.tab.c"
    break;

  case 138: /* type-qualifier: CONST  */
#line 340 "parser/parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2861 "parser/parser.tab.c"
    break;

  case 139: /* type-qualifier: RESTRICT  */
#line 341 "parser/parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2867 "parser/parser.tab.c"
    break;

  case 140: /* type-qualifier: VOLATILE  */
#line 342 "parser/parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2873 "parser/parser.tab.c"
    break;

  case 142: /* declarator: pointer direct-declarator  */
#line 349 "parser/parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p));   }
#line 2879 "parser/parser.tab.c"
    break;

  case 143: /* declarator: direct-declarator  */
#line 350 "parser/parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2885 "parser/parser.tab.c"
    break;

  case 144: /* direct-declarator: IDENT  */
#line 353 "parser/parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2891 "parser/parser.tab.c"
    break;

  case 145: /* direct-declarator: '(' declarator ')'  */
#line 354 "parser/parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2897 "parser/parser.tab.c"
    break;

  case 146: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 355 "parser/parser.y"
                                                                                { }
#line 2903 "parser/parser.tab.c"
    break;

  case 147: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 356 "parser/parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2909 "parser/parser.tab.c"
    break;

  case 148: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 357 "parser/parser.y"
                                                         {}
#line 2915 "parser/parser.tab.c"
    break;

  case 149: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 358 "parser/parser.y"
                                                                                     {}
#line 2921 "parser/parser.tab.c"
    break;

  case 150: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 359 "parser/parser.y"
                                                                  {}
#line 2927 "parser/parser.tab.c"
    break;

  case 151: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 360 "parser/parser.y"
                                                                                     {}
#line 2933 "parser/parser.tab.c"
    break;

  case 152: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 361 "parser/parser.y"
                                                             { }
#line 2939 "parser/parser.tab.c"
    break;

  case 153: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 362 "parser/parser.y"
                                          { /*  */ }
#line 2945 "parser/parser.tab.c"
    break;

  case 154: /* direct-declarator: direct-declarator '[' ']'  */
#line 363 "parser/parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2951 "parser/parser.tab.c"
    break;

  case 155: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 364 "parser/parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));  }
#line 2957 "parser/parser.tab.c"
    break;

  case 156: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 365 "parser/parser.y"
                                                    { }
#line 2963 "parser/parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '(' ')'  */
#line 366 "parser/parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL)); }
#line 2969 "parser/parser.tab.c"
    break;

  case 158: /* pointer: '*'  */
#line 369 "parser/parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2975 "parser/parser.tab.c"
    break;

  case 159: /* pointer: '*' type-qualifier-list  */
#line 370 "parser/parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2981 "parser/parser.tab.c"
    break;

  case 160: /* pointer: '*' type-qualifier-list pointer  */
#line 371 "parser/parser.y"
                                          {}
#line 2987 "parser/parser.tab.c"
    break;

  case 161: /* pointer: '*' pointer  */
#line 372 "parser/parser.y"
                      { struct astnode *temp = newType(AST_NODE_TYPE_POINTER,  0);  temp->ptr.next = (yyvsp[0].astnode_p); (yyval.astnode_p) = temp; }
#line 2993 "parser/parser.tab.c"
    break;

  case 162: /* type-qualifier-list: type-qualifier  */
#line 375 "parser/parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2999 "parser/parser.tab.c"
    break;

  case 163: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 376 "parser/parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 3005 "parser/parser.tab.c"
    break;

  case 164: /* parameter-type-list: parameter-list  */
#line 379 "parser/parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3011 "parser/parser.tab.c"
    break;

  case 166: /* parameter-list: parameter-declaration  */
#line 383 "parser/parser.y"
                                          { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 3017 "parser/parser.tab.c"
    break;

  case 167: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 384 "parser/parser.y"
                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3023 "parser/parser.tab.c"
    break;

  case 168: /* parameter-declaration: declaration-specifiers declarator  */
#line 387 "parser/parser.y"
                                                             { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p)); }
#line 3029 "parser/parser.tab.c"
    break;

  case 169: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 388 "parser/parser.y"
                                                     { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p));  }
#line 3035 "parser/parser.tab.c"
    break;

  case 170: /* parameter-declaration: declaration-specifiers  */
#line 389 "parser/parser.y"
                                 { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, NULL, (yyvsp[0].astnode_p)); }
#line 3041 "parser/parser.tab.c"
    break;

  case 171: /* identifier-list: IDENT  */
#line 392 "parser/parser.y"
                           { }
#line 3047 "parser/parser.tab.c"
    break;

  case 172: /* identifier-list: identifier-list ',' IDENT  */
#line 393 "parser/parser.y"
                                    { }
#line 3053 "parser/parser.tab.c"
    break;

  case 173: /* type-name: specifier-qualifier-list  */
#line 397 "parser/parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3059 "parser/parser.tab.c"
    break;

  case 174: /* type-name: specifier-qualifier-list abstract-declarator  */
#line 398 "parser/parser.y"
                                                       {  }
#line 3065 "parser/parser.tab.c"
    break;

  case 175: /* abstract-declarator: pointer  */
#line 401 "parser/parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 3071 "parser/parser.tab.c"
    break;

  case 176: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 402 "parser/parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 3077 "parser/parser.tab.c"
    break;

  case 177: /* abstract-declarator: direct-abstract-declarator  */
#line 403 "parser/parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3083 "parser/parser.tab.c"
    break;

  case 178: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 406 "parser/parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 3089 "parser/parser.tab.c"
    break;

  case 179: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 407 "parser/parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 3095 "parser/parser.tab.c"
    break;

  case 180: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 408 "parser/parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 3101 "parser/parser.tab.c"
    break;

  case 181: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 409 "parser/parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 3107 "parser/parser.tab.c"
    break;

  case 182: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 410 "parser/parser.y"
                                                 {   }
#line 3113 "parser/parser.tab.c"
    break;

  case 183: /* direct-abstract-declarator: '[' '*' ']'  */
#line 411 "parser/parser.y"
                      {  }
#line 3119 "parser/parser.tab.c"
    break;

  case 184: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 412 "parser/parser.y"
                                                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));  }
#line 3125 "parser/parser.tab.c"
    break;

  case 185: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 413 "parser/parser.y"
                                      { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, NULL);  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyval.astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));}
#line 3131 "parser/parser.tab.c"
    break;

  case 186: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 414 "parser/parser.y"
                                             { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL));  }
#line 3137 "parser/parser.tab.c"
    break;

  case 199: /* statement: compound-statement  */
#line 445 "parser/parser.y"
                                  { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3143 "parser/parser.tab.c"
    break;

  case 200: /* statement: labeled-statement  */
#line 446 "parser/parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3149 "parser/parser.tab.c"
    break;

  case 201: /* statement: expression-statement  */
#line 447 "parser/parser.y"
                               { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3155 "parser/parser.tab.c"
    break;

  case 202: /* statement: selection-statement  */
#line 448 "parser/parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3161 "parser/parser.tab.c"
    break;

  case 203: /* statement: iteration-statement  */
#line 449 "parser/parser.y"
                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3167 "parser/parser.tab.c"
    break;

  case 204: /* statement: jump-statement  */
#line 450 "parser/parser.y"
                         { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3173 "parser/parser.tab.c"
    break;

  case 205: /* labeled-statement: IDENT ':' statement  */
#line 454 "parser/parser.y"
                                           { (yyval.astnode_p) = newLabel((yyvsp[-2].string_literal), (yyvsp[0].astnode_p)); }
#line 3179 "parser/parser.tab.c"
    break;

  case 206: /* labeled-statement: CASE conditional-expression ':' statement  */
#line 455 "parser/parser.y"
                                                    { (yyval.astnode_p) = newCase((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3185 "parser/parser.tab.c"
    break;

  case 207: /* labeled-statement: DEFAULT ':' statement  */
#line 456 "parser/parser.y"
                                { (yyval.astnode_p) = newDefault((yyvsp[0].astnode_p)); }
#line 3191 "parser/parser.tab.c"
    break;

  case 208: /* $@5: %empty  */
#line 460 "parser/parser.y"
                    { if(isFunc) {current_scope = symbtab_push(SCOPE_FUNCTION, current_scope, lineno, filename_buf);
                                   symbent_combine_fn(fn_parameters, lineno, filename_buf, current_scope);
                                   current_functionscope = current_scope;
                                    } 
                        else { current_scope = symbtab_push(SCOPE_BLOCK, current_scope, lineno, filename_buf);}
                        isFunc = 0;

                        fn_parameters = NULL;
                        
                    }
#line 3206 "parser/parser.tab.c"
    break;

  case 209: /* $@6: %empty  */
#line 471 "parser/parser.y"
                    {  current_scope = symbtab_pop(current_scope); }
#line 3212 "parser/parser.tab.c"
    break;

  case 210: /* compound-statement: '{' $@5 decl_or_stmt_list $@6 '}'  */
#line 471 "parser/parser.y"
                                                                         {  (yyval.astnode_p) = (yyvsp[-2].astnode_p); }
#line 3218 "parser/parser.tab.c"
    break;

  case 211: /* compound-statement: '{' '}'  */
#line 472 "parser/parser.y"
                      { (yyval.astnode_p) = NULL; }
#line 3224 "parser/parser.tab.c"
    break;

  case 212: /* decl_or_stmt_list: decl_or_stmt  */
#line 474 "parser/parser.y"
                                { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 3230 "parser/parser.tab.c"
    break;

  case 213: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 475 "parser/parser.y"
                                          {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p)); }
#line 3236 "parser/parser.tab.c"
    break;

  case 214: /* decl_or_stmt: declaration  */
#line 478 "parser/parser.y"
                    { (yyval.astnode_p) = NULL; }
#line 3242 "parser/parser.tab.c"
    break;

  case 215: /* decl_or_stmt: statement  */
#line 479 "parser/parser.y"
                    { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3248 "parser/parser.tab.c"
    break;

  case 216: /* expression-statement: expression ';'  */
#line 482 "parser/parser.y"
                                         { (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 3254 "parser/parser.tab.c"
    break;

  case 218: /* selection-statement: IF '(' expression ')' statement  */
#line 486 "parser/parser.y"
                                                                   { (yyval.astnode_p) = newifelse((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NULL);  }
#line 3260 "parser/parser.tab.c"
    break;

  case 219: /* selection-statement: IF '(' expression ')' statement ELSE statement  */
#line 487 "parser/parser.y"
                                                                    { (yyval.astnode_p) = newifelse((yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3266 "parser/parser.tab.c"
    break;

  case 220: /* selection-statement: SWITCH '(' expression ')' statement  */
#line 488 "parser/parser.y"
                                              { (yyval.astnode_p) = newswitch((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));    }
#line 3272 "parser/parser.tab.c"
    break;

  case 221: /* iteration-statement: WHILE '(' expression ')' statement  */
#line 492 "parser/parser.y"
                                                            { (yyval.astnode_p) = newwhile(0, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));   }
#line 3278 "parser/parser.tab.c"
    break;

  case 222: /* iteration-statement: DO statement WHILE '(' expression ')'  */
#line 493 "parser/parser.y"
                                             { (yyval.astnode_p) = newwhile(1, (yyvsp[-1].astnode_p), (yyvsp[-4].astnode_p)); }
#line 3284 "parser/parser.tab.c"
    break;

  case 223: /* iteration-statement: FOR '(' expression ';' expression ';' expression ')' statement  */
#line 494 "parser/parser.y"
                                                                         { (yyval.astnode_p) = newfor((yyvsp[-6].astnode_p), (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3290 "parser/parser.tab.c"
    break;

  case 224: /* iteration-statement: FOR '(' expression ';' expression ';' ')' statement  */
#line 495 "parser/parser.y"
                                                              { (yyval.astnode_p) = newfor((yyvsp[-5].astnode_p), (yyvsp[-3].astnode_p), NULL, (yyvsp[0].astnode_p)); }
#line 3296 "parser/parser.tab.c"
    break;

  case 225: /* iteration-statement: FOR '(' expression ';' ';' expression ')' statement  */
#line 496 "parser/parser.y"
                                                              {   (yyval.astnode_p) = newfor((yyvsp[-5].astnode_p), NULL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3302 "parser/parser.tab.c"
    break;

  case 226: /* iteration-statement: FOR '(' expression ';' ';' ')' statement  */
#line 497 "parser/parser.y"
                                                   {    (yyval.astnode_p) = newfor((yyvsp[-4].astnode_p), NULL, NULL, (yyvsp[0].astnode_p)); }
#line 3308 "parser/parser.tab.c"
    break;

  case 227: /* iteration-statement: FOR '(' ';' expression ';' expression ')' statement  */
#line 498 "parser/parser.y"
                                                              { (yyval.astnode_p) = newfor(NULL, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3314 "parser/parser.tab.c"
    break;

  case 228: /* iteration-statement: FOR '(' ';' expression ';' ')' statement  */
#line 499 "parser/parser.y"
                                                   { (yyval.astnode_p) = newfor(NULL, (yyvsp[-3].astnode_p), NULL, (yyvsp[0].astnode_p)); }
#line 3320 "parser/parser.tab.c"
    break;

  case 229: /* iteration-statement: FOR '(' ';' ';' expression ')' statement  */
#line 500 "parser/parser.y"
                                                   {  (yyval.astnode_p) = newfor(NULL, NULL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3326 "parser/parser.tab.c"
    break;

  case 230: /* iteration-statement: FOR '(' ';' ';' ')' statement  */
#line 501 "parser/parser.y"
                                        {(yyval.astnode_p) = newfor(NULL, NULL, NULL, (yyvsp[0].astnode_p)); }
#line 3332 "parser/parser.tab.c"
    break;

  case 235: /* jump-statement: GOTO IDENT ';'  */
#line 508 "parser/parser.y"
                                   { (yyval.astnode_p) = newGoTo((yyvsp[-1].string_literal));  }
#line 3338 "parser/parser.tab.c"
    break;

  case 236: /* jump-statement: CONTINUE ';'  */
#line 509 "parser/parser.y"
                       {(yyval.astnode_p) = newContinue(); }
#line 3344 "parser/parser.tab.c"
    break;

  case 237: /* jump-statement: BREAK ';'  */
#line 510 "parser/parser.y"
                    { (yyval.astnode_p) = newBreak(); }
#line 3350 "parser/parser.tab.c"
    break;

  case 238: /* jump-statement: RETURN expression ';'  */
#line 511 "parser/parser.y"
                                { (yyval.astnode_p) = newReturn((yyvsp[-1].astnode_p));}
#line 3356 "parser/parser.tab.c"
    break;

  case 239: /* jump-statement: RETURN ';'  */
#line 512 "parser/parser.y"
                     {  (yyval.astnode_p) = newReturn(NULL);}
#line 3362 "parser/parser.tab.c"
    break;

  case 240: /* declaration_or_fndef: declaration  */
#line 515 "parser/parser.y"
                                      { }
#line 3368 "parser/parser.tab.c"
    break;

  case 241: /* declaration_or_fndef: function_definition  */
#line 516 "parser/parser.y"
                                          { }
#line 3374 "parser/parser.tab.c"
    break;

  case 242: /* $@7: %empty  */
#line 519 "parser/parser.y"
                                                           { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                            symbent_combine((yyvsp[-1].astnode_p), insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)), lineno, filename_buf, current_scope, NULL, 0);   
                                                            isFunc = 1; 
                                                            fn_parameters = (yyvsp[0].astnode_p);}
#line 3383 "parser/parser.tab.c"
    break;

  case 243: /* function_definition: declaration-specifiers declarator $@7 compound-statement  */
#line 522 "parser/parser.y"
                                                                                                     { printf("Ast Dump for function [ \n"); astwalk_impl((yyvsp[0].astnode_p),0); printf(" ] \n");  /*gen_quads($4); */ cur_funcsymb = NULL; stack_offset = 0; stack_offset_param = 8; }
#line 3389 "parser/parser.tab.c"
    break;


#line 3393 "parser/parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 525 "parser/parser.y"
       

    int main() {
        yydebug = 0;
 outputfile = fopen("output.s", "w");
  if ( outputfile  == NULL) {
        printf("Error opening file\n");
        return 1;
    }

 yyparse();
  
        
        return 0;
        
    }
