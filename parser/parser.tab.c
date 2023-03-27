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

    // keep track of current scope, initially at global scope
    struct symbtab *current_scope;
    struct astnode *cur_struct;

#line 95 "parser.tab.c"

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
  YYSYMBOL_130_struct_or_union = 130,      /* struct-or-union  */
  YYSYMBOL_131_struct_declaration_list = 131, /* struct-declaration-list  */
  YYSYMBOL_132_struct_declaration = 132,   /* struct-declaration  */
  YYSYMBOL_133_specifier_qualifier_list = 133, /* specifier-qualifier-list  */
  YYSYMBOL_134_struct_declarator_list = 134, /* struct-declarator-list  */
  YYSYMBOL_135_struct_declarator = 135,    /* struct-declarator  */
  YYSYMBOL_136_enum_specifier = 136,       /* enum-specifier  */
  YYSYMBOL_137_enumerator_list = 137,      /* enumerator-list  */
  YYSYMBOL_enumerator = 138,               /* enumerator  */
  YYSYMBOL_139_type_qualifier = 139,       /* type-qualifier  */
  YYSYMBOL_140_function_specifier = 140,   /* function-specifier  */
  YYSYMBOL_declarator = 141,               /* declarator  */
  YYSYMBOL_142_direct_declarator = 142,    /* direct-declarator  */
  YYSYMBOL_pointer = 143,                  /* pointer  */
  YYSYMBOL_144_type_qualifier_list = 144,  /* type-qualifier-list  */
  YYSYMBOL_145_parameter_type_list = 145,  /* parameter-type-list  */
  YYSYMBOL_146_parameter_list = 146,       /* parameter-list  */
  YYSYMBOL_147_parameter_declaration = 147, /* parameter-declaration  */
  YYSYMBOL_148_identifier_list = 148,      /* identifier-list  */
  YYSYMBOL_149_type_name = 149,            /* type-name  */
  YYSYMBOL_150_abstract_declarator = 150,  /* abstract-declarator  */
  YYSYMBOL_151_direct_abstract_declarator = 151, /* direct-abstract-declarator  */
  YYSYMBOL_initializer = 152,              /* initializer  */
  YYSYMBOL_153_initializer_list = 153,     /* initializer-list  */
  YYSYMBOL_designation = 154,              /* designation  */
  YYSYMBOL_155_designator_list = 155,      /* designator-list  */
  YYSYMBOL_designator = 156                /* designator  */
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
#define YYLAST   1095

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

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
       0,    80,    80,    81,    84,    85,    87,    87,    96,   101,
      94,   105,   106,   109,   110,   112,   113,   117,   118,   119,
     122,   123,   126,   127,   128,   129,   130,   131,   132,   133,
     136,   137,   141,   142,   143,   144,   145,   148,   149,   150,
     151,   152,   153,   155,   156,   160,   161,   162,   163,   166,
     167,   168,   171,   172,   173,   176,   177,   178,   179,   180,
     183,   184,   185,   188,   189,   192,   193,   196,   197,   200,
     201,   204,   205,   208,   209,   212,   213,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   229,   230,
     236,   238,   241,   242,   243,   244,   245,   246,   247,   248,
     251,   252,   255,   256,   261,   262,   263,   264,   265,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   289,   291,   289,   292,   293,   296,   297,
     300,   303,   306,   309,   310,   311,   312,   314,   315,   317,
     318,   321,   328,   329,   330,   332,   333,   336,   337,   342,
     343,   344,   347,   351,   352,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   371,
     372,   373,   374,   377,   378,   381,   382,   385,   386,   389,
     390,   391,   394,   395,   399,   400,   403,   404,   405,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   424,   425,
     426,   429,   430,   431,   432,   435,   438,   439,   442,   443
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
  "type-specifier", "struct-or-union-specifier", "$@4", "$@5",
  "struct-or-union", "struct-declaration-list", "struct-declaration",
  "specifier-qualifier-list", "struct-declarator-list",
  "struct-declarator", "enum-specifier", "enumerator-list", "enumerator",
  "type-qualifier", "function-specifier", "declarator",
  "direct-declarator", "pointer", "type-qualifier-list",
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

#define YYPACT_NINF (-191)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-124)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     996,  -191,  -191,  -191,  -191,     6,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,   805,  -191,  -191,  -191,    16,
     996,   996,  -191,    13,  -191,   996,   996,   -46,   103,  -191,
    -191,  -191,     8,    47,  -191,   -42,  -191,   -45,   -58,    53,
    -191,  -191,    30,  1030,  -191,  -191,   103,    56,    38,  -191,
    -191,  -191,     8,    54,    47,  -191,   364,    84,   550,   392,
     -58,    92,  1030,   880,  -191,     4,  1030,   -13,   705,    14,
    -191,  -191,  -191,  -191,    71,  -191,  -191,  -191,  -191,   724,
     724,   108,  -191,  -191,  -191,  -191,  -191,  -191,   705,   310,
    -191,    59,   384,   705,  -191,    67,    81,   174,   143,   175,
      73,   119,   127,     1,   181,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,    20,   118,   114,  -191,   -11,   686,   122,  -191,
     132,   446,  1030,  -191,  -191,  -191,   705,   106,  -191,   121,
    -191,  -191,   103,  -191,  -191,  -191,  -191,   141,  -191,  -191,
     613,  -191,    80,   226,   705,  -191,    63,   364,    87,  -191,
     227,  -191,  -191,   230,   559,   705,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   705,  -191,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   705,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   291,   491,
     759,  -191,    25,  -191,   -17,  -191,   959,  -191,   232,   153,
     686,  -191,  -191,   705,   154,  -191,   155,  1030,  -191,     4,
    -191,   705,   705,    91,   -22,   161,  -191,   705,  -191,   160,
    -191,   208,  -191,  -191,  -191,  -191,  -191,  -191,    93,  -191,
     -34,  -191,  -191,  -191,  -191,    67,    67,    81,    81,   174,
     174,   174,   174,   143,   143,   119,   127,   175,   181,    -1,
      73,  -191,   291,  -191,  -191,   116,  -191,    16,   163,   164,
     165,   166,   -17,   921,   418,  -191,  -191,  -191,  -191,   167,
     168,  -191,  -191,   162,  -191,  -191,  -191,   842,    83,  -191,
    -191,  -191,  -191,  -191,  -191,   364,  -191,   705,  -191,   705,
     169,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   171,   170,
    -191,   173,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   107,   110,   149,   115,     0,   105,   114,   152,   112,
     113,   108,   150,   111,   116,   106,   128,   104,   129,   117,
     109,   151,   118,   119,   120,     0,     2,     5,     4,     0,
      93,    95,   121,     0,   122,    97,    99,   144,     0,     1,
       3,   155,   169,     0,    91,     0,   100,   102,   154,     0,
      92,    94,   127,     0,    96,    98,     0,   147,     0,   145,
     173,   172,   170,     0,     0,    90,     0,     0,     0,     0,
     153,     0,   134,     0,   130,     0,   136,     0,     0,     0,
     174,   171,   156,   101,   102,    17,    20,    19,    18,     0,
       0,     0,    39,    41,    42,    37,    38,    40,     0,     0,
      22,    32,    43,     0,    45,    49,    52,    55,    60,    67,
      71,    63,    65,    73,    69,    75,   198,   103,     8,     7,
     182,   168,   181,     0,   175,   177,     0,     0,    42,   165,
       0,     0,     0,   133,   126,   131,     0,     0,   137,   139,
     135,   142,     0,    43,   148,   143,   146,     0,    33,    34,
       0,    88,     0,     0,     0,   202,     0,     0,     0,   206,
       0,    28,    29,     0,     0,     0,    80,    81,    82,    78,
      79,    83,    84,    85,    86,    87,    77,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   186,   180,   188,   166,     0,   167,     0,     0,
       0,   164,   158,     0,    42,   159,     0,   124,   141,     0,
     132,     0,     0,     0,   184,     0,    21,     0,   209,     0,
     199,     0,   201,   205,   207,    25,    24,    27,     0,    30,
       0,    76,    46,    47,    48,    51,    50,    53,    54,    57,
      59,    56,    58,    61,    62,    64,    66,    68,    70,     0,
      72,    15,     9,    11,    14,     0,    13,     0,     0,     0,
      42,     0,   187,     0,     0,   176,   178,   183,   161,     0,
       0,   163,   157,     0,   138,   140,    36,     0,   186,   185,
      44,    89,   208,   200,   204,     0,    26,     0,    23,     0,
       0,    12,    16,   196,   189,   194,   192,   197,     0,    42,
     191,     0,   160,   162,   125,   203,    31,    74,    10,   195,
     193,   190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,   233,  -191,  -191,   192,  -191,  -191,  -191,     2,
    -191,  -191,  -191,  -191,   -56,  -191,   -49,    40,    23,    39,
      41,    69,    68,    74,    75,  -191,    76,   -75,   -40,  -191,
     -83,  -184,     0,  -191,   205,  -191,   -21,  -191,  -191,  -191,
    -191,   138,   -68,   -32,  -191,    61,  -191,   216,   -59,    50,
    -191,   -27,   -38,   -41,    -7,   -64,  -191,    78,  -191,  -191,
    -114,  -190,   -93,  -191,    42,  -191,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    26,    27,    67,   261,   198,   300,   262,   263,
     264,   100,   101,   238,   143,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   151,   177,
     223,    28,   122,    45,    46,    30,    31,    32,    71,   283,
      33,    73,    74,    75,   137,   138,    34,    58,    59,    35,
      36,    63,    48,    49,    62,   268,   124,   125,   126,   225,
     269,   204,   117,   156,   157,   158,   159
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    61,    47,   144,   123,   135,   155,    41,   203,    37,
     102,    70,   272,   102,   266,   152,    52,    57,   195,    41,
     146,    81,    68,    41,    69,    29,   116,    66,    41,   130,
      50,    51,    72,   148,   149,    54,    55,    84,    56,    -6,
     133,     3,   102,   102,   140,    64,    65,    42,   139,   298,
      41,    72,    72,   227,   178,    72,    41,    12,   287,   116,
     200,   218,   131,   273,   232,   274,   160,   161,   162,    21,
     207,   102,   141,    42,   142,   102,   208,    42,   266,   229,
     196,   202,   240,   146,    43,    42,   227,   209,   299,    42,
      38,   216,    60,   136,   102,   201,    43,    53,   272,   145,
     199,   102,   200,    76,    44,   199,    57,   200,   102,   102,
     289,    72,    80,   259,  -123,   265,    42,   116,   224,    60,
     210,   102,    76,    76,   239,    79,    76,    43,    78,    72,
     242,   243,   244,    43,   163,    82,   179,   241,   294,   164,
     102,   165,   102,    66,   102,   180,   285,   192,   230,   135,
     231,   182,   183,   181,   102,   186,   187,   102,   202,   233,
     271,   226,   153,   287,    70,   200,   102,   227,   118,   154,
     279,   102,   286,   280,   296,   102,   132,    60,   227,   265,
     297,    80,    76,   288,   184,   185,   193,   291,   150,   190,
     191,   116,   139,   219,   220,   194,    72,   197,   267,   205,
      76,   206,   315,   227,   302,   211,   102,   247,   248,   308,
     221,    85,    86,    87,    88,   212,    89,    90,   102,   188,
     189,   222,   245,   246,   317,   249,   250,   251,   252,   228,
     235,   253,   254,   236,   311,   277,   278,   281,   282,   102,
      84,   102,   290,   292,   303,   304,   288,   314,   305,   306,
     312,   313,   319,   320,   318,   116,   321,   316,    40,   119,
      80,    91,   267,   257,   301,   260,   255,    76,   256,    83,
     217,   258,    77,   295,    92,   234,    93,    94,    95,    96,
     284,    97,     0,   153,   276,     0,     0,     0,    98,     0,
     154,     0,    99,   293,    85,    86,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,     0,    89,    90,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,    91,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,    23,    24,    92,     0,    93,
      94,    95,    96,    91,    97,     0,     0,    85,    86,    87,
      88,    98,    89,    90,     0,   118,    92,     0,    93,    94,
      95,    96,     0,    97,     0,   153,     0,     0,     0,     0,
      98,     0,   154,     0,    99,    85,    86,    87,    88,     0,
      89,    90,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,     0,     0,     0,     0,    91,     0,     0,
       0,    85,    86,    87,    88,     3,    89,    90,     0,     0,
      92,     0,    93,    94,    95,    96,     0,    97,     0,     0,
       0,    12,     0,     0,    98,    91,   127,     0,    99,    85,
      86,    87,    88,    21,    89,    90,   176,     0,    92,     0,
      93,   128,    95,    96,     0,    97,     0,     0,     0,     0,
       0,    91,    98,     0,     0,   129,     0,     0,     0,     3,
       0,     0,     0,     0,    92,     0,    93,   309,    95,    96,
       0,    97,     0,     0,    41,    12,     0,     0,    98,    91,
     213,   310,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,    92,     0,    93,   214,    95,    96,     0,    97,
       1,     0,     0,     2,     3,     0,    98,     0,     4,   215,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,   120,    22,    23,    24,     0,     0,     0,
      42,     0,    85,    86,    87,    88,     0,    89,    90,     0,
       0,   199,     0,   200,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,    21,    91,    22,    23,    24,    85,    86,    87,    88,
       0,    89,    90,     0,     0,    92,     0,    93,    94,    95,
      96,   121,    97,     0,     0,     0,     0,     0,     0,    98,
     237,     0,     0,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,    91,     0,    16,     0,
       0,    18,    19,    20,    21,     0,    22,    23,    24,    92,
       0,    93,    94,    95,    96,     0,    97,     0,     0,    85,
      86,    87,    88,    98,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,    85,    86,    87,
      88,     0,    89,    90,     0,    12,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,    92,     0,    93,    94,    95,    96,    91,    97,
       0,     0,    85,    86,    87,    88,    98,    89,    90,     0,
       0,    92,     0,    93,    94,    95,    96,   147,    97,     0,
       0,     0,     0,     0,     0,    98,     0,     0,     0,     0,
      92,     0,    93,    94,    95,    96,     0,    97,     0,     0,
       0,     0,     0,     0,    98,    39,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,   270,    95,
      96,     0,    97,     0,     1,     0,     0,     2,     3,    98,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,    23,
      24,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,    17,
      18,    19,    20,    21,     0,    22,    23,    24,     0,     0,
       0,    42,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,   287,     0,   200,     0,     9,    10,     0,    12,
       0,    13,    14,     0,     0,    16,     0,     0,    18,    19,
      20,    21,     0,    22,    23,    24,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,   134,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    16,   275,    17,    18,
      19,    20,    21,     0,    22,    23,    24,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,   307,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,    22,
      23,    24,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,     0,     0,    16,     0,     0,    18,    19,
      20,    21,     0,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    42,    29,    78,    68,    73,    99,     3,   122,     3,
      66,    49,   202,    69,   198,    98,     3,     3,    17,     3,
      79,    62,    80,     3,    82,    25,    66,    72,     3,    69,
      30,    31,    53,    89,    90,    35,    36,    64,    84,    84,
      72,    33,    98,    99,    76,    87,    88,    69,    75,    83,
       3,    72,    73,    87,   103,    76,     3,    49,    80,    99,
      82,   136,    69,    80,   157,    82,     7,     8,     9,    61,
      81,   127,    85,    69,    87,   131,    87,    69,   262,   154,
      79,   122,   165,   142,    80,    69,    87,   127,    89,    69,
      84,   131,    42,    89,   150,   122,    80,    84,   288,    85,
      80,   157,    82,    53,    88,    80,     3,    82,   164,   165,
     224,   132,    62,   196,    84,   198,    69,   157,   150,    69,
     127,   177,    72,    73,   164,    87,    76,    80,    72,   150,
     179,   180,   181,    80,    75,    81,    69,   177,   231,    80,
     196,    82,   198,    72,   200,    78,   221,    74,    85,   217,
      87,    70,    71,    86,   210,    12,    13,   213,   199,    72,
     200,    81,    75,    80,   202,    82,   222,    87,    84,    82,
     210,   227,    81,   213,    81,   231,    84,   127,    87,   262,
      87,   131,   132,   224,    10,    11,    67,   227,    80,    14,
      15,   231,   219,    87,    88,    68,   217,    16,   198,    81,
     150,    87,   295,    87,    88,    83,   262,   184,   185,   273,
      89,     3,     4,     5,     6,    83,     8,     9,   274,    76,
      77,    80,   182,   183,   299,   186,   187,   188,   189,     3,
       3,   190,   191,     3,   274,     3,    83,    83,    83,   295,
     267,   297,    81,    83,    81,    81,   287,    85,    83,    83,
      83,    83,    81,    83,    85,   295,    83,   297,    25,    67,
     210,    53,   262,   194,   262,   197,   192,   217,   193,    64,
     132,   195,    56,   231,    66,   158,    68,    69,    70,    71,
     219,    73,    -1,    75,   206,    -1,    -1,    -1,    80,    -1,
      82,    -1,    84,    85,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    53,    73,    -1,    -1,     3,     4,     5,
       6,    80,     8,     9,    -1,    84,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    84,     3,     4,     5,     6,    -1,
       8,     9,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,     3,     4,     5,     6,    33,     8,     9,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    49,    -1,    -1,    80,    53,    54,    -1,    84,     3,
       4,     5,     6,    61,     8,     9,    72,    -1,    66,    -1,
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
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    69,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      -1,    41,    80,    -1,    82,    -1,    46,    47,    -1,    49,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    85,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    18,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    29,    -1,
      -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    81,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    29,    -1,    -1,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    32,    33,    37,    39,    40,    41,    45,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    64,    65,    91,    92,    93,   121,   122,
     125,   126,   127,   130,   136,   139,   140,     3,    84,     0,
      92,     3,    69,    80,    88,   123,   124,   141,   142,   143,
     122,   122,     3,    84,   122,   122,    84,     3,   137,   138,
     139,   143,   144,   141,    87,    88,    72,    94,    80,    82,
     142,   128,   126,   131,   132,   133,   139,   137,    72,    87,
     139,   143,    81,   124,   141,     3,     4,     5,     6,     8,
       9,    53,    66,    68,    69,    70,    71,    73,    80,    84,
     101,   102,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   152,    84,    95,
       3,    81,   122,   145,   146,   147,   148,    54,    69,    83,
     118,   144,    84,   133,    85,   132,    89,   134,   135,   141,
     133,    85,    87,   104,   117,    85,   138,    53,   104,   104,
      80,   118,   120,    75,    82,   152,   153,   154,   155,   156,
       7,     8,     9,    75,    80,    82,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    72,   119,   106,    69,
      78,    86,    70,    71,    10,    11,    12,    13,    76,    77,
      14,    15,    74,    67,    68,    17,    79,    16,    96,    80,
      82,   141,   143,   150,   151,    81,    87,    81,    87,   118,
     144,    83,    83,    54,    69,    83,   118,   131,   117,    87,
      88,    89,    80,   120,   133,   149,    81,    87,     3,   117,
      85,    87,   152,    72,   156,     3,     3,    81,   103,   118,
     120,   118,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   113,   114,   111,   116,   120,
     112,    95,    98,    99,   100,   120,   121,   122,   145,   150,
      69,   118,   151,    80,    82,    18,   147,     3,    83,   118,
     118,    83,    83,   129,   135,   117,    81,    80,   143,   150,
      81,   118,    83,    85,   152,   154,    81,    87,    83,    89,
      97,    99,    88,    81,    81,    83,    83,    81,   145,    69,
      83,   118,    83,    83,    85,   152,   118,   117,    85,    81,
      83,    83
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
     126,   126,   126,   128,   129,   127,   127,   127,   130,   130,
     131,   131,   132,   133,   133,   133,   133,   134,   134,   135,
     135,   135,   136,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   154,   155,   155,   156,   156
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
       1,     1,     1,     0,     0,     7,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       3,     2,     5,     5,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     4,     4,
       6,     5,     6,     5,     4,     3,     4,     4,     3,     1,
       2,     3,     2,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     2,     1,     2,     1,     3,
       4,     3,     3,     4,     3,     4,     3,     3,     1,     3,
       4,     2,     1,     4,     3,     2,     1,     2,     3,     2
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
#line 80 "parser.y"
                             { }
#line 1918 "parser.tab.c"
    break;

  case 3: /* start: start declaration_or_fndef  */
#line 81 "parser.y"
                                  { }
#line 1924 "parser.tab.c"
    break;

  case 4: /* declaration_or_fndef: declaration  */
#line 84 "parser.y"
                                  { }
#line 1930 "parser.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 87 "parser.y"
                                                       { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-1].astnode_p), insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)), lineno, filename_buf, current_scope, NULL);   
                                                          isFunc = 1;}
#line 1938 "parser.tab.c"
    break;

  case 7: /* function_definition: declaration-specifiers declarator $@1 compound_statement  */
#line 90 "parser.y"
                                                                            { }
#line 1944 "parser.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 96 "parser.y"
                    { if(isFunc) {current_scope = symbtab_push(SCOPE_FUNCTION, current_scope, lineno, filename_buf);} 
                        else { current_scope = symbtab_push(SCOPE_BLOCK, current_scope, lineno, filename_buf);}
                        isFunc = 0;
                    }
#line 1953 "parser.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 101 "parser.y"
                    {  current_scope = symbtab_pop(current_scope); }
#line 1959 "parser.tab.c"
    break;

  case 10: /* compound_statement: '{' $@2 decl_or_stmt_list $@3 '}'  */
#line 101 "parser.y"
                                                                         {  }
#line 1965 "parser.tab.c"
    break;

  case 11: /* decl_or_stmt_list: decl_or_stmt  */
#line 105 "parser.y"
                                { }
#line 1971 "parser.tab.c"
    break;

  case 12: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 106 "parser.y"
                                          { }
#line 1977 "parser.tab.c"
    break;

  case 13: /* decl_or_stmt: declaration  */
#line 109 "parser.y"
                    {  }
#line 1983 "parser.tab.c"
    break;

  case 16: /* stmt: expression ';'  */
#line 113 "parser.y"
                     {  }
#line 1989 "parser.tab.c"
    break;

  case 17: /* primary-expression: IDENT  */
#line 117 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1995 "parser.tab.c"
    break;

  case 18: /* primary-expression: NUMBER  */
#line 118 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 2001 "parser.tab.c"
    break;

  case 19: /* primary-expression: STRING  */
#line 119 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 2009 "parser.tab.c"
    break;

  case 20: /* primary-expression: CHARLIT  */
#line 122 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 2015 "parser.tab.c"
    break;

  case 21: /* primary-expression: '(' expression ')'  */
#line 123 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2021 "parser.tab.c"
    break;

  case 22: /* postfix-expression: primary-expression  */
#line 126 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2027 "parser.tab.c"
    break;

  case 23: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 127 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 2033 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression '.' IDENT  */
#line 128 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 2039 "parser.tab.c"
    break;

  case 25: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 129 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2045 "parser.tab.c"
    break;

  case 26: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 130 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2051 "parser.tab.c"
    break;

  case 27: /* postfix-expression: postfix-expression '(' ')'  */
#line 131 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2057 "parser.tab.c"
    break;

  case 28: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 132 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2063 "parser.tab.c"
    break;

  case 29: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 133 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2069 "parser.tab.c"
    break;

  case 30: /* expression-list: assignment-expression  */
#line 136 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2075 "parser.tab.c"
    break;

  case 31: /* expression-list: expression-list ',' assignment-expression  */
#line 137 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2081 "parser.tab.c"
    break;

  case 32: /* unary-expression: postfix-expression  */
#line 141 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2087 "parser.tab.c"
    break;

  case 33: /* unary-expression: PLUSPLUS unary-expression  */
#line 142 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2093 "parser.tab.c"
    break;

  case 34: /* unary-expression: MINUSMINUS unary-expression  */
#line 143 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2099 "parser.tab.c"
    break;

  case 35: /* unary-expression: unary-operator cast-expression  */
#line 144 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2105 "parser.tab.c"
    break;

  case 36: /* unary-expression: SIZEOF '(' expression ')'  */
#line 145 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2111 "parser.tab.c"
    break;

  case 37: /* unary-operator: '-'  */
#line 148 "parser.y"
                    { (yyval.op) = '-'; }
#line 2117 "parser.tab.c"
    break;

  case 38: /* unary-operator: '+'  */
#line 149 "parser.y"
                      { (yyval.op) = '+';  }
#line 2123 "parser.tab.c"
    break;

  case 39: /* unary-operator: '!'  */
#line 150 "parser.y"
                      {(yyval.op) = '!'; }
#line 2129 "parser.tab.c"
    break;

  case 40: /* unary-operator: '~'  */
#line 151 "parser.y"
                      {(yyval.op) = '~'; }
#line 2135 "parser.tab.c"
    break;

  case 41: /* unary-operator: '&'  */
#line 152 "parser.y"
                      {(yyval.op) = '&'; }
#line 2141 "parser.tab.c"
    break;

  case 42: /* unary-operator: '*'  */
#line 153 "parser.y"
                      {(yyval.op) = '*'; }
#line 2147 "parser.tab.c"
    break;

  case 43: /* cast-expression: unary-expression  */
#line 155 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2153 "parser.tab.c"
    break;

  case 44: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 156 "parser.y"
                                          { }
#line 2159 "parser.tab.c"
    break;

  case 45: /* mult-expression: cast-expression  */
#line 160 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2165 "parser.tab.c"
    break;

  case 46: /* mult-expression: mult-expression '*' cast-expression  */
#line 161 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2171 "parser.tab.c"
    break;

  case 47: /* mult-expression: mult-expression '/' cast-expression  */
#line 162 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2177 "parser.tab.c"
    break;

  case 48: /* mult-expression: mult-expression '%' cast-expression  */
#line 163 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2183 "parser.tab.c"
    break;

  case 49: /* add-expression: mult-expression  */
#line 166 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2189 "parser.tab.c"
    break;

  case 50: /* add-expression: add-expression '+' mult-expression  */
#line 167 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2195 "parser.tab.c"
    break;

  case 51: /* add-expression: add-expression '-' mult-expression  */
#line 168 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2201 "parser.tab.c"
    break;

  case 52: /* shift-expression: add-expression  */
#line 171 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2207 "parser.tab.c"
    break;

  case 53: /* shift-expression: shift-expression SHL add-expression  */
#line 172 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2213 "parser.tab.c"
    break;

  case 54: /* shift-expression: shift-expression SHR add-expression  */
#line 173 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2219 "parser.tab.c"
    break;

  case 55: /* relational-expression: shift-expression  */
#line 176 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2225 "parser.tab.c"
    break;

  case 56: /* relational-expression: relational-expression '<' shift-expression  */
#line 177 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2231 "parser.tab.c"
    break;

  case 57: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 178 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2237 "parser.tab.c"
    break;

  case 58: /* relational-expression: relational-expression '>' shift-expression  */
#line 179 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2243 "parser.tab.c"
    break;

  case 59: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 180 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2249 "parser.tab.c"
    break;

  case 60: /* equality-expression: relational-expression  */
#line 183 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2255 "parser.tab.c"
    break;

  case 61: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 184 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2261 "parser.tab.c"
    break;

  case 62: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 185 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2267 "parser.tab.c"
    break;

  case 63: /* bitwise-or-expression: bitwise-xor-expression  */
#line 188 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2273 "parser.tab.c"
    break;

  case 64: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 189 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2279 "parser.tab.c"
    break;

  case 65: /* bitwise-xor-expression: bitwise-and-expression  */
#line 192 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2285 "parser.tab.c"
    break;

  case 66: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 193 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2291 "parser.tab.c"
    break;

  case 67: /* bitwise-and-expression: equality-expression  */
#line 196 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2297 "parser.tab.c"
    break;

  case 68: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 197 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2303 "parser.tab.c"
    break;

  case 69: /* logical-or-expression: logical-and-expression  */
#line 200 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2309 "parser.tab.c"
    break;

  case 70: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 201 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2315 "parser.tab.c"
    break;

  case 71: /* logical-and-expression: bitwise-or-expression  */
#line 204 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2321 "parser.tab.c"
    break;

  case 72: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 205 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2327 "parser.tab.c"
    break;

  case 73: /* conditional-expression: logical-or-expression  */
#line 208 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2333 "parser.tab.c"
    break;

  case 74: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 209 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2339 "parser.tab.c"
    break;

  case 75: /* assignment-expression: conditional-expression  */
#line 212 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2345 "parser.tab.c"
    break;

  case 76: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 213 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2351 "parser.tab.c"
    break;

  case 77: /* assignment-operator: '='  */
#line 217 "parser.y"
                         {(yyval.op) = '='; }
#line 2357 "parser.tab.c"
    break;

  case 78: /* assignment-operator: PLUSEQ  */
#line 218 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2363 "parser.tab.c"
    break;

  case 79: /* assignment-operator: MINUSEQ  */
#line 219 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2369 "parser.tab.c"
    break;

  case 80: /* assignment-operator: TIMESEQ  */
#line 220 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2375 "parser.tab.c"
    break;

  case 81: /* assignment-operator: DIVEQ  */
#line 221 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2381 "parser.tab.c"
    break;

  case 82: /* assignment-operator: MODEQ  */
#line 222 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2387 "parser.tab.c"
    break;

  case 83: /* assignment-operator: SHLEQ  */
#line 223 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2393 "parser.tab.c"
    break;

  case 84: /* assignment-operator: SHREQ  */
#line 224 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2399 "parser.tab.c"
    break;

  case 85: /* assignment-operator: ANDEQ  */
#line 225 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2405 "parser.tab.c"
    break;

  case 86: /* assignment-operator: OREQ  */
#line 226 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2411 "parser.tab.c"
    break;

  case 87: /* assignment-operator: XOREQ  */
#line 227 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2417 "parser.tab.c"
    break;

  case 88: /* expression: assignment-expression  */
#line 229 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2423 "parser.tab.c"
    break;

  case 89: /* expression: expression ',' assignment-expression  */
#line 230 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2429 "parser.tab.c"
    break;

  case 90: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 236 "parser.y"
                                                             {  if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, current_scope, NULL);  }
#line 2436 "parser.tab.c"
    break;

  case 91: /* declaration: declaration-specifiers ';'  */
#line 238 "parser.y"
                                  {  (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 2442 "parser.tab.c"
    break;

  case 92: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 241 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2448 "parser.tab.c"
    break;

  case 93: /* declaration-specifiers: storage-class-specifier  */
#line 242 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2454 "parser.tab.c"
    break;

  case 94: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 243 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2460 "parser.tab.c"
    break;

  case 95: /* declaration-specifiers: type-specifier  */
#line 244 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2466 "parser.tab.c"
    break;

  case 96: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 245 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2472 "parser.tab.c"
    break;

  case 97: /* declaration-specifiers: type-qualifier  */
#line 246 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2478 "parser.tab.c"
    break;

  case 98: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 247 "parser.y"
                                                { }
#line 2484 "parser.tab.c"
    break;

  case 99: /* declaration-specifiers: function-specifier  */
#line 248 "parser.y"
                         { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
#line 2490 "parser.tab.c"
    break;

  case 100: /* init-declarator-list: init-declarator  */
#line 251 "parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 2496 "parser.tab.c"
    break;

  case 101: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 252 "parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2502 "parser.tab.c"
    break;

  case 102: /* init-declarator: declarator  */
#line 255 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2508 "parser.tab.c"
    break;

  case 103: /* init-declarator: declarator '=' initializer  */
#line 256 "parser.y"
                                 {/* do not have to do yet */ }
#line 2514 "parser.tab.c"
    break;

  case 104: /* storage-class-specifier: TYPEDEF  */
#line 261 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2520 "parser.tab.c"
    break;

  case 105: /* storage-class-specifier: EXTERN  */
#line 262 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2526 "parser.tab.c"
    break;

  case 106: /* storage-class-specifier: STATIC  */
#line 263 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2532 "parser.tab.c"
    break;

  case 107: /* storage-class-specifier: AUTO  */
#line 264 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2538 "parser.tab.c"
    break;

  case 108: /* storage-class-specifier: REGISTER  */
#line 265 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2544 "parser.tab.c"
    break;

  case 109: /* type-specifier: VOID  */
#line 270 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2550 "parser.tab.c"
    break;

  case 110: /* type-specifier: CHAR  */
#line 271 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2556 "parser.tab.c"
    break;

  case 111: /* type-specifier: SHORT  */
#line 272 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2562 "parser.tab.c"
    break;

  case 112: /* type-specifier: INT  */
#line 273 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2568 "parser.tab.c"
    break;

  case 113: /* type-specifier: LONG  */
#line 274 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2574 "parser.tab.c"
    break;

  case 114: /* type-specifier: FLOAT  */
#line 275 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2580 "parser.tab.c"
    break;

  case 115: /* type-specifier: DOUBLE  */
#line 276 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2586 "parser.tab.c"
    break;

  case 116: /* type-specifier: SIGNED  */
#line 277 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2592 "parser.tab.c"
    break;

  case 117: /* type-specifier: UNSIGNED  */
#line 278 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2598 "parser.tab.c"
    break;

  case 118: /* type-specifier: _BOOL  */
#line 279 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2604 "parser.tab.c"
    break;

  case 119: /* type-specifier: _COMPLEX  */
#line 280 "parser.y"
                            { }
#line 2610 "parser.tab.c"
    break;

  case 120: /* type-specifier: _IMAGINARY  */
#line 281 "parser.y"
                           { }
#line 2616 "parser.tab.c"
    break;

  case 121: /* type-specifier: struct-or-union-specifier  */
#line 282 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2622 "parser.tab.c"
    break;

  case 123: /* $@4: %empty  */
#line 289 "parser.y"
                                                 {                  
    if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf); }
        cur_struct = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), symbtab_init(SCOPE_STRUCT_UNION, lineno, filename_buf), filename_buf , lineno);  define_struct(cur_struct, current_scope, lineno,  filename_buf, cur_struct->structunion.name); }
#line 2630 "parser.tab.c"
    break;

  case 124: /* $@5: %empty  */
#line 291 "parser.y"
                                                                                                                                                                                                                                                         {  cur_struct->structunion.is_complete = 1; }
#line 2636 "parser.tab.c"
    break;

  case 125: /* struct-or-union-specifier: struct-or-union IDENT $@4 '{' struct-declaration-list $@5 '}'  */
#line 291 "parser.y"
                                                                                                                                                                                                                                                                                                           {(yyval.astnode_p) = cur_struct; }
#line 2642 "parser.tab.c"
    break;

  case 126: /* struct-or-union-specifier: struct-or-union '{' struct-declaration-list '}'  */
#line 292 "parser.y"
                                                                            {  }
#line 2648 "parser.tab.c"
    break;

  case 127: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 293 "parser.y"
                                                 { (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL, filename_buf, lineno);   }
#line 2654 "parser.tab.c"
    break;

  case 128: /* struct-or-union: STRUCT  */
#line 296 "parser.y"
                        { (yyval.op) = STRUCT; }
#line 2660 "parser.tab.c"
    break;

  case 129: /* struct-or-union: UNION  */
#line 297 "parser.y"
                        { (yyval.op) =  UNION; }
#line 2666 "parser.tab.c"
    break;

  case 130: /* struct-declaration-list: struct-declaration  */
#line 300 "parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2674 "parser.tab.c"
    break;

  case 132: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 306 "parser.y"
                                                                        { symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, cur_struct->structunion.minitable, current_scope); }
#line 2680 "parser.tab.c"
    break;

  case 133: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 309 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2686 "parser.tab.c"
    break;

  case 134: /* specifier-qualifier-list: type-specifier  */
#line 310 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2692 "parser.tab.c"
    break;

  case 135: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 311 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2698 "parser.tab.c"
    break;

  case 136: /* specifier-qualifier-list: type-qualifier  */
#line 312 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2704 "parser.tab.c"
    break;

  case 137: /* struct-declarator-list: struct-declarator  */
#line 314 "parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2710 "parser.tab.c"
    break;

  case 138: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 315 "parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2716 "parser.tab.c"
    break;

  case 139: /* struct-declarator: declarator  */
#line 317 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2722 "parser.tab.c"
    break;

  case 140: /* struct-declarator: declarator ':' conditional-expression  */
#line 318 "parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2730 "parser.tab.c"
    break;

  case 141: /* struct-declarator: ':' conditional-expression  */
#line 321 "parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2738 "parser.tab.c"
    break;

  case 149: /* type-qualifier: CONST  */
#line 342 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2744 "parser.tab.c"
    break;

  case 150: /* type-qualifier: RESTRICT  */
#line 343 "parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2750 "parser.tab.c"
    break;

  case 151: /* type-qualifier: VOLATILE  */
#line 344 "parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2756 "parser.tab.c"
    break;

  case 153: /* declarator: pointer direct-declarator  */
#line 351 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p));   }
#line 2762 "parser.tab.c"
    break;

  case 154: /* declarator: direct-declarator  */
#line 352 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2768 "parser.tab.c"
    break;

  case 155: /* direct-declarator: IDENT  */
#line 355 "parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2774 "parser.tab.c"
    break;

  case 156: /* direct-declarator: '(' declarator ')'  */
#line 356 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2780 "parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 357 "parser.y"
                                                                                { }
#line 2786 "parser.tab.c"
    break;

  case 158: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 358 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2792 "parser.tab.c"
    break;

  case 159: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 359 "parser.y"
                                                         {}
#line 2798 "parser.tab.c"
    break;

  case 160: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 360 "parser.y"
                                                                                     {}
#line 2804 "parser.tab.c"
    break;

  case 161: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 361 "parser.y"
                                                                  {}
#line 2810 "parser.tab.c"
    break;

  case 162: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 362 "parser.y"
                                                                                     {}
#line 2816 "parser.tab.c"
    break;

  case 163: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 363 "parser.y"
                                                             { }
#line 2822 "parser.tab.c"
    break;

  case 164: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 364 "parser.y"
                                          { /*  */ }
#line 2828 "parser.tab.c"
    break;

  case 165: /* direct-declarator: direct-declarator '[' ']'  */
#line 365 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2834 "parser.tab.c"
    break;

  case 166: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 366 "parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl(NULL)); }
#line 2840 "parser.tab.c"
    break;

  case 167: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 367 "parser.y"
                                                    { }
#line 2846 "parser.tab.c"
    break;

  case 168: /* direct-declarator: direct-declarator '(' ')'  */
#line 368 "parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL)); }
#line 2852 "parser.tab.c"
    break;

  case 169: /* pointer: '*'  */
#line 371 "parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2858 "parser.tab.c"
    break;

  case 170: /* pointer: '*' type-qualifier-list  */
#line 372 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2864 "parser.tab.c"
    break;

  case 171: /* pointer: '*' type-qualifier-list pointer  */
#line 373 "parser.y"
                                          {}
#line 2870 "parser.tab.c"
    break;

  case 172: /* pointer: '*' pointer  */
#line 374 "parser.y"
                      { struct astnode *temp = newType(AST_NODE_TYPE_POINTER,  0);  temp->ptr.next = (yyvsp[0].astnode_p); (yyval.astnode_p) = temp; }
#line 2876 "parser.tab.c"
    break;

  case 173: /* type-qualifier-list: type-qualifier  */
#line 377 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2882 "parser.tab.c"
    break;

  case 174: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 378 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2888 "parser.tab.c"
    break;

  case 179: /* parameter-declaration: declaration-specifiers declarator  */
#line 389 "parser.y"
                                                             {}
#line 2894 "parser.tab.c"
    break;

  case 180: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 390 "parser.y"
                                                     {   }
#line 2900 "parser.tab.c"
    break;

  case 181: /* parameter-declaration: declaration-specifiers  */
#line 391 "parser.y"
                                 { }
#line 2906 "parser.tab.c"
    break;

  case 186: /* abstract-declarator: pointer  */
#line 403 "parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 2912 "parser.tab.c"
    break;

  case 187: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 404 "parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 2918 "parser.tab.c"
    break;

  case 188: /* abstract-declarator: direct-abstract-declarator  */
#line 405 "parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2924 "parser.tab.c"
    break;

  case 189: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 408 "parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 2930 "parser.tab.c"
    break;

  case 190: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 409 "parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 2936 "parser.tab.c"
    break;

  case 191: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 410 "parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2942 "parser.tab.c"
    break;

  case 192: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 411 "parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 2948 "parser.tab.c"
    break;

  case 193: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 412 "parser.y"
                                                 {   }
#line 2954 "parser.tab.c"
    break;

  case 194: /* direct-abstract-declarator: '[' '*' ']'  */
#line 413 "parser.y"
                      {  }
#line 2960 "parser.tab.c"
    break;

  case 195: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 414 "parser.y"
                                                                 { }
#line 2966 "parser.tab.c"
    break;

  case 196: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 415 "parser.y"
                                      { }
#line 2972 "parser.tab.c"
    break;

  case 197: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 416 "parser.y"
                                             { }
#line 2978 "parser.tab.c"
    break;


#line 2982 "parser.tab.c"

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

#line 446 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
