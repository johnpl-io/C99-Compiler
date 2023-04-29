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
#line 4 "parser.y"
  
    #define YYDEBUG 1
    #include <stdlib.h>
    #include <stdio.h>
    #include <ctype.h>
    #include "ast.h"
    #include "symbtab.h"
    #include "symbtabinsert.h"
    #include "quads/quads.h"
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
    struct symbtab *current_functionscope; //for labels;

#line 99 "parser.tab.c"

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
#define YYLAST   1577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  420

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
       0,    86,    86,    87,    90,    91,    92,    95,    96,    99,
     100,   101,   102,   103,   104,   105,   106,   109,   110,   114,
     115,   116,   117,   118,   121,   122,   123,   124,   125,   126,
     128,   129,   133,   134,   135,   136,   139,   140,   141,   144,
     145,   146,   149,   150,   151,   152,   153,   156,   157,   158,
     161,   162,   165,   166,   169,   170,   173,   174,   177,   178,
     181,   182,   185,   186,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   202,   203,   209,   211,   214,
     215,   216,   217,   218,   219,   220,   221,   224,   225,   228,
     229,   234,   235,   236,   237,   238,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     262,   276,   262,   277,   287,   277,   288,   291,   292,   295,
     298,   301,   304,   305,   306,   307,   309,   310,   312,   313,
     316,   323,   324,   325,   327,   328,   331,   332,   337,   338,
     339,   342,   346,   347,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   366,   367,
     368,   369,   372,   373,   376,   377,   380,   381,   384,   385,
     386,   389,   390,   394,   395,   398,   399,   400,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   419,   420,   421,
     424,   425,   426,   427,   430,   433,   434,   437,   438,   442,
     443,   444,   445,   446,   447,   451,   452,   453,   457,   468,
     456,   469,   471,   472,   475,   476,   479,   480,   483,   484,
     485,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   505,   506,   507,   508,   509,
     512,   513,   516,   516
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

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-243)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1478,  -252,  -252,  -252,  -252,    17,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  1328,  -252,    15,  1478,  1478,
    -252,    28,  -252,  1478,  1478,  -252,  -252,   -33,    36,  -252,
    -252,  -252,    12,    37,  -252,    48,  -252,   -36,   -13,     8,
    -252,  -252,   -24,    -5,  -252,  -252,    36,    -9,    -1,  -252,
    -252,  -252,    12,    10,    37,  -252,   655,    23,   869,   707,
     -13,    46,  1512,    75,  1228,    20,  -252,  -252,  -252,  -252,
      71,  -252,  -252,  -252,  -252,  1247,  1247,    40,  -252,  -252,
    -252,  -252,  -252,  -252,  1228,   625,  -252,     7,   222,  1228,
    -252,   -37,   124,   207,   152,   272,    81,    92,   101,     4,
     158,  -252,  -252,  -252,   142,  -252,  -252,  -252,    52,   150,
     148,  -252,   -34,  1209,   157,  -252,   168,   739,  1512,  1512,
    1512,  -252,     5,  1512,  -252,    36,  -252,  -252,  -252,  -252,
     175,  -252,  -252,  1136,  -252,    58,   257,  1228,  -252,    99,
     655,   -18,  -252,   261,  -252,  -252,   280,   878,  1228,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    1228,  -252,  1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,
    1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,
    1228,  -252,   304,   810,  1282,  -252,    49,  -252,   189,  -252,
    1441,  -252,   289,   192,  1209,  -252,  -252,  1228,   220,  -252,
     228,  1512,  -252,   237,  -252,  1228,   203,  -252,   240,  -252,
    1228,    59,   -45,   249,  -252,  1228,  -252,   248,  -252,   617,
    -252,  -252,  -252,  -252,  -252,  -252,    89,  -252,   -25,  -252,
    -252,  -252,  -252,   -37,   -37,   124,   124,   207,   207,   207,
     207,   152,   152,    92,   101,   272,   158,   185,    81,   243,
     283,  1228,   288,   290,   450,   298,   384,   309,   493,   310,
     311,  -252,   212,  -252,    15,  -252,  -252,  -252,   304,  -252,
    -252,  -252,  -252,  -252,   312,   313,   314,   315,   189,  1403,
     761,  -252,  -252,  -252,  -252,   316,   317,  -252,  -252,   318,
    -252,  -252,     5,  -252,  1228,  -252,  1365,   202,  -252,  -252,
    -252,  -252,  -252,  -252,   655,  -252,  1228,  -252,  1228,   450,
    -252,   306,  -252,   450,   334,   377,   319,  1228,  -252,   214,
    1228,  1228,  -252,   320,  -252,  -252,  -252,  -252,  -252,  -252,
     321,   325,  -252,   328,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,   450,  -252,   324,   523,   218,   544,  -252,
     100,  -252,   104,   134,  -252,  -252,  -252,  -252,  -252,  1228,
     932,   227,   574,   957,   229,   450,   450,   450,   135,   450,
     138,   978,  1011,   231,   450,   139,  1057,   363,  -252,  -252,
    -252,  -252,   450,   450,   149,   450,   171,  1090,  -252,   450,
     450,   181,   450,  -252,  -252,   450,  -252,   450,   450,   186,
    -252,  -252,   450,  -252,  -252,  -252,  -252,   450,  -252,  -252
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
      89,     4,     7,     6,     5,     0,     0,     0,    26,    28,
      29,    24,    25,    27,     0,     0,     9,    19,    30,     0,
      32,    36,    39,    42,    47,    54,    58,    50,    52,    60,
      56,    62,   187,    90,   208,   243,   171,   157,   170,     0,
     164,   166,     0,     0,    29,   154,     0,     0,     0,   123,
     114,   119,     0,   125,   131,     0,    30,   137,   132,   135,
       0,    20,    21,     0,    75,     0,     0,     0,   191,     0,
       0,     0,   195,     0,    15,    16,     0,     0,     0,    67,
      68,    69,    65,    66,    70,    71,    72,    73,    74,    64,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   211,     0,     0,     0,   168,   175,   169,   177,   155,
       0,   156,     0,     0,     0,   153,   147,     0,    29,   148,
       0,   111,   122,     0,   120,     0,     0,   126,   128,   124,
       0,     0,   173,     0,     8,     0,   198,     0,   188,     0,
     190,   194,   196,    12,    11,    14,     0,    17,     0,    63,
      33,    34,    35,    38,    37,    40,    41,    44,    46,    43,
      45,    48,    49,    51,    53,    55,    57,     0,    59,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,   214,     0,   215,   200,   199,   209,   212,
     201,   202,   203,   204,     0,     0,    29,     0,   176,     0,
       0,   165,   167,   172,   150,     0,     0,   152,   146,     0,
     115,   130,     0,   121,     0,    23,     0,   175,   174,    31,
      76,   197,   189,   193,     0,    13,     0,    10,     0,     0,
     237,     0,   236,     0,     0,     0,     0,     0,   239,     0,
       0,     0,   216,     0,   213,   185,   178,   183,   181,   186,
       0,    29,   180,     0,   149,   151,   112,   127,   129,   192,
      18,    61,   205,     0,   207,     0,     0,     0,     0,   235,
       0,   238,     0,     0,   210,   184,   182,   179,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   220,   221,
     222,   230,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,     0,   229,   228,     0,   226,     0,     0,     0,
     233,   232,     0,   219,   227,   225,   224,     0,   231,   223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,  -252,  -252,    24,  -252,    16,   145,   146,
     116,   143,   225,   223,   230,   233,  -252,   232,   -48,   -57,
    -252,   -93,  -162,     0,  -252,   357,  -252,   -53,  -252,  -252,
    -252,  -252,  -252,  -252,   299,  -103,   -87,  -252,   131,  -252,
     383,   -31,    50,  -252,   -21,   -44,   -40,   -52,   -65,  -252,
     244,  -252,  -252,  -108,  -189,   -91,  -252,   234,  -252,   300,
    -251,  -252,   382,  -252,  -252,  -252,   174,  -252,  -252,  -252,
    -252,   435,  -252,  -252
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    96,    97,   236,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   144,
     170,   272,    26,   118,    45,    46,    28,    29,    30,    71,
     299,    53,   213,    31,   130,   131,   132,   216,   217,    32,
      58,    59,    33,    34,    63,    48,    49,    62,   284,   120,
     121,   122,   223,   285,   198,   113,   149,   150,   151,   152,
     275,   276,   277,   192,   333,   278,   279,   280,   281,   282,
     283,    35,    36,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   145,    61,   119,   148,    70,    47,   288,    41,   112,
     197,    41,   126,   324,   153,   154,   155,   127,    41,   129,
      37,   188,    77,    57,    42,    27,   137,   214,    50,    51,
     273,    52,   172,    54,    55,   306,    66,   194,   112,    57,
      41,   173,   212,    80,   139,     3,   219,   201,  -242,   174,
     221,    56,    41,   202,   231,    41,   222,   146,   317,   230,
    -110,    12,   225,    74,   147,   238,   203,    68,   352,    69,
     210,   204,   354,    21,    42,   129,   129,   129,   196,    72,
     129,    42,   156,   189,    42,    43,    75,   157,    43,   158,
     129,    78,    60,   112,   215,    43,   257,   195,   136,   227,
     237,    38,   368,    44,   139,   138,    42,   114,   214,   141,
     142,   218,    76,   239,   308,   171,   273,    43,   288,    60,
     143,    42,   133,   136,   387,   388,   389,   221,   391,   193,
     128,   194,   193,   398,   194,    64,    65,   287,   313,   224,
     305,   403,   404,    66,   406,   225,   225,   295,   410,   411,
     296,   413,    70,   196,   414,   185,   415,   416,   129,   186,
     134,   418,   135,   358,   179,   180,   419,   301,   310,   187,
     315,   136,   112,    60,   190,   329,   316,    76,   133,   133,
     133,   375,   307,   133,   228,   376,   229,   225,   240,   241,
     242,   225,   274,   133,   175,   176,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   321,   136,   377,   390,   177,   178,   392,
     399,   225,   225,   349,   340,   225,   225,   191,   181,   182,
     405,   199,   357,   343,   360,   200,   225,   362,   363,   136,
     205,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   206,   407,    80,    76,   220,   348,   112,   225,   350,
     226,   133,   412,   371,   233,   374,   307,   417,   225,   289,
     351,   290,   225,   225,   318,   294,   378,   380,   274,   383,
     385,   218,   306,   234,   194,   136,   183,   184,   394,   396,
     302,   303,   293,   401,   169,   247,   248,   249,   250,   225,
     332,   225,   361,   297,   409,   225,   372,   259,    82,    83,
      84,   298,    85,    86,   225,   381,   225,   386,   225,   397,
     243,   244,   300,   245,   246,   274,   251,   252,   136,   304,
     309,   311,   319,     1,   260,   261,     2,     3,   262,   263,
     264,     4,   136,     5,     6,     7,   265,   266,   267,     8,
       9,    10,    11,    12,   268,    13,    14,    87,    15,    16,
     269,    17,    18,    19,    20,    21,   270,    22,    23,    24,
      88,   320,    89,    90,    91,    92,   322,    93,   325,   323,
      81,    82,    83,    84,    94,    85,    86,   326,   114,   327,
     330,   331,   271,   335,   336,   353,   355,   337,   338,   344,
     345,   402,   365,   346,   369,   364,     1,   359,   366,     2,
       3,   367,   255,   258,     4,   253,     5,     6,     7,   254,
     256,    79,     8,     9,    10,    11,    12,   211,    13,    14,
      87,    15,    16,   347,    17,    18,    19,    20,    21,    73,
      22,    23,    24,    88,   292,    89,    90,    91,    92,   115,
      93,   232,   334,   259,    82,    83,    84,    94,    85,    86,
      40,     0,     0,   314,     0,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,   261,     0,     0,   262,   263,   264,     0,     0,     0,
       0,     0,   265,   266,   267,     0,    81,    82,    83,    84,
     268,    85,    86,    87,     0,     0,   269,     0,     0,     0,
       0,     0,   270,     0,     0,     0,    88,     0,    89,    90,
      91,    92,     0,    93,     0,     0,    81,    82,    83,    84,
      94,    85,    86,     0,   114,     0,     0,     0,   271,     0,
       0,     0,     0,     0,     0,     0,    87,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,    88,
       0,    89,    90,    91,    92,     0,    93,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    87,    81,    82,    83,
      84,   328,    85,    86,     0,     0,     0,     0,     0,    88,
       0,    89,    90,    91,    92,     0,    93,    87,     0,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
      88,   370,    89,    90,    91,    92,     0,    93,     0,     0,
      81,    82,    83,    84,    94,    85,    86,    87,    81,    82,
      83,    84,   373,    85,    86,     0,     0,     0,     0,     0,
      88,     0,    89,    90,    91,    92,     0,    93,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,    81,    82,
      83,    84,   382,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,    88,     0,    89,    90,    91,    92,     0,
      93,    88,   146,    89,    90,    91,    92,    94,    93,   147,
     146,    95,   312,     0,     0,    94,     0,   147,    87,    95,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,    88,     0,    89,    90,    91,    92,     0,    93,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,    95,
       3,     0,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
      87,   123,     0,     0,    81,    82,    83,    84,    21,    85,
      86,     0,     3,    88,     0,    89,   124,    91,    92,     0,
      93,     0,     0,     0,     0,     0,     0,    94,    12,     0,
     125,     0,    87,   207,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,    88,     0,    89,   208,    91,
      92,     0,    93,    41,    87,     0,     0,     0,     0,    94,
       0,     0,   209,     0,     0,     0,     0,    88,     0,    89,
     341,    91,    92,     0,    93,     0,     0,     0,     0,     1,
       0,    94,     2,     3,   342,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,    21,   116,    22,    23,    24,     0,     0,     0,    42,
       0,    81,    82,    83,    84,     0,    85,    86,     0,     0,
     193,     0,   194,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,    87,    22,    23,    24,    81,    82,    83,    84,     0,
      85,    86,     0,     0,    88,     0,    89,    90,    91,    92,
     117,    93,     0,     0,     0,     0,     0,     0,    94,   235,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    87,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,    90,    91,    92,     0,    93,     0,     0,     0,     0,
      87,     0,    94,   379,    81,    82,    83,    84,     0,    85,
      86,     0,     0,    88,     0,    89,    90,    91,    92,     0,
      93,    87,     0,     0,     0,     0,     0,    94,   384,     0,
       0,     0,     0,     0,    88,     0,    89,    90,    91,    92,
       0,    93,     0,     0,     0,     0,     0,     0,    94,   393,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
      90,    91,    92,     0,    93,     0,     0,     0,     0,     0,
       0,    94,   395,    81,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,    90,    91,    92,     0,
      93,     0,     0,     0,     0,     0,     0,    94,   400,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,    89,    90,
      91,    92,     0,    93,     0,     0,     0,     0,     2,     3,
      94,   408,     0,     4,     0,     5,     0,     7,     0,     0,
       0,     0,     9,    10,     0,    12,     0,    13,    14,    87,
       0,    16,     0,     0,    18,    19,    20,    21,     0,    22,
      23,    24,    88,     0,    89,    90,    91,    92,     0,    93,
       0,     0,    81,    82,    83,    84,    94,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,     0,    85,    86,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,     0,    85,    86,     0,    12,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,    88,     0,    89,    90,    91,
      92,    87,    93,     0,     0,    81,    82,    83,    84,    94,
      85,    86,     0,     0,    88,     0,    89,    90,    91,    92,
     140,    93,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,    88,     0,    89,    90,    91,    92,     0,
      93,     0,     0,     0,     0,     0,     0,    94,    39,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,   286,    91,    92,     0,    93,     0,     1,     0,     0,
       2,     3,    94,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,    23,    24,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,    23,
      24,     0,     1,     0,    42,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,   306,     0,   194,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    16,   291,
      17,    18,    19,    20,    21,     0,    22,    23,    24,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,   339,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,    23,    24,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,    23,    24,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,     0,     0,    16,     0,     0,
      18,    19,    20,    21,     0,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    94,    42,    68,    95,    49,    27,   196,     3,    66,
     118,     3,    69,   264,     7,     8,     9,    69,     3,    72,
       3,    17,    62,     3,    69,    25,    74,   130,    28,    29,
     192,     3,    69,    33,    34,    80,    72,    82,    95,     3,
       3,    78,   129,    64,    75,    33,   133,    81,    84,    86,
     143,    84,     3,    87,    72,     3,   143,    75,    83,   150,
      84,    49,    87,    72,    82,   158,   123,    80,   319,    82,
     127,   123,   323,    61,    69,   128,   129,   130,   118,    84,
     133,    69,    75,    79,    69,    80,    87,    80,    80,    82,
     143,    81,    42,   150,    89,    80,   189,   118,    74,   147,
     157,    84,   353,    88,   135,    85,    69,    84,   211,    85,
      86,   132,    62,   170,   222,    99,   278,    80,   307,    69,
      80,    69,    72,    99,   375,   376,   377,   220,   379,    80,
      84,    82,    80,   384,    82,    87,    88,   194,   229,    81,
      81,   392,   393,    72,   395,    87,    87,   204,   399,   400,
     207,   402,   196,   193,   405,    74,   407,   408,   211,    67,
      85,   412,    87,   325,    12,    13,   417,   215,   225,    68,
      81,   147,   229,   123,    16,   268,    87,   127,   128,   129,
     130,    81,   222,   133,    85,    81,    87,    87,   172,   173,
     174,    87,   192,   143,    70,    71,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   261,   190,    81,    81,    10,    11,    81,
      81,    87,    87,   314,   289,    87,    87,    85,    76,    77,
      81,    81,   325,   290,   327,    87,    87,   330,   331,   215,
      83,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    83,    81,   274,   204,    80,   304,   314,    87,   316,
       3,   211,    81,   356,     3,   358,   306,    81,    87,    80,
     318,    82,    87,    87,    89,    83,   369,   370,   278,   372,
     373,   302,    80,     3,    82,   261,    14,    15,   381,   382,
      87,    88,     3,   386,    72,   179,   180,   181,   182,    87,
      88,    87,    88,    83,   397,    87,    88,     3,     4,     5,
       6,    83,     8,     9,    87,    88,    87,    88,    87,    88,
     175,   176,    85,   177,   178,   325,   183,   184,   304,    89,
      81,    83,    89,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   318,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    88,    68,    69,    70,    71,    88,    73,    80,    89,
       3,     4,     5,     6,    80,     8,     9,     3,    84,    80,
      80,    80,    88,    81,    81,    89,    62,    83,    83,    83,
      83,    38,    81,    85,    80,    85,    29,    88,    83,    32,
      33,    83,   187,   190,    37,   185,    39,    40,    41,   186,
     188,    64,    45,    46,    47,    48,    49,   128,    51,    52,
      53,    54,    55,   302,    57,    58,    59,    60,    61,    56,
      63,    64,    65,    66,   200,    68,    69,    70,    71,    67,
      73,   151,   278,     3,     4,     5,     6,    80,     8,     9,
      25,    -1,    -1,   229,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    -1,     3,     4,     5,     6,
      50,     8,     9,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    -1,     3,     4,     5,     6,
      80,     8,     9,    -1,    84,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    53,     3,     4,     5,
       6,    88,     8,     9,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    53,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    88,    68,    69,    70,    71,    -1,    73,    -1,    -1,
       3,     4,     5,     6,    80,     8,     9,    53,     3,     4,
       5,     6,    88,     8,     9,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,     3,     4,
       5,     6,    88,     8,     9,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      73,    66,    75,    68,    69,    70,    71,    80,    73,    82,
      75,    84,    85,    -1,    -1,    80,    -1,    82,    53,    84,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
      33,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,     3,     4,     5,     6,    61,     8,
       9,    -1,    33,    66,    -1,    68,    69,    70,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    49,    -1,
      83,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,     3,    53,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,    29,
      -1,    80,    32,    33,    83,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,     3,    63,    64,    65,    -1,    -1,    -1,    69,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    53,    63,    64,    65,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      81,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    53,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,
      53,    -1,    80,    81,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      73,    53,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
       3,     4,     5,     6,    53,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,     3,
       4,     5,     6,    53,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    -1,    -1,    -1,    32,    33,
      80,    81,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,    53,
      -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    -1,     3,     4,     5,     6,    80,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    49,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    53,    73,    -1,    -1,     3,     4,     5,     6,    80,
       8,     9,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      53,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    80,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    29,    -1,    -1,
      32,    33,    80,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    29,    -1,    -1,    32,    33,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    29,    -1,    69,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    80,    -1,    82,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    18,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    81,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    29,    -1,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,
      -1,    49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65
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
      53,    95,    95,    80,   109,   111,    75,    82,   145,   146,
     147,   148,   149,     7,     8,     9,    75,    80,    82,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    72,
     110,    97,    69,    78,    86,    70,    71,    10,    11,    12,
      13,    76,    77,    14,    15,    74,    67,    68,    17,    79,
      16,    85,   153,    80,    82,   134,   136,   143,   144,    81,
      87,    81,    87,   109,   137,    83,    83,    54,    69,    83,
     109,   124,   126,   122,   125,    89,   127,   128,   134,   126,
      80,   111,   126,   142,    81,    87,     3,   108,    85,    87,
     145,    72,   149,     3,     3,    81,    94,   109,   111,   109,
      97,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   104,   105,   102,   107,   111,   103,     3,
      30,    31,    34,    35,    36,    42,    43,    44,    50,    56,
      62,    88,   111,   112,   113,   150,   151,   152,   155,   156,
     157,   158,   159,   160,   138,   143,    69,   109,   144,    80,
      82,    18,   140,     3,    83,   109,   109,    83,    83,   120,
      85,   108,    87,    88,    89,    81,    80,   136,   143,    81,
     109,    83,    85,   145,   147,    81,    87,    83,    89,    89,
      88,   108,    88,    89,   150,    80,     3,    80,    88,   111,
      80,    80,    88,   154,   156,    81,    81,    83,    83,    81,
     138,    69,    83,   109,    83,    83,    85,   128,   108,   145,
     109,   108,   150,    89,   150,    62,    88,   111,   112,    88,
     111,    88,   111,   111,    85,    81,    83,    83,   150,    80,
      88,   111,    88,    88,   111,    81,    81,    81,   111,    81,
     111,    88,    88,   111,    81,   111,    88,   150,   150,   150,
      81,   150,    81,    81,   111,    81,   111,    88,   150,    81,
      81,   111,    38,   150,   150,    81,   150,    81,    81,   111,
     150,   150,    81,   150,   150,   150,   150,    81,   150,   150
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,    99,   100,
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
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
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
#line 86 "parser.y"
                             { }
#line 2068 "parser.tab.c"
    break;

  case 3: /* start: start declaration_or_fndef  */
#line 87 "parser.y"
                                  { }
#line 2074 "parser.tab.c"
    break;

  case 4: /* primary-expression: IDENT  */
#line 90 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));   }
#line 2080 "parser.tab.c"
    break;

  case 5: /* primary-expression: NUMBER  */
#line 91 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 2086 "parser.tab.c"
    break;

  case 6: /* primary-expression: STRING  */
#line 92 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 2094 "parser.tab.c"
    break;

  case 7: /* primary-expression: CHARLIT  */
#line 95 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 2100 "parser.tab.c"
    break;

  case 8: /* primary-expression: '(' expression ')'  */
#line 96 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2106 "parser.tab.c"
    break;

  case 9: /* postfix-expression: primary-expression  */
#line 99 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2112 "parser.tab.c"
    break;

  case 10: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 100 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 2118 "parser.tab.c"
    break;

  case 11: /* postfix-expression: postfix-expression '.' IDENT  */
#line 101 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 2124 "parser.tab.c"
    break;

  case 12: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 102 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2130 "parser.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 103 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2136 "parser.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression '(' ')'  */
#line 104 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2142 "parser.tab.c"
    break;

  case 15: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 105 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2148 "parser.tab.c"
    break;

  case 16: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 106 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2154 "parser.tab.c"
    break;

  case 17: /* expression-list: assignment-expression  */
#line 109 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2160 "parser.tab.c"
    break;

  case 18: /* expression-list: expression-list ',' assignment-expression  */
#line 110 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2166 "parser.tab.c"
    break;

  case 19: /* unary-expression: postfix-expression  */
#line 114 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2172 "parser.tab.c"
    break;

  case 20: /* unary-expression: PLUSPLUS unary-expression  */
#line 115 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2178 "parser.tab.c"
    break;

  case 21: /* unary-expression: MINUSMINUS unary-expression  */
#line 116 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2184 "parser.tab.c"
    break;

  case 22: /* unary-expression: unary-operator cast-expression  */
#line 117 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2190 "parser.tab.c"
    break;

  case 23: /* unary-expression: SIZEOF '(' expression ')'  */
#line 118 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2196 "parser.tab.c"
    break;

  case 24: /* unary-operator: '-'  */
#line 121 "parser.y"
                    { (yyval.op) = '-'; }
#line 2202 "parser.tab.c"
    break;

  case 25: /* unary-operator: '+'  */
#line 122 "parser.y"
                      { (yyval.op) = '+';  }
#line 2208 "parser.tab.c"
    break;

  case 26: /* unary-operator: '!'  */
#line 123 "parser.y"
                      {(yyval.op) = '!'; }
#line 2214 "parser.tab.c"
    break;

  case 27: /* unary-operator: '~'  */
#line 124 "parser.y"
                      {(yyval.op) = '~'; }
#line 2220 "parser.tab.c"
    break;

  case 28: /* unary-operator: '&'  */
#line 125 "parser.y"
                      {(yyval.op) = '&'; }
#line 2226 "parser.tab.c"
    break;

  case 29: /* unary-operator: '*'  */
#line 126 "parser.y"
                      {(yyval.op) = '*'; }
#line 2232 "parser.tab.c"
    break;

  case 30: /* cast-expression: unary-expression  */
#line 128 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2238 "parser.tab.c"
    break;

  case 31: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 129 "parser.y"
                                          { }
#line 2244 "parser.tab.c"
    break;

  case 32: /* mult-expression: cast-expression  */
#line 133 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2250 "parser.tab.c"
    break;

  case 33: /* mult-expression: mult-expression '*' cast-expression  */
#line 134 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2256 "parser.tab.c"
    break;

  case 34: /* mult-expression: mult-expression '/' cast-expression  */
#line 135 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2262 "parser.tab.c"
    break;

  case 35: /* mult-expression: mult-expression '%' cast-expression  */
#line 136 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2268 "parser.tab.c"
    break;

  case 36: /* add-expression: mult-expression  */
#line 139 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2274 "parser.tab.c"
    break;

  case 37: /* add-expression: add-expression '+' mult-expression  */
#line 140 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2280 "parser.tab.c"
    break;

  case 38: /* add-expression: add-expression '-' mult-expression  */
#line 141 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2286 "parser.tab.c"
    break;

  case 39: /* shift-expression: add-expression  */
#line 144 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2292 "parser.tab.c"
    break;

  case 40: /* shift-expression: shift-expression SHL add-expression  */
#line 145 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2298 "parser.tab.c"
    break;

  case 41: /* shift-expression: shift-expression SHR add-expression  */
#line 146 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2304 "parser.tab.c"
    break;

  case 42: /* relational-expression: shift-expression  */
#line 149 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2310 "parser.tab.c"
    break;

  case 43: /* relational-expression: relational-expression '<' shift-expression  */
#line 150 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2316 "parser.tab.c"
    break;

  case 44: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 151 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2322 "parser.tab.c"
    break;

  case 45: /* relational-expression: relational-expression '>' shift-expression  */
#line 152 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2328 "parser.tab.c"
    break;

  case 46: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 153 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2334 "parser.tab.c"
    break;

  case 47: /* equality-expression: relational-expression  */
#line 156 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2340 "parser.tab.c"
    break;

  case 48: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 157 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2346 "parser.tab.c"
    break;

  case 49: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 158 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2352 "parser.tab.c"
    break;

  case 50: /* bitwise-or-expression: bitwise-xor-expression  */
#line 161 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2358 "parser.tab.c"
    break;

  case 51: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 162 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2364 "parser.tab.c"
    break;

  case 52: /* bitwise-xor-expression: bitwise-and-expression  */
#line 165 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2370 "parser.tab.c"
    break;

  case 53: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 166 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2376 "parser.tab.c"
    break;

  case 54: /* bitwise-and-expression: equality-expression  */
#line 169 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2382 "parser.tab.c"
    break;

  case 55: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 170 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2388 "parser.tab.c"
    break;

  case 56: /* logical-or-expression: logical-and-expression  */
#line 173 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2394 "parser.tab.c"
    break;

  case 57: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 174 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2400 "parser.tab.c"
    break;

  case 58: /* logical-and-expression: bitwise-or-expression  */
#line 177 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2406 "parser.tab.c"
    break;

  case 59: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 178 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2412 "parser.tab.c"
    break;

  case 60: /* conditional-expression: logical-or-expression  */
#line 181 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2418 "parser.tab.c"
    break;

  case 61: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 182 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2424 "parser.tab.c"
    break;

  case 62: /* assignment-expression: conditional-expression  */
#line 185 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2430 "parser.tab.c"
    break;

  case 63: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 186 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2436 "parser.tab.c"
    break;

  case 64: /* assignment-operator: '='  */
#line 190 "parser.y"
                         {(yyval.op) = '='; }
#line 2442 "parser.tab.c"
    break;

  case 65: /* assignment-operator: PLUSEQ  */
#line 191 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2448 "parser.tab.c"
    break;

  case 66: /* assignment-operator: MINUSEQ  */
#line 192 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2454 "parser.tab.c"
    break;

  case 67: /* assignment-operator: TIMESEQ  */
#line 193 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2460 "parser.tab.c"
    break;

  case 68: /* assignment-operator: DIVEQ  */
#line 194 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2466 "parser.tab.c"
    break;

  case 69: /* assignment-operator: MODEQ  */
#line 195 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2472 "parser.tab.c"
    break;

  case 70: /* assignment-operator: SHLEQ  */
#line 196 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2478 "parser.tab.c"
    break;

  case 71: /* assignment-operator: SHREQ  */
#line 197 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2484 "parser.tab.c"
    break;

  case 72: /* assignment-operator: ANDEQ  */
#line 198 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2490 "parser.tab.c"
    break;

  case 73: /* assignment-operator: OREQ  */
#line 199 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2496 "parser.tab.c"
    break;

  case 74: /* assignment-operator: XOREQ  */
#line 200 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2502 "parser.tab.c"
    break;

  case 75: /* expression: assignment-expression  */
#line 202 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2508 "parser.tab.c"
    break;

  case 76: /* expression: expression ',' assignment-expression  */
#line 203 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2514 "parser.tab.c"
    break;

  case 77: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 209 "parser.y"
                                                             {  if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, current_scope, NULL);   }
#line 2521 "parser.tab.c"
    break;

  case 78: /* declaration: declaration-specifiers ';'  */
#line 211 "parser.y"
                                  { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);} symbent_struct_reset((yyvsp[-1].astnode_p), lineno, filename_buf, current_scope); }
#line 2527 "parser.tab.c"
    break;

  case 79: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 214 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2533 "parser.tab.c"
    break;

  case 80: /* declaration-specifiers: storage-class-specifier  */
#line 215 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2539 "parser.tab.c"
    break;

  case 81: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 216 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2545 "parser.tab.c"
    break;

  case 82: /* declaration-specifiers: type-specifier  */
#line 217 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2551 "parser.tab.c"
    break;

  case 83: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 218 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2557 "parser.tab.c"
    break;

  case 84: /* declaration-specifiers: type-qualifier  */
#line 219 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2563 "parser.tab.c"
    break;

  case 85: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 220 "parser.y"
                                                { }
#line 2569 "parser.tab.c"
    break;

  case 86: /* declaration-specifiers: function-specifier  */
#line 221 "parser.y"
                         { }
#line 2575 "parser.tab.c"
    break;

  case 87: /* init-declarator-list: init-declarator  */
#line 224 "parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 2581 "parser.tab.c"
    break;

  case 88: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 225 "parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2587 "parser.tab.c"
    break;

  case 89: /* init-declarator: declarator  */
#line 228 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2593 "parser.tab.c"
    break;

  case 90: /* init-declarator: declarator '=' initializer  */
#line 229 "parser.y"
                                 {/* do not have to do yet */ }
#line 2599 "parser.tab.c"
    break;

  case 91: /* storage-class-specifier: TYPEDEF  */
#line 234 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2605 "parser.tab.c"
    break;

  case 92: /* storage-class-specifier: EXTERN  */
#line 235 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2611 "parser.tab.c"
    break;

  case 93: /* storage-class-specifier: STATIC  */
#line 236 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2617 "parser.tab.c"
    break;

  case 94: /* storage-class-specifier: AUTO  */
#line 237 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2623 "parser.tab.c"
    break;

  case 95: /* storage-class-specifier: REGISTER  */
#line 238 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2629 "parser.tab.c"
    break;

  case 96: /* type-specifier: VOID  */
#line 243 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2635 "parser.tab.c"
    break;

  case 97: /* type-specifier: CHAR  */
#line 244 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2641 "parser.tab.c"
    break;

  case 98: /* type-specifier: SHORT  */
#line 245 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2647 "parser.tab.c"
    break;

  case 99: /* type-specifier: INT  */
#line 246 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2653 "parser.tab.c"
    break;

  case 100: /* type-specifier: LONG  */
#line 247 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2659 "parser.tab.c"
    break;

  case 101: /* type-specifier: FLOAT  */
#line 248 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2665 "parser.tab.c"
    break;

  case 102: /* type-specifier: DOUBLE  */
#line 249 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2671 "parser.tab.c"
    break;

  case 103: /* type-specifier: SIGNED  */
#line 250 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2677 "parser.tab.c"
    break;

  case 104: /* type-specifier: UNSIGNED  */
#line 251 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2683 "parser.tab.c"
    break;

  case 105: /* type-specifier: _BOOL  */
#line 252 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2689 "parser.tab.c"
    break;

  case 106: /* type-specifier: _COMPLEX  */
#line 253 "parser.y"
                            { }
#line 2695 "parser.tab.c"
    break;

  case 107: /* type-specifier: _IMAGINARY  */
#line 254 "parser.y"
                           { }
#line 2701 "parser.tab.c"
    break;

  case 108: /* type-specifier: struct-or-union-specifier  */
#line 255 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2707 "parser.tab.c"
    break;

  case 110: /* $@1: %empty  */
#line 262 "parser.y"
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
#line 2724 "parser.tab.c"
    break;

  case 111: /* $@2: %empty  */
#line 276 "parser.y"
                                     {  curstruct_scope->astnode->structunion.is_complete = 1; cur_struct = curstruct_scope->astnode; curstruct_scope = struct_pop(curstruct_scope);  printf("}\n");}
#line 2730 "parser.tab.c"
    break;

  case 112: /* struct-or-union-specifier: struct-or-union IDENT $@1 '{' struct-declaration-list $@2 '}'  */
#line 276 "parser.y"
                                                                                                                                                                                                          {    (yyval.astnode_p) = cur_struct;   }
#line 2736 "parser.tab.c"
    break;

  case 113: /* $@3: %empty  */
#line 277 "parser.y"
                                            {
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion((yyvsp[0].op), NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
            curstruct_scope = struct_push(curstruct_scope, newStructUnion((yyvsp[0].op), NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1));
        }
        
                            
                        }
#line 2752 "parser.tab.c"
    break;

  case 114: /* $@4: %empty  */
#line 287 "parser.y"
                                                        {curstruct_scope->astnode->structunion.is_complete = 1;  cur_struct = curstruct_scope->astnode; curstruct_scope = struct_pop(curstruct_scope); printf("}\n"); }
#line 2758 "parser.tab.c"
    break;

  case 115: /* struct-or-union-specifier: struct-or-union $@3 '{' struct-declaration-list $@4 '}'  */
#line 287 "parser.y"
                                                                                                                                                                                                                           { (yyval.astnode_p) = cur_struct;  }
#line 2764 "parser.tab.c"
    break;

  case 116: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 288 "parser.y"
                                                 { (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL, filename_buf, lineno, 0);   }
#line 2770 "parser.tab.c"
    break;

  case 117: /* struct-or-union: STRUCT  */
#line 291 "parser.y"
                        { (yyval.op) = STRUCT; }
#line 2776 "parser.tab.c"
    break;

  case 118: /* struct-or-union: UNION  */
#line 292 "parser.y"
                        { (yyval.op) =  UNION; }
#line 2782 "parser.tab.c"
    break;

  case 119: /* struct-declaration-list: struct-declaration  */
#line 295 "parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2790 "parser.tab.c"
    break;

  case 121: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 301 "parser.y"
                                                                        { symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, curstruct_scope->astnode->structunion.minitable, current_scope);    }
#line 2796 "parser.tab.c"
    break;

  case 122: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 304 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2802 "parser.tab.c"
    break;

  case 123: /* specifier-qualifier-list: type-specifier  */
#line 305 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2808 "parser.tab.c"
    break;

  case 124: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 306 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2814 "parser.tab.c"
    break;

  case 125: /* specifier-qualifier-list: type-qualifier  */
#line 307 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2820 "parser.tab.c"
    break;

  case 126: /* struct-declarator-list: struct-declarator  */
#line 309 "parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2826 "parser.tab.c"
    break;

  case 127: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 310 "parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2832 "parser.tab.c"
    break;

  case 128: /* struct-declarator: declarator  */
#line 312 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2838 "parser.tab.c"
    break;

  case 129: /* struct-declarator: declarator ':' conditional-expression  */
#line 313 "parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2846 "parser.tab.c"
    break;

  case 130: /* struct-declarator: ':' conditional-expression  */
#line 316 "parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2854 "parser.tab.c"
    break;

  case 138: /* type-qualifier: CONST  */
#line 337 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2860 "parser.tab.c"
    break;

  case 139: /* type-qualifier: RESTRICT  */
#line 338 "parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2866 "parser.tab.c"
    break;

  case 140: /* type-qualifier: VOLATILE  */
#line 339 "parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2872 "parser.tab.c"
    break;

  case 142: /* declarator: pointer direct-declarator  */
#line 346 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p));   }
#line 2878 "parser.tab.c"
    break;

  case 143: /* declarator: direct-declarator  */
#line 347 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2884 "parser.tab.c"
    break;

  case 144: /* direct-declarator: IDENT  */
#line 350 "parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2890 "parser.tab.c"
    break;

  case 145: /* direct-declarator: '(' declarator ')'  */
#line 351 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2896 "parser.tab.c"
    break;

  case 146: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 352 "parser.y"
                                                                                { }
#line 2902 "parser.tab.c"
    break;

  case 147: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 353 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2908 "parser.tab.c"
    break;

  case 148: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 354 "parser.y"
                                                         {}
#line 2914 "parser.tab.c"
    break;

  case 149: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 355 "parser.y"
                                                                                     {}
#line 2920 "parser.tab.c"
    break;

  case 150: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 356 "parser.y"
                                                                  {}
#line 2926 "parser.tab.c"
    break;

  case 151: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 357 "parser.y"
                                                                                     {}
#line 2932 "parser.tab.c"
    break;

  case 152: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 358 "parser.y"
                                                             { }
#line 2938 "parser.tab.c"
    break;

  case 153: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 359 "parser.y"
                                          { /*  */ }
#line 2944 "parser.tab.c"
    break;

  case 154: /* direct-declarator: direct-declarator '[' ']'  */
#line 360 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2950 "parser.tab.c"
    break;

  case 155: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 361 "parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));  }
#line 2956 "parser.tab.c"
    break;

  case 156: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 362 "parser.y"
                                                    { }
#line 2962 "parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '(' ')'  */
#line 363 "parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL)); }
#line 2968 "parser.tab.c"
    break;

  case 158: /* pointer: '*'  */
#line 366 "parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2974 "parser.tab.c"
    break;

  case 159: /* pointer: '*' type-qualifier-list  */
#line 367 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2980 "parser.tab.c"
    break;

  case 160: /* pointer: '*' type-qualifier-list pointer  */
#line 368 "parser.y"
                                          {}
#line 2986 "parser.tab.c"
    break;

  case 161: /* pointer: '*' pointer  */
#line 369 "parser.y"
                      { struct astnode *temp = newType(AST_NODE_TYPE_POINTER,  0);  temp->ptr.next = (yyvsp[0].astnode_p); (yyval.astnode_p) = temp; }
#line 2992 "parser.tab.c"
    break;

  case 162: /* type-qualifier-list: type-qualifier  */
#line 372 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2998 "parser.tab.c"
    break;

  case 163: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 373 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 3004 "parser.tab.c"
    break;

  case 164: /* parameter-type-list: parameter-list  */
#line 376 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3010 "parser.tab.c"
    break;

  case 166: /* parameter-list: parameter-declaration  */
#line 380 "parser.y"
                                          { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 3016 "parser.tab.c"
    break;

  case 167: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 381 "parser.y"
                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3022 "parser.tab.c"
    break;

  case 168: /* parameter-declaration: declaration-specifiers declarator  */
#line 384 "parser.y"
                                                             { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p)); }
#line 3028 "parser.tab.c"
    break;

  case 169: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 385 "parser.y"
                                                     { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p));  }
#line 3034 "parser.tab.c"
    break;

  case 170: /* parameter-declaration: declaration-specifiers  */
#line 386 "parser.y"
                                 { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, NULL, (yyvsp[0].astnode_p)); }
#line 3040 "parser.tab.c"
    break;

  case 171: /* identifier-list: IDENT  */
#line 389 "parser.y"
                           { }
#line 3046 "parser.tab.c"
    break;

  case 172: /* identifier-list: identifier-list ',' IDENT  */
#line 390 "parser.y"
                                    { }
#line 3052 "parser.tab.c"
    break;

  case 173: /* type-name: specifier-qualifier-list  */
#line 394 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3058 "parser.tab.c"
    break;

  case 175: /* abstract-declarator: pointer  */
#line 398 "parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 3064 "parser.tab.c"
    break;

  case 176: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 399 "parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 3070 "parser.tab.c"
    break;

  case 177: /* abstract-declarator: direct-abstract-declarator  */
#line 400 "parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3076 "parser.tab.c"
    break;

  case 178: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 403 "parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 3082 "parser.tab.c"
    break;

  case 179: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 404 "parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 3088 "parser.tab.c"
    break;

  case 180: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 405 "parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 3094 "parser.tab.c"
    break;

  case 181: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 406 "parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 3100 "parser.tab.c"
    break;

  case 182: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 407 "parser.y"
                                                 {   }
#line 3106 "parser.tab.c"
    break;

  case 183: /* direct-abstract-declarator: '[' '*' ']'  */
#line 408 "parser.y"
                      {  }
#line 3112 "parser.tab.c"
    break;

  case 184: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 409 "parser.y"
                                                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));  }
#line 3118 "parser.tab.c"
    break;

  case 185: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 410 "parser.y"
                                      { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, NULL);  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyval.astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));}
#line 3124 "parser.tab.c"
    break;

  case 186: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 411 "parser.y"
                                             { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL));  }
#line 3130 "parser.tab.c"
    break;

  case 199: /* statement: compound-statement  */
#line 442 "parser.y"
                                  { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3136 "parser.tab.c"
    break;

  case 200: /* statement: labeled-statement  */
#line 443 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3142 "parser.tab.c"
    break;

  case 201: /* statement: expression-statement  */
#line 444 "parser.y"
                               { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3148 "parser.tab.c"
    break;

  case 202: /* statement: selection-statement  */
#line 445 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3154 "parser.tab.c"
    break;

  case 203: /* statement: iteration-statement  */
#line 446 "parser.y"
                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3160 "parser.tab.c"
    break;

  case 204: /* statement: jump-statement  */
#line 447 "parser.y"
                         { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3166 "parser.tab.c"
    break;

  case 205: /* labeled-statement: IDENT ':' statement  */
#line 451 "parser.y"
                                           { (yyval.astnode_p) = newLabel((yyvsp[-2].string_literal), (yyvsp[0].astnode_p)); }
#line 3172 "parser.tab.c"
    break;

  case 206: /* labeled-statement: CASE conditional-expression ':' statement  */
#line 452 "parser.y"
                                                    { (yyval.astnode_p) = newCase((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3178 "parser.tab.c"
    break;

  case 207: /* labeled-statement: DEFAULT ':' statement  */
#line 453 "parser.y"
                                { (yyval.astnode_p) = newDefault((yyvsp[0].astnode_p)); }
#line 3184 "parser.tab.c"
    break;

  case 208: /* $@5: %empty  */
#line 457 "parser.y"
                    { if(isFunc) {current_scope = symbtab_push(SCOPE_FUNCTION, current_scope, lineno, filename_buf);
                                   symbent_combine_fn(fn_parameters, lineno, filename_buf, current_scope);
                                   current_functionscope = current_scope;
                                    } 
                        else { current_scope = symbtab_push(SCOPE_BLOCK, current_scope, lineno, filename_buf);}
                        isFunc = 0;

                        fn_parameters = NULL;
                        
                    }
#line 3199 "parser.tab.c"
    break;

  case 209: /* $@6: %empty  */
#line 468 "parser.y"
                    {  current_scope = symbtab_pop(current_scope); }
#line 3205 "parser.tab.c"
    break;

  case 210: /* compound-statement: '{' $@5 decl_or_stmt_list $@6 '}'  */
#line 468 "parser.y"
                                                                         {  (yyval.astnode_p) = (yyvsp[-2].astnode_p); }
#line 3211 "parser.tab.c"
    break;

  case 211: /* compound-statement: '{' '}'  */
#line 469 "parser.y"
                      { (yyval.astnode_p) = NULL; }
#line 3217 "parser.tab.c"
    break;

  case 212: /* decl_or_stmt_list: decl_or_stmt  */
#line 471 "parser.y"
                                { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 3223 "parser.tab.c"
    break;

  case 213: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 472 "parser.y"
                                          {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p)); }
#line 3229 "parser.tab.c"
    break;

  case 214: /* decl_or_stmt: declaration  */
#line 475 "parser.y"
                    { (yyval.astnode_p) = NULL; }
#line 3235 "parser.tab.c"
    break;

  case 215: /* decl_or_stmt: statement  */
#line 476 "parser.y"
                    { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 3241 "parser.tab.c"
    break;

  case 216: /* expression-statement: expression ';'  */
#line 479 "parser.y"
                                         { (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 3247 "parser.tab.c"
    break;

  case 218: /* selection-statement: IF '(' expression ')' statement  */
#line 483 "parser.y"
                                                                   { (yyval.astnode_p) = newifelse((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NULL);  }
#line 3253 "parser.tab.c"
    break;

  case 219: /* selection-statement: IF '(' expression ')' statement ELSE statement  */
#line 484 "parser.y"
                                                                    { (yyval.astnode_p) = newifelse((yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3259 "parser.tab.c"
    break;

  case 220: /* selection-statement: SWITCH '(' expression ')' statement  */
#line 485 "parser.y"
                                              { (yyval.astnode_p) = newswitch((yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));    }
#line 3265 "parser.tab.c"
    break;

  case 221: /* iteration-statement: WHILE '(' expression ')' statement  */
#line 489 "parser.y"
                                                            { (yyval.astnode_p) = newwhile(0, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));   }
#line 3271 "parser.tab.c"
    break;

  case 222: /* iteration-statement: DO statement WHILE '(' expression ')'  */
#line 490 "parser.y"
                                             { (yyval.astnode_p) = newwhile(1, (yyvsp[-1].astnode_p), (yyvsp[-4].astnode_p)); }
#line 3277 "parser.tab.c"
    break;

  case 223: /* iteration-statement: FOR '(' expression ';' expression ';' expression ')' statement  */
#line 491 "parser.y"
                                                                         { (yyval.astnode_p) = newfor((yyvsp[-6].astnode_p), (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3283 "parser.tab.c"
    break;

  case 224: /* iteration-statement: FOR '(' expression ';' expression ';' ')' statement  */
#line 492 "parser.y"
                                                              { (yyval.astnode_p) = newfor((yyvsp[-5].astnode_p), (yyvsp[-3].astnode_p), NULL, (yyvsp[0].astnode_p)); }
#line 3289 "parser.tab.c"
    break;

  case 225: /* iteration-statement: FOR '(' expression ';' ';' expression ')' statement  */
#line 493 "parser.y"
                                                              {   (yyval.astnode_p) = newfor((yyvsp[-5].astnode_p), NULL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3295 "parser.tab.c"
    break;

  case 226: /* iteration-statement: FOR '(' expression ';' ';' ')' statement  */
#line 494 "parser.y"
                                                   {    (yyval.astnode_p) = newfor((yyvsp[-4].astnode_p), NULL, NULL, (yyvsp[0].astnode_p)); }
#line 3301 "parser.tab.c"
    break;

  case 227: /* iteration-statement: FOR '(' ';' expression ';' expression ')' statement  */
#line 495 "parser.y"
                                                              { (yyval.astnode_p) = newfor(NULL, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3307 "parser.tab.c"
    break;

  case 228: /* iteration-statement: FOR '(' ';' expression ';' ')' statement  */
#line 496 "parser.y"
                                                   { (yyval.astnode_p) = newfor(NULL, (yyvsp[-3].astnode_p), NULL, (yyvsp[0].astnode_p)); }
#line 3313 "parser.tab.c"
    break;

  case 229: /* iteration-statement: FOR '(' ';' ';' expression ')' statement  */
#line 497 "parser.y"
                                                   {  (yyval.astnode_p) = newfor(NULL, NULL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 3319 "parser.tab.c"
    break;

  case 230: /* iteration-statement: FOR '(' ';' ';' ')' statement  */
#line 498 "parser.y"
                                        {(yyval.astnode_p) = newfor(NULL, NULL, NULL, (yyvsp[0].astnode_p)); }
#line 3325 "parser.tab.c"
    break;

  case 235: /* jump-statement: GOTO IDENT ';'  */
#line 505 "parser.y"
                                   { (yyval.astnode_p) = newGoTo((yyvsp[-1].string_literal));  }
#line 3331 "parser.tab.c"
    break;

  case 236: /* jump-statement: CONTINUE ';'  */
#line 506 "parser.y"
                       {(yyval.astnode_p) = newContinue(); }
#line 3337 "parser.tab.c"
    break;

  case 237: /* jump-statement: BREAK ';'  */
#line 507 "parser.y"
                    { (yyval.astnode_p) = newBreak(); }
#line 3343 "parser.tab.c"
    break;

  case 238: /* jump-statement: RETURN expression ';'  */
#line 508 "parser.y"
                                { (yyval.astnode_p) = newReturn((yyvsp[-1].astnode_p));}
#line 3349 "parser.tab.c"
    break;

  case 239: /* jump-statement: RETURN ';'  */
#line 509 "parser.y"
                     {  (yyval.astnode_p) = newReturn(NULL);}
#line 3355 "parser.tab.c"
    break;

  case 240: /* declaration_or_fndef: declaration  */
#line 512 "parser.y"
                                      { }
#line 3361 "parser.tab.c"
    break;

  case 242: /* $@7: %empty  */
#line 516 "parser.y"
                                                           { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                            symbent_combine((yyvsp[-1].astnode_p), insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)), lineno, filename_buf, current_scope, NULL);   
                                                            isFunc = 1; 
                                                            fn_parameters = (yyvsp[0].astnode_p);}
#line 3370 "parser.tab.c"
    break;

  case 243: /* function_definition: declaration-specifiers declarator $@7 compound-statement  */
#line 519 "parser.y"
                                                                                                     { printf("Ast Dump for function [ \n"); astwalk_impl((yyvsp[0].astnode_p),0); printf(" ] \n"); gen_quads((yyvsp[0].astnode_p)); }
#line 3376 "parser.tab.c"
    break;


#line 3380 "parser.tab.c"

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

#line 522 "parser.y"
       

    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
