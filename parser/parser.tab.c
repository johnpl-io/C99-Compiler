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

#line 97 "parser.tab.c"

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
  YYSYMBOL_declaration_or_fndef = 92,      /* declaration_or_fndef  */
  YYSYMBOL_function_definition = 93,       /* function_definition  */
  YYSYMBOL_94_1 = 94,                      /* $@1  */
  YYSYMBOL_compound_statement = 95,        /* compound_statement  */
  YYSYMBOL_96_2 = 96,                      /* $@2  */
  YYSYMBOL_97_3 = 97,                      /* $@3  */
  YYSYMBOL_decl_or_stmt_list = 98,         /* decl_or_stmt_list  */
  YYSYMBOL_decl_or_stmt = 99,              /* decl_or_stmt  */
  YYSYMBOL_stmt = 100,                     /* stmt  */
  YYSYMBOL_101_primary_expression = 101,   /* primary-expression  */
  YYSYMBOL_102_postfix_expression = 102,   /* postfix-expression  */
  YYSYMBOL_103_expression_list = 103,      /* expression-list  */
  YYSYMBOL_104_unary_expression = 104,     /* unary-expression  */
  YYSYMBOL_105_unary_operator = 105,       /* unary-operator  */
  YYSYMBOL_106_cast_expression = 106,      /* cast-expression  */
  YYSYMBOL_107_mult_expression = 107,      /* mult-expression  */
  YYSYMBOL_108_add_expression = 108,       /* add-expression  */
  YYSYMBOL_109_shift_expression = 109,     /* shift-expression  */
  YYSYMBOL_110_relational_expression = 110, /* relational-expression  */
  YYSYMBOL_111_equality_expression = 111,  /* equality-expression  */
  YYSYMBOL_112_bitwise_or_expression = 112, /* bitwise-or-expression  */
  YYSYMBOL_113_bitwise_xor_expression = 113, /* bitwise-xor-expression  */
  YYSYMBOL_114_bitwise_and_expression = 114, /* bitwise-and-expression  */
  YYSYMBOL_115_logical_or_expression = 115, /* logical-or-expression  */
  YYSYMBOL_116_logical_and_expression = 116, /* logical-and-expression  */
  YYSYMBOL_117_conditional_expression = 117, /* conditional-expression  */
  YYSYMBOL_118_assignment_expression = 118, /* assignment-expression  */
  YYSYMBOL_119_assignment_operator = 119,  /* assignment-operator  */
  YYSYMBOL_expression = 120,               /* expression  */
  YYSYMBOL_declaration = 121,              /* declaration  */
  YYSYMBOL_122_declaration_specifiers = 122, /* declaration-specifiers  */
  YYSYMBOL_123_init_declarator_list = 123, /* init-declarator-list  */
  YYSYMBOL_124_init_declarator = 124,      /* init-declarator  */
  YYSYMBOL_125_storage_class_specifier = 125, /* storage-class-specifier  */
  YYSYMBOL_126_type_specifier = 126,       /* type-specifier  */
  YYSYMBOL_127_struct_or_union_specifier = 127, /* struct-or-union-specifier  */
  YYSYMBOL_128_4 = 128,                    /* $@4  */
  YYSYMBOL_129_5 = 129,                    /* $@5  */
  YYSYMBOL_130_6 = 130,                    /* $@6  */
  YYSYMBOL_131_7 = 131,                    /* $@7  */
  YYSYMBOL_132_struct_or_union = 132,      /* struct-or-union  */
  YYSYMBOL_133_struct_declaration_list = 133, /* struct-declaration-list  */
  YYSYMBOL_134_struct_declaration = 134,   /* struct-declaration  */
  YYSYMBOL_135_specifier_qualifier_list = 135, /* specifier-qualifier-list  */
  YYSYMBOL_136_struct_declarator_list = 136, /* struct-declarator-list  */
  YYSYMBOL_137_struct_declarator = 137,    /* struct-declarator  */
  YYSYMBOL_138_enum_specifier = 138,       /* enum-specifier  */
  YYSYMBOL_139_enumerator_list = 139,      /* enumerator-list  */
  YYSYMBOL_enumerator = 140,               /* enumerator  */
  YYSYMBOL_141_type_qualifier = 141,       /* type-qualifier  */
  YYSYMBOL_142_function_specifier = 142,   /* function-specifier  */
  YYSYMBOL_declarator = 143,               /* declarator  */
  YYSYMBOL_144_direct_declarator = 144,    /* direct-declarator  */
  YYSYMBOL_pointer = 145,                  /* pointer  */
  YYSYMBOL_146_type_qualifier_list = 146,  /* type-qualifier-list  */
  YYSYMBOL_147_parameter_type_list = 147,  /* parameter-type-list  */
  YYSYMBOL_148_parameter_list = 148,       /* parameter-list  */
  YYSYMBOL_149_parameter_declaration = 149, /* parameter-declaration  */
  YYSYMBOL_150_identifier_list = 150,      /* identifier-list  */
  YYSYMBOL_151_type_name = 151,            /* type-name  */
  YYSYMBOL_152_abstract_declarator = 152,  /* abstract-declarator  */
  YYSYMBOL_153_direct_abstract_declarator = 153, /* direct-abstract-declarator  */
  YYSYMBOL_initializer = 154,              /* initializer  */
  YYSYMBOL_155_initializer_list = 155,     /* initializer-list  */
  YYSYMBOL_designation = 156,              /* designation  */
  YYSYMBOL_157_designator_list = 157,      /* designator-list  */
  YYSYMBOL_designator = 158                /* designator  */
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
#define YYLAST   1044

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

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
       0,    82,    82,    83,    86,    87,    89,    89,   101,   111,
      99,   115,   116,   119,   120,   122,   123,   127,   128,   129,
     132,   133,   136,   137,   138,   139,   140,   141,   142,   143,
     146,   147,   151,   152,   153,   154,   155,   158,   159,   160,
     161,   162,   163,   165,   166,   170,   171,   172,   173,   176,
     177,   178,   181,   182,   183,   186,   187,   188,   189,   190,
     193,   194,   195,   198,   199,   202,   203,   206,   207,   210,
     211,   214,   215,   218,   219,   222,   223,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   239,   240,
     246,   248,   251,   252,   253,   254,   255,   256,   257,   258,
     261,   262,   265,   266,   271,   272,   273,   274,   275,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   299,   312,   299,   313,   323,   313,   324,
     327,   328,   331,   334,   337,   340,   341,   342,   343,   345,
     346,   348,   349,   352,   359,   360,   361,   363,   364,   367,
     368,   373,   374,   375,   378,   382,   383,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   402,   403,   404,   405,   408,   409,   412,   413,   416,
     417,   420,   421,   422,   425,   426,   430,   431,   434,   435,
     436,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     455,   456,   457,   460,   461,   462,   463,   466,   469,   470,
     473,   474
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
  "start", "declaration_or_fndef", "function_definition", "$@1",
  "compound_statement", "$@2", "$@3", "decl_or_stmt_list", "decl_or_stmt",
  "stmt", "primary-expression", "postfix-expression", "expression-list",
  "unary-expression", "unary-operator", "cast-expression",
  "mult-expression", "add-expression", "shift-expression",
  "relational-expression", "equality-expression", "bitwise-or-expression",
  "bitwise-xor-expression", "bitwise-and-expression",
  "logical-or-expression", "logical-and-expression",
  "conditional-expression", "assignment-expression", "assignment-operator",
  "expression", "declaration", "declaration-specifiers",
  "init-declarator-list", "init-declarator", "storage-class-specifier",
  "type-specifier", "struct-or-union-specifier", "$@4", "$@5", "$@6",
  "$@7", "struct-or-union", "struct-declaration-list",
  "struct-declaration", "specifier-qualifier-list",
  "struct-declarator-list", "struct-declarator", "enum-specifier",
  "enumerator-list", "enumerator", "type-qualifier", "function-specifier",
  "declarator", "direct-declarator", "pointer", "type-qualifier-list",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "type-name", "abstract-declarator",
  "direct-abstract-declarator", "initializer", "initializer-list",
  "designation", "designator-list", "designator", YY_NULLPTR
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

#define YYTABLE_NINF (-124)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     945,  -186,  -186,  -186,  -186,    10,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,   795,  -186,  -186,  -186,    40,
     945,   945,  -186,    12,  -186,   945,   945,   -55,    49,  -186,
    -186,  -186,    -7,    41,  -186,    46,  -186,   -50,    42,    24,
    -186,  -186,   -25,   -13,  -186,  -186,    49,   -17,    -2,  -186,
    -186,  -186,    -7,   -18,    41,  -186,   354,    -4,   540,   382,
      42,     6,   979,    92,   695,    13,  -186,  -186,  -186,  -186,
      43,  -186,  -186,  -186,  -186,   714,   714,    32,  -186,  -186,
    -186,  -186,  -186,  -186,   695,   300,  -186,    60,   200,   695,
    -186,   -29,   140,   202,    71,   217,    52,    76,    93,    -6,
     148,  -186,  -186,  -186,  -186,  -186,  -186,  -186,    50,   105,
     102,  -186,    72,   676,   112,  -186,   116,   436,   979,   979,
     979,  -186,    17,   979,  -186,    49,  -186,  -186,  -186,  -186,
     128,  -186,  -186,   603,  -186,    73,   212,   695,  -186,   100,
     354,    83,  -186,   215,  -186,  -186,   226,   549,   695,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
     695,  -186,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   281,   481,   749,  -186,    36,  -186,   110,  -186,   908,
    -186,   231,   153,   676,  -186,  -186,   695,   162,  -186,   164,
     979,  -186,   169,  -186,   695,   154,  -186,   150,  -186,   695,
      82,   -24,   176,  -186,   695,  -186,   175,  -186,   198,  -186,
    -186,  -186,  -186,  -186,  -186,    89,  -186,   -36,  -186,  -186,
    -186,  -186,   -29,   -29,   140,   140,   202,   202,   202,   202,
      71,    71,    76,    93,   217,   148,   107,    52,  -186,   281,
    -186,  -186,   156,  -186,    40,   181,   182,   187,   191,   110,
     870,   408,  -186,  -186,  -186,  -186,   192,   193,  -186,  -186,
     180,  -186,  -186,    17,  -186,   695,  -186,   832,   118,  -186,
    -186,  -186,  -186,  -186,  -186,   354,  -186,   695,  -186,   695,
     194,  -186,  -186,  -186,  -186,  -186,  -186,  -186,   196,   205,
    -186,   208,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   107,   110,   151,   115,     0,   105,   114,   154,   112,
     113,   108,   152,   111,   116,   106,   130,   104,   131,   117,
     109,   153,   118,   119,   120,     0,     2,     5,     4,     0,
      93,    95,   121,   126,   122,    97,    99,   146,     0,     1,
       3,   157,   171,     0,    91,     0,   100,   102,   156,     0,
      92,    94,   129,     0,    96,    98,     0,   149,     0,   147,
     175,   174,   172,     0,     0,    90,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,   176,   173,   158,   101,
     102,    17,    20,    19,    18,     0,     0,     0,    39,    41,
      42,    37,    38,    40,     0,     0,    22,    32,    43,     0,
      45,    49,    52,    55,    60,    67,    71,    63,    65,    73,
      69,    75,   200,   103,     8,     7,   184,   170,   183,     0,
     177,   179,     0,     0,    42,   167,     0,     0,     0,   136,
     127,   132,     0,   138,   144,     0,    43,   150,   145,   148,
       0,    33,    34,     0,    88,     0,     0,     0,   204,     0,
       0,     0,   208,     0,    28,    29,     0,     0,     0,    80,
      81,    82,    78,    79,    83,    84,    85,    86,    87,    77,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   188,   182,   190,   168,     0,
     169,     0,     0,     0,   166,   160,     0,    42,   161,     0,
     124,   135,     0,   133,     0,     0,   139,   141,   137,     0,
       0,   186,     0,    21,     0,   211,     0,   201,     0,   203,
     207,   209,    25,    24,    27,     0,    30,     0,    76,    46,
      47,    48,    51,    50,    53,    54,    57,    59,    56,    58,
      61,    62,    64,    66,    68,    70,     0,    72,    15,     9,
      11,    14,     0,    13,     0,     0,     0,    42,     0,   189,
       0,     0,   178,   180,   185,   163,     0,     0,   165,   159,
       0,   128,   143,     0,   134,     0,    36,     0,   188,   187,
      44,    89,   210,   202,   206,     0,    26,     0,    23,     0,
       0,    12,    16,   198,   191,   196,   194,   199,     0,    42,
     193,     0,   162,   164,   125,   140,   142,   205,    31,    74,
      10,   197,   195,   192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,   256,  -186,  -186,   225,  -186,  -186,  -186,    34,
    -186,  -186,  -186,  -186,   -62,  -186,   -35,    74,    75,     2,
      77,   108,   104,   111,   113,  -186,   109,   -69,   -57,  -186,
     -66,  -177,     0,  -186,   234,  -186,   -54,  -186,  -186,  -186,
    -186,  -186,  -186,   172,  -111,   -83,  -186,    18,  -186,   246,
     -34,    45,  -186,   -27,   -43,   -41,   -21,   -65,  -186,   117,
    -186,  -186,  -110,  -185,   -78,  -186,    79,  -186,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    26,    27,    67,   258,   191,   300,   259,   260,
     261,    96,    97,   235,   136,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   144,   170,
     220,    28,   118,    45,    46,    30,    31,    32,    71,   280,
      53,   212,    33,   130,   131,   132,   215,   216,    34,    58,
      59,    35,    36,    63,    48,    49,    62,   265,   120,   121,
     122,   222,   266,   197,   113,   149,   150,   151,   152
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    61,    47,   119,    98,   137,    70,    98,   196,   112,
     269,   188,   126,    37,   263,    52,    57,   148,   129,   213,
      41,    77,    66,   141,   142,    29,     3,    41,   145,    56,
      50,    51,    98,    98,    -6,    54,    55,    80,   112,    41,
     172,   139,    12,    41,    41,    42,   211,   298,   127,   173,
     218,   224,    57,    41,    21,    74,   287,   174,   193,  -123,
     221,    98,    42,    78,   171,    98,   202,   153,   154,   155,
     209,    72,   229,   189,   129,   129,   129,   195,   226,   129,
     114,    98,   263,   179,   180,    75,    42,    60,    98,   129,
     128,   194,   237,   112,    38,    98,    98,    43,   138,   213,
     236,   139,   203,   269,    43,   217,   214,    76,    98,    42,
      42,   289,   143,   238,    60,    66,   192,   133,   193,    42,
      43,    43,    68,   256,    69,   262,   185,    98,    44,    98,
     192,    98,   193,    64,    65,   156,   268,   239,   240,   241,
     157,    98,   158,   186,    98,   282,   276,   181,   182,   277,
     294,   195,    70,   200,   223,   230,   129,    98,   146,   201,
     224,   187,    98,   286,   190,   147,    98,   291,    60,   224,
     296,   112,    76,   133,   133,   133,   297,   134,   133,   135,
     288,   246,   247,   248,   249,   227,   198,   228,   133,   199,
     270,   264,   271,   262,   224,   204,   299,    98,   287,   205,
     193,    81,    82,    83,    84,   308,    85,    86,   219,    98,
     175,   176,   177,   178,   311,   225,   316,   317,   232,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   233,
     319,   183,   184,    98,   274,    98,   275,    80,   112,   285,
     318,   283,   284,   224,   302,   278,   288,   279,    76,   242,
     243,    87,   244,   245,   281,   133,   217,   290,   292,   264,
     250,   251,   303,   304,    88,   314,    89,    90,    91,    92,
     305,    93,   169,   146,   306,   312,   313,   321,    94,   320,
     147,    40,    95,   293,    81,    82,    83,    84,   322,    85,
      86,   323,   115,   301,   257,   254,   252,   255,    79,   253,
     210,   315,    73,    81,    82,    83,    84,   295,    85,    86,
       1,   231,     0,     2,     3,     0,   273,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,    87,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,    23,    24,    88,     0,    89,
      90,    91,    92,    87,    93,     0,     0,    81,    82,    83,
      84,    94,    85,    86,     0,   114,    88,     0,    89,    90,
      91,    92,     0,    93,     0,   146,     0,     0,     0,     0,
      94,     0,   147,     0,    95,    81,    82,    83,    84,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,    81,    82,    83,    84,     3,    85,    86,     0,     0,
      88,     0,    89,    90,    91,    92,     0,    93,     0,     0,
       0,    12,     0,     0,    94,    87,   123,     0,    95,    81,
      82,    83,    84,    21,    85,    86,     0,     0,    88,     0,
      89,   124,    91,    92,     0,    93,     0,     0,     0,     0,
       0,    87,    94,     0,     0,   125,     0,     0,     0,     3,
       0,     0,     0,     0,    88,     0,    89,   309,    91,    92,
       0,    93,     0,     0,    41,    12,     0,     0,    94,    87,
     206,   310,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,    88,     0,    89,   207,    91,    92,     0,    93,
       1,     0,     0,     2,     3,     0,    94,     0,     4,   208,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,   116,    22,    23,    24,     0,     0,     0,
      42,     0,    81,    82,    83,    84,     0,    85,    86,     0,
       0,   192,     0,   193,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,    21,    87,    22,    23,    24,    81,    82,    83,    84,
       0,    85,    86,     0,     0,    88,     0,    89,    90,    91,
      92,   117,    93,     0,     0,     0,     0,     0,     0,    94,
     234,     0,     0,     0,     0,     2,     3,     0,     0,     0,
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
       0,     0,    81,    82,    83,    84,    94,    85,    86,     0,
       0,    88,     0,    89,    90,    91,    92,   140,    93,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
      88,     0,    89,    90,    91,    92,     0,    93,     0,     0,
       0,     0,     0,     0,    94,    39,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,   267,    91,
      92,     0,    93,     0,     1,     0,     0,     2,     3,    94,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,    23,
      24,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,    17,
      18,    19,    20,    21,     0,    22,    23,    24,     0,     1,
       0,    42,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,   287,     0,   193,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    16,   272,    17,    18,    19,
      20,    21,     0,    22,    23,    24,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,   307,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,    23,    24,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,    23,
      24,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     0,     9,    10,     0,    12,     0,
      13,    14,     0,     0,    16,     0,     0,    18,    19,    20,
      21,     0,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    42,    29,    68,    66,    74,    49,    69,   118,    66,
     195,    17,    69,     3,   191,     3,     3,    95,    72,   130,
       3,    62,    72,    85,    86,    25,    33,     3,    94,    84,
      30,    31,    94,    95,    84,    35,    36,    64,    95,     3,
      69,    75,    49,     3,     3,    69,   129,    83,    69,    78,
     133,    87,     3,     3,    61,    72,    80,    86,    82,    84,
     143,   123,    69,    81,    99,   127,   123,     7,     8,     9,
     127,    84,   150,    79,   128,   129,   130,   118,   147,   133,
      84,   143,   259,    12,    13,    87,    69,    42,   150,   143,
      84,   118,   158,   150,    84,   157,   158,    80,    85,   210,
     157,   135,   123,   288,    80,   132,    89,    62,   170,    69,
      69,   221,    80,   170,    69,    72,    80,    72,    82,    69,
      80,    80,    80,   189,    82,   191,    74,   189,    88,   191,
      80,   193,    82,    87,    88,    75,   193,   172,   173,   174,
      80,   203,    82,    67,   206,   214,   203,    76,    77,   206,
     228,   192,   195,    81,    81,    72,   210,   219,    75,    87,
      87,    68,   224,    81,    16,    82,   228,   224,   123,    87,
      81,   228,   127,   128,   129,   130,    87,    85,   133,    87,
     221,   179,   180,   181,   182,    85,    81,    87,   143,    87,
      80,   191,    82,   259,    87,    83,    89,   259,    80,    83,
      82,     3,     4,     5,     6,   270,     8,     9,    80,   271,
      70,    71,    10,    11,   271,     3,   285,   295,     3,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     3,
     299,    14,    15,   295,     3,   297,    83,   264,   295,    89,
     297,    87,    88,    87,    88,    83,   287,    83,   203,   175,
     176,    53,   177,   178,    85,   210,   283,    81,    83,   259,
     183,   184,    81,    81,    66,    85,    68,    69,    70,    71,
      83,    73,    72,    75,    83,    83,    83,    81,    80,    85,
      82,    25,    84,    85,     3,     4,     5,     6,    83,     8,
       9,    83,    67,   259,   190,   187,   185,   188,    64,   186,
     128,   283,    56,     3,     4,     5,     6,   228,     8,     9,
      29,   151,    -1,    32,    33,    -1,   199,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    53,    73,    -1,    -1,     3,     4,     5,
       6,    80,     8,     9,    -1,    84,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    84,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,     3,     4,     5,     6,    33,     8,     9,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    49,    -1,    -1,    80,    53,    54,    -1,    84,     3,
       4,     5,     6,    61,     8,     9,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    53,    80,    -1,    -1,    83,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,     3,    49,    -1,    -1,    80,    53,
      54,    83,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      29,    -1,    -1,    32,    33,    -1,    80,    -1,    37,    83,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,     3,    63,    64,    65,    -1,    -1,    -1,
      69,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    53,    63,    64,    65,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    81,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
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
      -1,    -1,     3,     4,     5,     6,    80,     8,     9,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    53,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    -1,    29,    -1,    -1,    32,    33,    80,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    29,
      -1,    69,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    80,    -1,    82,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    18,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    29,    -1,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    81,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    29,    -1,    -1,    32,    33,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,    -1,
      51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,
      61,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    32,    33,    37,    39,    40,    41,    45,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    64,    65,    91,    92,    93,   121,   122,
     125,   126,   127,   132,   138,   141,   142,     3,    84,     0,
      92,     3,    69,    80,    88,   123,   124,   143,   144,   145,
     122,   122,     3,   130,   122,   122,    84,     3,   139,   140,
     141,   145,   146,   143,    87,    88,    72,    94,    80,    82,
     144,   128,    84,   139,    72,    87,   141,   145,    81,   124,
     143,     3,     4,     5,     6,     8,     9,    53,    66,    68,
      69,    70,    71,    73,    80,    84,   101,   102,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   154,    84,    95,     3,    81,   122,   147,
     148,   149,   150,    54,    69,    83,   118,   146,    84,   126,
     133,   134,   135,   141,    85,    87,   104,   117,    85,   140,
      53,   104,   104,    80,   118,   120,    75,    82,   154,   155,
     156,   157,   158,     7,     8,     9,    75,    80,    82,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    72,
     119,   106,    69,    78,    86,    70,    71,    10,    11,    12,
      13,    76,    77,    14,    15,    74,    67,    68,    17,    79,
      16,    96,    80,    82,   143,   145,   152,   153,    81,    87,
      81,    87,   118,   146,    83,    83,    54,    69,    83,   118,
     133,   135,   131,   134,    89,   136,   137,   143,   135,    80,
     120,   135,   151,    81,    87,     3,   117,    85,    87,   154,
      72,   158,     3,     3,    81,   103,   118,   120,   118,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     110,   110,   113,   114,   111,   116,   120,   112,    95,    98,
      99,   100,   120,   121,   122,   147,   152,    69,   118,   153,
      80,    82,    18,   149,     3,    83,   118,   118,    83,    83,
     129,    85,   117,    87,    88,    89,    81,    80,   145,   152,
      81,   118,    83,    85,   154,   156,    81,    87,    83,    89,
      97,    99,    88,    81,    81,    83,    83,    81,   147,    69,
      83,   118,    83,    83,    85,   137,   117,   154,   118,   117,
      85,    81,    83,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    94,    93,    96,    97,
      95,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   109,   109,   109,   110,   110,   110,   110,   110,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   128,   129,   127,   130,   131,   127,   127,
     132,   132,   133,   133,   134,   135,   135,   135,   135,   136,
     136,   137,   137,   137,   138,   138,   138,   139,   139,   140,
     140,   141,   141,   141,   142,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     154,   154,   154,   155,   155,   155,   155,   156,   157,   157,
     158,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     4,     0,     0,
       5,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     1,     4,     3,     3,     4,     3,     2,     2,
       1,     3,     1,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     0,     0,     6,     2,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     3,     2,     5,     5,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     3,     5,
       4,     4,     6,     5,     6,     5,     4,     3,     4,     4,
       3,     1,     2,     3,     2,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     2,
       1,     3,     4,     3,     3,     4,     3,     4,     3,     3,
       1,     3,     4,     2,     1,     4,     3,     2,     1,     2,
       3,     2
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
#line 82 "parser.y"
                             { }
#line 1915 "parser.tab.c"
    break;

  case 3: /* start: start declaration_or_fndef  */
#line 83 "parser.y"
                                  { }
#line 1921 "parser.tab.c"
    break;

  case 4: /* declaration_or_fndef: declaration  */
#line 86 "parser.y"
                                  { }
#line 1927 "parser.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 89 "parser.y"
                                                       { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-1].astnode_p), insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)), lineno, filename_buf, current_scope, NULL);   
                                                          isFunc = 1; 
                                                          fn_parameters = (yyvsp[0].astnode_p);
                                                  
                                                           }
#line 1938 "parser.tab.c"
    break;

  case 7: /* function_definition: declaration-specifiers declarator $@1 compound_statement  */
#line 95 "parser.y"
                                                                            { }
#line 1944 "parser.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 101 "parser.y"
                    { if(isFunc) {current_scope = symbtab_push(SCOPE_FUNCTION, current_scope, lineno, filename_buf);
                                   symbent_combine_fn(fn_parameters, lineno, filename_buf, current_scope);
                                    } 
                        else { current_scope = symbtab_push(SCOPE_BLOCK, current_scope, lineno, filename_buf);}
                        isFunc = 0;

                        fn_parameters = NULL;
                        
                    }
#line 1958 "parser.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 111 "parser.y"
                    {  current_scope = symbtab_pop(current_scope); }
#line 1964 "parser.tab.c"
    break;

  case 10: /* compound_statement: '{' $@2 decl_or_stmt_list $@3 '}'  */
#line 111 "parser.y"
                                                                         {  }
#line 1970 "parser.tab.c"
    break;

  case 11: /* decl_or_stmt_list: decl_or_stmt  */
#line 115 "parser.y"
                                { }
#line 1976 "parser.tab.c"
    break;

  case 12: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 116 "parser.y"
                                          { }
#line 1982 "parser.tab.c"
    break;

  case 13: /* decl_or_stmt: declaration  */
#line 119 "parser.y"
                    {  }
#line 1988 "parser.tab.c"
    break;

  case 16: /* stmt: expression ';'  */
#line 123 "parser.y"
                     {  }
#line 1994 "parser.tab.c"
    break;

  case 17: /* primary-expression: IDENT  */
#line 127 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 2000 "parser.tab.c"
    break;

  case 18: /* primary-expression: NUMBER  */
#line 128 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 2006 "parser.tab.c"
    break;

  case 19: /* primary-expression: STRING  */
#line 129 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 2014 "parser.tab.c"
    break;

  case 20: /* primary-expression: CHARLIT  */
#line 132 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 2020 "parser.tab.c"
    break;

  case 21: /* primary-expression: '(' expression ')'  */
#line 133 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2026 "parser.tab.c"
    break;

  case 22: /* postfix-expression: primary-expression  */
#line 136 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2032 "parser.tab.c"
    break;

  case 23: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 137 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 2038 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression '.' IDENT  */
#line 138 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 2044 "parser.tab.c"
    break;

  case 25: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 139 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2050 "parser.tab.c"
    break;

  case 26: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 140 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2056 "parser.tab.c"
    break;

  case 27: /* postfix-expression: postfix-expression '(' ')'  */
#line 141 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2062 "parser.tab.c"
    break;

  case 28: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 142 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2068 "parser.tab.c"
    break;

  case 29: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 143 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2074 "parser.tab.c"
    break;

  case 30: /* expression-list: assignment-expression  */
#line 146 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2080 "parser.tab.c"
    break;

  case 31: /* expression-list: expression-list ',' assignment-expression  */
#line 147 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2086 "parser.tab.c"
    break;

  case 32: /* unary-expression: postfix-expression  */
#line 151 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2092 "parser.tab.c"
    break;

  case 33: /* unary-expression: PLUSPLUS unary-expression  */
#line 152 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2098 "parser.tab.c"
    break;

  case 34: /* unary-expression: MINUSMINUS unary-expression  */
#line 153 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2104 "parser.tab.c"
    break;

  case 35: /* unary-expression: unary-operator cast-expression  */
#line 154 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2110 "parser.tab.c"
    break;

  case 36: /* unary-expression: SIZEOF '(' expression ')'  */
#line 155 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2116 "parser.tab.c"
    break;

  case 37: /* unary-operator: '-'  */
#line 158 "parser.y"
                    { (yyval.op) = '-'; }
#line 2122 "parser.tab.c"
    break;

  case 38: /* unary-operator: '+'  */
#line 159 "parser.y"
                      { (yyval.op) = '+';  }
#line 2128 "parser.tab.c"
    break;

  case 39: /* unary-operator: '!'  */
#line 160 "parser.y"
                      {(yyval.op) = '!'; }
#line 2134 "parser.tab.c"
    break;

  case 40: /* unary-operator: '~'  */
#line 161 "parser.y"
                      {(yyval.op) = '~'; }
#line 2140 "parser.tab.c"
    break;

  case 41: /* unary-operator: '&'  */
#line 162 "parser.y"
                      {(yyval.op) = '&'; }
#line 2146 "parser.tab.c"
    break;

  case 42: /* unary-operator: '*'  */
#line 163 "parser.y"
                      {(yyval.op) = '*'; }
#line 2152 "parser.tab.c"
    break;

  case 43: /* cast-expression: unary-expression  */
#line 165 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2158 "parser.tab.c"
    break;

  case 44: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 166 "parser.y"
                                          { }
#line 2164 "parser.tab.c"
    break;

  case 45: /* mult-expression: cast-expression  */
#line 170 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2170 "parser.tab.c"
    break;

  case 46: /* mult-expression: mult-expression '*' cast-expression  */
#line 171 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2176 "parser.tab.c"
    break;

  case 47: /* mult-expression: mult-expression '/' cast-expression  */
#line 172 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2182 "parser.tab.c"
    break;

  case 48: /* mult-expression: mult-expression '%' cast-expression  */
#line 173 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2188 "parser.tab.c"
    break;

  case 49: /* add-expression: mult-expression  */
#line 176 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2194 "parser.tab.c"
    break;

  case 50: /* add-expression: add-expression '+' mult-expression  */
#line 177 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2200 "parser.tab.c"
    break;

  case 51: /* add-expression: add-expression '-' mult-expression  */
#line 178 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2206 "parser.tab.c"
    break;

  case 52: /* shift-expression: add-expression  */
#line 181 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2212 "parser.tab.c"
    break;

  case 53: /* shift-expression: shift-expression SHL add-expression  */
#line 182 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2218 "parser.tab.c"
    break;

  case 54: /* shift-expression: shift-expression SHR add-expression  */
#line 183 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2224 "parser.tab.c"
    break;

  case 55: /* relational-expression: shift-expression  */
#line 186 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2230 "parser.tab.c"
    break;

  case 56: /* relational-expression: relational-expression '<' shift-expression  */
#line 187 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2236 "parser.tab.c"
    break;

  case 57: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 188 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2242 "parser.tab.c"
    break;

  case 58: /* relational-expression: relational-expression '>' shift-expression  */
#line 189 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2248 "parser.tab.c"
    break;

  case 59: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 190 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2254 "parser.tab.c"
    break;

  case 60: /* equality-expression: relational-expression  */
#line 193 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2260 "parser.tab.c"
    break;

  case 61: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 194 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2266 "parser.tab.c"
    break;

  case 62: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 195 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2272 "parser.tab.c"
    break;

  case 63: /* bitwise-or-expression: bitwise-xor-expression  */
#line 198 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2278 "parser.tab.c"
    break;

  case 64: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 199 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2284 "parser.tab.c"
    break;

  case 65: /* bitwise-xor-expression: bitwise-and-expression  */
#line 202 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2290 "parser.tab.c"
    break;

  case 66: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 203 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2296 "parser.tab.c"
    break;

  case 67: /* bitwise-and-expression: equality-expression  */
#line 206 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2302 "parser.tab.c"
    break;

  case 68: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 207 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2308 "parser.tab.c"
    break;

  case 69: /* logical-or-expression: logical-and-expression  */
#line 210 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2314 "parser.tab.c"
    break;

  case 70: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 211 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2320 "parser.tab.c"
    break;

  case 71: /* logical-and-expression: bitwise-or-expression  */
#line 214 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2326 "parser.tab.c"
    break;

  case 72: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 215 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2332 "parser.tab.c"
    break;

  case 73: /* conditional-expression: logical-or-expression  */
#line 218 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2338 "parser.tab.c"
    break;

  case 74: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 219 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2344 "parser.tab.c"
    break;

  case 75: /* assignment-expression: conditional-expression  */
#line 222 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2350 "parser.tab.c"
    break;

  case 76: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 223 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2356 "parser.tab.c"
    break;

  case 77: /* assignment-operator: '='  */
#line 227 "parser.y"
                         {(yyval.op) = '='; }
#line 2362 "parser.tab.c"
    break;

  case 78: /* assignment-operator: PLUSEQ  */
#line 228 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2368 "parser.tab.c"
    break;

  case 79: /* assignment-operator: MINUSEQ  */
#line 229 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2374 "parser.tab.c"
    break;

  case 80: /* assignment-operator: TIMESEQ  */
#line 230 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2380 "parser.tab.c"
    break;

  case 81: /* assignment-operator: DIVEQ  */
#line 231 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2386 "parser.tab.c"
    break;

  case 82: /* assignment-operator: MODEQ  */
#line 232 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2392 "parser.tab.c"
    break;

  case 83: /* assignment-operator: SHLEQ  */
#line 233 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2398 "parser.tab.c"
    break;

  case 84: /* assignment-operator: SHREQ  */
#line 234 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2404 "parser.tab.c"
    break;

  case 85: /* assignment-operator: ANDEQ  */
#line 235 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2410 "parser.tab.c"
    break;

  case 86: /* assignment-operator: OREQ  */
#line 236 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2416 "parser.tab.c"
    break;

  case 87: /* assignment-operator: XOREQ  */
#line 237 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2422 "parser.tab.c"
    break;

  case 88: /* expression: assignment-expression  */
#line 239 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2428 "parser.tab.c"
    break;

  case 89: /* expression: expression ',' assignment-expression  */
#line 240 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2434 "parser.tab.c"
    break;

  case 90: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 246 "parser.y"
                                                             {  if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, current_scope, NULL);   }
#line 2441 "parser.tab.c"
    break;

  case 91: /* declaration: declaration-specifiers ';'  */
#line 248 "parser.y"
                                  { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);} symbent_struct_reset((yyvsp[-1].astnode_p), lineno, filename_buf, current_scope); }
#line 2447 "parser.tab.c"
    break;

  case 92: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 251 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2453 "parser.tab.c"
    break;

  case 93: /* declaration-specifiers: storage-class-specifier  */
#line 252 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2459 "parser.tab.c"
    break;

  case 94: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 253 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2465 "parser.tab.c"
    break;

  case 95: /* declaration-specifiers: type-specifier  */
#line 254 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2471 "parser.tab.c"
    break;

  case 96: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 255 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2477 "parser.tab.c"
    break;

  case 97: /* declaration-specifiers: type-qualifier  */
#line 256 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2483 "parser.tab.c"
    break;

  case 98: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 257 "parser.y"
                                                { }
#line 2489 "parser.tab.c"
    break;

  case 99: /* declaration-specifiers: function-specifier  */
#line 258 "parser.y"
                         { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
#line 2495 "parser.tab.c"
    break;

  case 100: /* init-declarator-list: init-declarator  */
#line 261 "parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 2501 "parser.tab.c"
    break;

  case 101: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 262 "parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2507 "parser.tab.c"
    break;

  case 102: /* init-declarator: declarator  */
#line 265 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2513 "parser.tab.c"
    break;

  case 103: /* init-declarator: declarator '=' initializer  */
#line 266 "parser.y"
                                 {/* do not have to do yet */ }
#line 2519 "parser.tab.c"
    break;

  case 104: /* storage-class-specifier: TYPEDEF  */
#line 271 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2525 "parser.tab.c"
    break;

  case 105: /* storage-class-specifier: EXTERN  */
#line 272 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2531 "parser.tab.c"
    break;

  case 106: /* storage-class-specifier: STATIC  */
#line 273 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2537 "parser.tab.c"
    break;

  case 107: /* storage-class-specifier: AUTO  */
#line 274 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2543 "parser.tab.c"
    break;

  case 108: /* storage-class-specifier: REGISTER  */
#line 275 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2549 "parser.tab.c"
    break;

  case 109: /* type-specifier: VOID  */
#line 280 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2555 "parser.tab.c"
    break;

  case 110: /* type-specifier: CHAR  */
#line 281 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2561 "parser.tab.c"
    break;

  case 111: /* type-specifier: SHORT  */
#line 282 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2567 "parser.tab.c"
    break;

  case 112: /* type-specifier: INT  */
#line 283 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2573 "parser.tab.c"
    break;

  case 113: /* type-specifier: LONG  */
#line 284 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2579 "parser.tab.c"
    break;

  case 114: /* type-specifier: FLOAT  */
#line 285 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2585 "parser.tab.c"
    break;

  case 115: /* type-specifier: DOUBLE  */
#line 286 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2591 "parser.tab.c"
    break;

  case 116: /* type-specifier: SIGNED  */
#line 287 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2597 "parser.tab.c"
    break;

  case 117: /* type-specifier: UNSIGNED  */
#line 288 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2603 "parser.tab.c"
    break;

  case 118: /* type-specifier: _BOOL  */
#line 289 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2609 "parser.tab.c"
    break;

  case 119: /* type-specifier: _COMPLEX  */
#line 290 "parser.y"
                            { }
#line 2615 "parser.tab.c"
    break;

  case 120: /* type-specifier: _IMAGINARY  */
#line 291 "parser.y"
                           { }
#line 2621 "parser.tab.c"
    break;

  case 121: /* type-specifier: struct-or-union-specifier  */
#line 292 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2627 "parser.tab.c"
    break;

  case 123: /* $@4: %empty  */
#line 299 "parser.y"
                                                 {            
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
            curstruct_scope = struct_push(curstruct_scope, newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1));
        }
         symbent_struct(curstruct_scope->astnode, current_scope, lineno,  filename_buf, curstruct_scope->astnode->structunion.name, false); 
         
        }
#line 2643 "parser.tab.c"
    break;

  case 124: /* $@5: %empty  */
#line 312 "parser.y"
                                    {  curstruct_scope->astnode->structunion.is_complete = 1; curstruct_scope = struct_pop(curstruct_scope); printf("ISCOMPLETE"); }
#line 2649 "parser.tab.c"
    break;

  case 125: /* struct-or-union-specifier: struct-or-union IDENT $@4 '{' struct-declaration-list $@5 '}'  */
#line 312 "parser.y"
                                                                                                                                                                         {    (yyval.astnode_p) = cur_struct;  }
#line 2655 "parser.tab.c"
    break;

  case 126: /* $@6: %empty  */
#line 313 "parser.y"
                                            {
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
    if(!curstruct_scope) { 
        cur_struct = newStructUnion((yyvsp[0].op), NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1);
        curstruct_scope =  struct_stack_init(cur_struct);
        } else {
            curstruct_scope = struct_push(curstruct_scope, newStructUnion((yyvsp[0].op), NULL, symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno, 1));
        }
        
                            
                        }
#line 2671 "parser.tab.c"
    break;

  case 127: /* $@7: %empty  */
#line 323 "parser.y"
                                                       {curstruct_scope->astnode->structunion.is_complete = 1; curstruct_scope = struct_pop(curstruct_scope); printf("ISCOMPLETE"); }
#line 2677 "parser.tab.c"
    break;

  case 128: /* struct-or-union-specifier: struct-or-union $@6 '{' struct-declaration-list $@7 '}'  */
#line 323 "parser.y"
                                                                                                                                                                                         { (yyval.astnode_p) = cur_struct;  }
#line 2683 "parser.tab.c"
    break;

  case 129: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 324 "parser.y"
                                                 { (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL, filename_buf, lineno, 0);   }
#line 2689 "parser.tab.c"
    break;

  case 130: /* struct-or-union: STRUCT  */
#line 327 "parser.y"
                        { (yyval.op) = STRUCT; }
#line 2695 "parser.tab.c"
    break;

  case 131: /* struct-or-union: UNION  */
#line 328 "parser.y"
                        { (yyval.op) =  UNION; }
#line 2701 "parser.tab.c"
    break;

  case 132: /* struct-declaration-list: struct-declaration  */
#line 331 "parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2709 "parser.tab.c"
    break;

  case 134: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 337 "parser.y"
                                                                        { symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, cur_struct->structunion.minitable, current_scope);    }
#line 2715 "parser.tab.c"
    break;

  case 135: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 340 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2721 "parser.tab.c"
    break;

  case 136: /* specifier-qualifier-list: type-specifier  */
#line 341 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2727 "parser.tab.c"
    break;

  case 137: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 342 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2733 "parser.tab.c"
    break;

  case 138: /* specifier-qualifier-list: type-qualifier  */
#line 343 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2739 "parser.tab.c"
    break;

  case 139: /* struct-declarator-list: struct-declarator  */
#line 345 "parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2745 "parser.tab.c"
    break;

  case 140: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 346 "parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2751 "parser.tab.c"
    break;

  case 141: /* struct-declarator: declarator  */
#line 348 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2757 "parser.tab.c"
    break;

  case 142: /* struct-declarator: declarator ':' conditional-expression  */
#line 349 "parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2765 "parser.tab.c"
    break;

  case 143: /* struct-declarator: ':' conditional-expression  */
#line 352 "parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2773 "parser.tab.c"
    break;

  case 151: /* type-qualifier: CONST  */
#line 373 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2779 "parser.tab.c"
    break;

  case 152: /* type-qualifier: RESTRICT  */
#line 374 "parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2785 "parser.tab.c"
    break;

  case 153: /* type-qualifier: VOLATILE  */
#line 375 "parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2791 "parser.tab.c"
    break;

  case 155: /* declarator: pointer direct-declarator  */
#line 382 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p));   }
#line 2797 "parser.tab.c"
    break;

  case 156: /* declarator: direct-declarator  */
#line 383 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2803 "parser.tab.c"
    break;

  case 157: /* direct-declarator: IDENT  */
#line 386 "parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2809 "parser.tab.c"
    break;

  case 158: /* direct-declarator: '(' declarator ')'  */
#line 387 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2815 "parser.tab.c"
    break;

  case 159: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 388 "parser.y"
                                                                                { }
#line 2821 "parser.tab.c"
    break;

  case 160: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 389 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2827 "parser.tab.c"
    break;

  case 161: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 390 "parser.y"
                                                         {}
#line 2833 "parser.tab.c"
    break;

  case 162: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 391 "parser.y"
                                                                                     {}
#line 2839 "parser.tab.c"
    break;

  case 163: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 392 "parser.y"
                                                                  {}
#line 2845 "parser.tab.c"
    break;

  case 164: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 393 "parser.y"
                                                                                     {}
#line 2851 "parser.tab.c"
    break;

  case 165: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 394 "parser.y"
                                                             { }
#line 2857 "parser.tab.c"
    break;

  case 166: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 395 "parser.y"
                                          { /*  */ }
#line 2863 "parser.tab.c"
    break;

  case 167: /* direct-declarator: direct-declarator '[' ']'  */
#line 396 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2869 "parser.tab.c"
    break;

  case 168: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 397 "parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));  }
#line 2875 "parser.tab.c"
    break;

  case 169: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 398 "parser.y"
                                                    { }
#line 2881 "parser.tab.c"
    break;

  case 170: /* direct-declarator: direct-declarator '(' ')'  */
#line 399 "parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL)); }
#line 2887 "parser.tab.c"
    break;

  case 171: /* pointer: '*'  */
#line 402 "parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2893 "parser.tab.c"
    break;

  case 172: /* pointer: '*' type-qualifier-list  */
#line 403 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2899 "parser.tab.c"
    break;

  case 173: /* pointer: '*' type-qualifier-list pointer  */
#line 404 "parser.y"
                                          {}
#line 2905 "parser.tab.c"
    break;

  case 174: /* pointer: '*' pointer  */
#line 405 "parser.y"
                      { struct astnode *temp = newType(AST_NODE_TYPE_POINTER,  0);  temp->ptr.next = (yyvsp[0].astnode_p); (yyval.astnode_p) = temp; }
#line 2911 "parser.tab.c"
    break;

  case 175: /* type-qualifier-list: type-qualifier  */
#line 408 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2917 "parser.tab.c"
    break;

  case 176: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 409 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2923 "parser.tab.c"
    break;

  case 177: /* parameter-type-list: parameter-list  */
#line 412 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2929 "parser.tab.c"
    break;

  case 179: /* parameter-list: parameter-declaration  */
#line 416 "parser.y"
                                          { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 2935 "parser.tab.c"
    break;

  case 180: /* parameter-list: parameter-list ',' parameter-declaration  */
#line 417 "parser.y"
                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2941 "parser.tab.c"
    break;

  case 181: /* parameter-declaration: declaration-specifiers declarator  */
#line 420 "parser.y"
                                                             { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p)); }
#line 2947 "parser.tab.c"
    break;

  case 182: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 421 "parser.y"
                                                     { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p));  }
#line 2953 "parser.tab.c"
    break;

  case 183: /* parameter-declaration: declaration-specifiers  */
#line 422 "parser.y"
                                 { (yyval.astnode_p) = newDeclaration(AST_NODE_TYPE_DECLARATION, NULL, (yyvsp[0].astnode_p)); }
#line 2959 "parser.tab.c"
    break;

  case 184: /* identifier-list: IDENT  */
#line 425 "parser.y"
                           { }
#line 2965 "parser.tab.c"
    break;

  case 185: /* identifier-list: identifier-list ',' IDENT  */
#line 426 "parser.y"
                                    { }
#line 2971 "parser.tab.c"
    break;

  case 186: /* type-name: specifier-qualifier-list  */
#line 430 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2977 "parser.tab.c"
    break;

  case 188: /* abstract-declarator: pointer  */
#line 434 "parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 2983 "parser.tab.c"
    break;

  case 189: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 435 "parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 2989 "parser.tab.c"
    break;

  case 190: /* abstract-declarator: direct-abstract-declarator  */
#line 436 "parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2995 "parser.tab.c"
    break;

  case 191: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 439 "parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 3001 "parser.tab.c"
    break;

  case 192: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 440 "parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 3007 "parser.tab.c"
    break;

  case 193: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 441 "parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 3013 "parser.tab.c"
    break;

  case 194: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 442 "parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 3019 "parser.tab.c"
    break;

  case 195: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 443 "parser.y"
                                                 {   }
#line 3025 "parser.tab.c"
    break;

  case 196: /* direct-abstract-declarator: '[' '*' ']'  */
#line 444 "parser.y"
                      {  }
#line 3031 "parser.tab.c"
    break;

  case 197: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 445 "parser.y"
                                                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));  }
#line 3037 "parser.tab.c"
    break;

  case 198: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 446 "parser.y"
                                      { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, NULL);  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyval.astnode_p),  newFunctDecl((yyvsp[-1].astnode_p)));}
#line 3043 "parser.tab.c"
    break;

  case 199: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 447 "parser.y"
                                             { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL));  }
#line 3049 "parser.tab.c"
    break;


#line 3053 "parser.tab.c"

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

#line 477 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
