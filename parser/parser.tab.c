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
    int yylex();
    void yyerror (char const *s) {
        fprintf (stderr, "%s\n", s);
 }
    // typedef union yylval YYSTYPE

    // line number and filename for debugging
    extern char filename_buf[256];
    extern int lineno;

    // keep track of current scope, initially at global scope
    struct symbtab *current_scope;

#line 92 "parser.tab.c"

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
  YYSYMBOL_95_2 = 95,                      /* $@2  */
  YYSYMBOL_compound_statement = 96,        /* compound_statement  */
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
  YYSYMBOL_129_struct_or_union = 129,      /* struct-or-union  */
  YYSYMBOL_130_struct_declaration_list = 130, /* struct-declaration-list  */
  YYSYMBOL_131_struct_declaration = 131,   /* struct-declaration  */
  YYSYMBOL_132_specifier_qualifier_list = 132, /* specifier-qualifier-list  */
  YYSYMBOL_133_struct_declarator_list = 133, /* struct-declarator-list  */
  YYSYMBOL_134_struct_declarator = 134,    /* struct-declarator  */
  YYSYMBOL_135_enum_specifier = 135,       /* enum-specifier  */
  YYSYMBOL_136_enumerator_list = 136,      /* enumerator-list  */
  YYSYMBOL_enumerator = 137,               /* enumerator  */
  YYSYMBOL_138_type_qualifier = 138,       /* type-qualifier  */
  YYSYMBOL_139_function_specifier = 139,   /* function-specifier  */
  YYSYMBOL_declarator = 140,               /* declarator  */
  YYSYMBOL_141_direct_declarator = 141,    /* direct-declarator  */
  YYSYMBOL_pointer = 142,                  /* pointer  */
  YYSYMBOL_143_type_qualifier_list = 143,  /* type-qualifier-list  */
  YYSYMBOL_144_parameter_type_list = 144,  /* parameter-type-list  */
  YYSYMBOL_145_parameter_list = 145,       /* parameter-list  */
  YYSYMBOL_146_parameter_declaration = 146, /* parameter-declaration  */
  YYSYMBOL_147_identifier_list = 147,      /* identifier-list  */
  YYSYMBOL_148_type_name = 148,            /* type-name  */
  YYSYMBOL_149_abstract_declarator = 149,  /* abstract-declarator  */
  YYSYMBOL_150_direct_abstract_declarator = 150, /* direct-abstract-declarator  */
  YYSYMBOL_initializer = 151,              /* initializer  */
  YYSYMBOL_152_initializer_list = 152,     /* initializer-list  */
  YYSYMBOL_designation = 153,              /* designation  */
  YYSYMBOL_154_designator_list = 154,      /* designator-list  */
  YYSYMBOL_designator = 155                /* designator  */
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
#define YYLAST   1156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  320

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
       0,    77,    77,    78,    79,    81,    81,    81,    85,    85,
      89,    90,    93,    94,    96,    97,   101,   102,   103,   106,
     107,   110,   111,   112,   113,   114,   115,   116,   117,   120,
     121,   125,   126,   127,   128,   129,   132,   133,   134,   135,
     136,   137,   139,   140,   144,   145,   146,   147,   150,   151,
     152,   155,   156,   157,   160,   161,   162,   163,   164,   167,
     168,   169,   172,   173,   176,   177,   180,   181,   184,   185,
     188,   189,   192,   193,   196,   197,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   213,   214,   220,
     221,   224,   225,   226,   227,   228,   229,   230,   231,   234,
     235,   238,   239,   243,   244,   245,   246,   247,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   271,   271,   272,   273,   276,   277,   280,   283,
     286,   289,   290,   291,   292,   294,   295,   297,   298,   301,
     308,   309,   310,   312,   313,   316,   317,   322,   323,   324,
     327,   331,   332,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   351,   352,   353,
     354,   357,   358,   361,   362,   365,   366,   369,   370,   371,
     374,   375,   379,   380,   383,   384,   385,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   404,   405,   406,   409,
     410,   411,   412,   415,   418,   419,   422,   423
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
  "start", "declaration_or_fndef", "function_definition", "$@1", "$@2",
  "compound_statement", "$@3", "decl_or_stmt_list", "decl_or_stmt", "stmt",
  "primary-expression", "postfix-expression", "expression-list",
  "unary-expression", "unary-operator", "cast-expression",
  "mult-expression", "add-expression", "shift-expression",
  "relational-expression", "equality-expression", "bitwise-or-expression",
  "bitwise-xor-expression", "bitwise-and-expression",
  "logical-or-expression", "logical-and-expression",
  "conditional-expression", "assignment-expression", "assignment-operator",
  "expression", "declaration", "declaration-specifiers",
  "init-declarator-list", "init-declarator", "storage-class-specifier",
  "type-specifier", "struct-or-union-specifier", "$@4", "struct-or-union",
  "struct-declaration-list", "struct-declaration",
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-123)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1057,  -189,  -189,  -189,  -189,     6,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,    32,  -189,  -189,  -189,    35,
    1057,  1057,  -189,    12,  -189,  1057,  1057,   -66,    41,  -189,
    -189,   120,    50,  -189,   -33,  -189,   -32,   -35,    19,  -189,
    -189,    30,  1091,  -189,  -189,    41,    31,   -62,  -189,  -189,
    -189,   120,     2,    50,  -189,   447,    45,   287,   481,   -35,
      59,  1091,   645,  -189,    17,  1091,    40,   804,     8,  -189,
    -189,  -189,  -189,    75,  -189,  -189,  -189,  -189,   823,   823,
      71,  -189,  -189,  -189,  -189,  -189,  -189,   804,   428,  -189,
     141,   421,   804,  -189,   -28,    -1,   146,   151,   172,    92,
     106,   102,    10,   163,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,    36,   101,   109,  -189,   -64,   785,   117,  -189,   118,
     520,  1091,  -189,  -189,  -189,   804,   107,  -189,   124,  -189,
    -189,    41,  -189,  -189,  -189,  -189,   134,  -189,  -189,   712,
    -189,   -20,   214,   804,  -189,    54,   447,    93,  -189,   215,
    -189,  -189,   217,   666,   804,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,   804,  -189,   804,   804,
     804,   804,   804,   804,   804,   804,   804,   804,   804,   804,
     804,   804,   804,   804,   804,   804,   804,   355,  -189,   599,
     858,  -189,    46,  -189,    98,  -189,  1020,  -189,   222,   143,
     785,  -189,  -189,   804,   155,  -189,   156,   941,  -189,    17,
    -189,   804,   804,    11,   -18,   148,  -189,   804,  -189,   160,
    -189,   301,  -189,  -189,  -189,  -189,  -189,  -189,    26,  -189,
     -15,  -189,  -189,  -189,  -189,   -28,   -28,    -1,    -1,   146,
     146,   146,   146,   151,   151,   106,   102,   172,   163,    33,
      92,  -189,   228,  -189,  -189,   111,  -189,    35,   164,   165,
     161,   166,    98,   982,   554,  -189,  -189,  -189,  -189,   167,
     168,  -189,  -189,  -189,  -189,  -189,  -189,   903,   103,  -189,
    -189,  -189,  -189,  -189,  -189,   447,  -189,   804,  -189,   804,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,   171,   170,
    -189,   176,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   106,   109,   147,   114,     0,   104,   113,   150,   111,
     112,   107,   148,   110,   115,   105,   126,   103,   127,   116,
     108,   149,   117,   118,   119,     0,     2,     4,     3,     0,
      92,    94,   120,     0,   121,    96,    98,   142,     0,     1,
     153,   167,     0,    90,     0,    99,   101,   152,     0,    91,
      93,   125,     0,    95,    97,     0,   145,     0,   143,   171,
     170,   168,     0,     0,    89,     0,     0,     0,     0,   151,
       0,   132,     0,   128,     0,   134,     0,     0,     0,   172,
     169,   154,   100,   101,    16,    19,    18,    17,     0,     0,
       0,    38,    40,    41,    36,    37,    39,     0,     0,    21,
      31,    42,     0,    44,    48,    51,    54,    59,    66,    70,
      62,    64,    72,    68,    74,   196,   102,     8,     6,   180,
     166,   179,     0,   173,   175,     0,     0,    41,   163,     0,
       0,     0,   131,   124,   129,     0,     0,   135,   137,   133,
     140,     0,    42,   146,   141,   144,     0,    32,    33,     0,
      87,     0,     0,     0,   200,     0,     0,     0,   204,     0,
      27,    28,     0,     0,     0,    79,    80,    81,    77,    78,
      82,    83,    84,    85,    86,    76,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,   177,   184,   178,   186,   164,     0,   165,     0,     0,
       0,   162,   156,     0,    41,   157,     0,     0,   139,     0,
     130,     0,     0,     0,   182,     0,    20,     0,   207,     0,
     197,     0,   199,   203,   205,    24,    23,    26,     0,    29,
       0,    75,    45,    46,    47,    50,    49,    52,    53,    56,
      58,    55,    57,    60,    61,    63,    65,    67,    69,     0,
      71,    14,     0,    10,    13,     0,    12,     0,     0,     0,
      41,     0,   185,     0,     0,   174,   176,   181,   159,     0,
       0,   161,   155,   123,   136,   138,    35,     0,   184,   183,
      43,    88,   206,   198,   202,     0,    25,     0,    22,     0,
       9,    11,    15,   194,   187,   192,   190,   195,     0,    41,
     189,     0,   158,   160,   201,    30,    73,   193,   191,   188
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,  -189,  -189,  -189,  -189,   182,  -189,  -189,    -8,
    -189,  -189,  -189,  -189,   -55,  -189,   -46,     9,    25,    18,
      22,    62,    67,    73,    74,  -189,    76,   -75,   -39,  -189,
     -85,   271,     0,  -189,   209,  -189,    13,  -189,  -189,  -189,
     147,   -65,   -47,  -189,    65,  -189,   240,   -59,     5,  -189,
     -26,   -42,   -40,   -52,   -63,  -189,    94,  -189,  -189,  -113,
    -188,   -93,  -189,    72,  -189,   145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    26,    27,    66,   198,   261,   197,   262,   263,
     264,    99,   100,   238,   142,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   150,   176,
     223,   266,   121,    44,    45,    30,    31,    32,    70,    33,
      72,    73,    74,   136,   137,    34,    57,    58,    35,    36,
      62,    47,    48,    61,   268,   123,   124,   125,   225,   269,
     204,   116,   155,   156,   157,   158
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    60,   143,    46,   122,   154,    69,   134,   203,    37,
     101,    56,   151,   101,   272,    51,   130,   207,    55,   145,
      40,    80,    40,   208,   132,    78,   115,   194,   139,   129,
      49,    50,    39,   147,   148,    53,    54,    83,    40,    40,
      65,   178,   101,   101,    56,    67,    59,    68,   138,    40,
     179,    41,    -5,    40,    63,    64,   177,    75,   180,   115,
     218,   226,   287,   232,   200,    71,    79,   227,   298,   181,
     182,   101,   227,    59,   210,   101,    75,    75,   229,   240,
      75,   202,   145,    81,    71,    71,    41,   209,    71,   195,
      38,   216,   286,   144,   101,   201,    52,    42,   227,    42,
     272,   101,   224,    77,    41,    41,   135,   296,   101,   101,
     259,   289,   265,   297,  -122,    42,   199,   115,   200,    41,
     227,   101,   299,    43,   239,   140,   199,   141,   200,   117,
      42,    59,   242,   243,   244,    79,    75,   241,   294,   230,
     101,   231,   101,   131,    71,   101,   285,    65,   159,   160,
     161,   149,   134,     3,    75,   101,   183,   184,   101,   202,
      69,   271,    71,   185,   186,   233,   191,   101,   152,    12,
     193,   279,   101,   192,   280,   153,   101,   265,   273,   196,
     274,    21,   205,   287,   288,   200,   189,   190,   291,    41,
     245,   246,   115,   138,   219,   220,   206,   267,   227,   302,
     211,   212,   314,   249,   250,   251,   252,   101,   247,   248,
     308,   253,   254,   221,   222,    79,   162,   228,   235,   101,
     236,   163,    75,   164,   316,   277,   278,   187,   188,   290,
      71,    84,    85,    86,    87,   311,    88,    89,   281,   282,
     101,    83,   101,   292,   305,   303,   304,   288,   118,   306,
     312,   313,   317,   318,   301,   257,   115,     1,   315,   319,
       2,     3,   267,   260,   255,     4,   256,     5,     6,     7,
     258,    28,    82,     8,     9,    10,    11,    12,   217,    13,
      14,    90,    15,    16,   284,    17,    18,    19,    20,    21,
     119,    22,    23,    24,    91,    76,    92,    93,    94,    95,
     276,    96,   234,   295,    84,    85,    86,    87,    97,    88,
      89,     0,   117,   300,     0,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
      22,    23,    24,     0,    90,     0,     0,     0,    84,    85,
      86,    87,     0,    88,    89,     0,     0,    91,   120,    92,
      93,    94,    95,     0,    96,     0,   152,     0,     0,     0,
       0,    97,     0,   153,     1,    98,   293,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,    90,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,    23,
      24,    91,     0,    92,    93,    94,    95,     0,    96,     0,
       0,    84,    85,    86,    87,    97,    88,    89,     0,   117,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
      84,    85,    86,    87,     0,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    84,    85,    86,    87,     0,    88,
      89,     0,     0,   175,    91,     0,    92,    93,    94,    95,
      90,    96,     0,   152,     0,     0,     0,     0,    97,     0,
     153,     0,    98,    91,     3,    92,    93,    94,    95,     0,
      96,     0,     0,    84,    85,    86,    87,    97,    88,    89,
      12,    98,     0,     0,    90,   126,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,    91,     0,    92,
     127,    94,    95,     3,    96,     0,     0,    84,    85,    86,
      87,    97,    88,    89,   128,     0,     0,     0,     0,    12,
       0,     0,     0,    90,   213,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,    91,     0,    92,   214,
      94,    95,     0,    96,     0,     0,     0,     0,     0,     0,
      97,     0,    40,   215,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,    92,   309,    94,    95,     0,    96,     1,     0,
       0,     2,     3,     0,    97,     0,     4,   310,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,    41,    84,
      85,    86,    87,     0,    88,    89,     0,     2,     3,   199,
       0,   200,     4,     0,     5,     0,     7,     0,     0,     0,
       0,     9,    10,     0,    12,     0,    13,    14,     0,     0,
      16,     0,     0,    18,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,    84,    85,    86,    87,    90,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,    91,     0,    92,    93,    94,    95,     0,    96,
       0,     0,     0,     0,     2,     3,    97,   237,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,    90,     0,    16,     0,     0,
      18,    19,    20,    21,     0,    22,    23,    24,    91,     0,
      92,    93,    94,    95,     0,    96,     0,     0,    84,    85,
      86,    87,    97,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
       0,    88,    89,     0,    12,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,    91,     0,    92,    93,    94,    95,    90,    96,     0,
       0,    84,    85,    86,    87,    97,    88,    89,     0,     0,
      91,     0,    92,    93,    94,    95,   146,    96,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,    91,
       0,    92,    93,    94,    95,     0,    96,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,     0,    92,   270,    94,    95,
       0,    96,     1,     0,     0,     2,     3,     0,    97,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,    41,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,   287,     0,   200,     0,     9,    10,     0,
      12,     0,    13,    14,     0,     0,    16,     0,     0,    18,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,   283,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,   275,    17,
      18,    19,    20,    21,     0,    22,    23,    24,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,   307,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,    21,     0,    22,    23,    24,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
      22,    23,    24,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     0,     9,    10,     0,
      12,     0,    13,    14,     0,     0,    16,     0,     0,    18,
      19,    20,    21,     0,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    41,    77,    29,    67,    98,    48,    72,   121,     3,
      65,     3,    97,    68,   202,     3,    68,    81,    84,    78,
       3,    61,     3,    87,    71,    87,    65,    17,    75,    68,
      30,    31,     0,    88,    89,    35,    36,    63,     3,     3,
      72,    69,    97,    98,     3,    80,    41,    82,    74,     3,
      78,    69,    84,     3,    87,    88,   102,    52,    86,    98,
     135,    81,    80,   156,    82,    52,    61,    87,    83,    70,
      71,   126,    87,    68,   126,   130,    71,    72,   153,   164,
      75,   121,   141,    81,    71,    72,    69,   126,    75,    79,
      84,   130,    81,    85,   149,   121,    84,    80,    87,    80,
     288,   156,   149,    72,    69,    69,    89,    81,   163,   164,
     195,   224,   197,    87,    84,    80,    80,   156,    82,    69,
      87,   176,    89,    88,   163,    85,    80,    87,    82,    84,
      80,   126,   178,   179,   180,   130,   131,   176,   231,    85,
     195,    87,   197,    84,   131,   200,   221,    72,     7,     8,
       9,    80,   217,    33,   149,   210,    10,    11,   213,   199,
     202,   200,   149,    12,    13,    72,    74,   222,    75,    49,
      68,   210,   227,    67,   213,    82,   231,   262,    80,    16,
      82,    61,    81,    80,   224,    82,    14,    15,   227,    69,
     181,   182,   231,   219,    87,    88,    87,   197,    87,    88,
      83,    83,   295,   185,   186,   187,   188,   262,   183,   184,
     273,   189,   190,    89,    80,   210,    75,     3,     3,   274,
       3,    80,   217,    82,   299,     3,    83,    76,    77,    81,
     217,     3,     4,     5,     6,   274,     8,     9,    83,    83,
     295,   267,   297,    83,    83,    81,    81,   287,    66,    83,
      83,    83,    81,    83,   262,   193,   295,    29,   297,    83,
      32,    33,   262,   196,   191,    37,   192,    39,    40,    41,
     194,     0,    63,    45,    46,    47,    48,    49,   131,    51,
      52,    53,    54,    55,   219,    57,    58,    59,    60,    61,
       3,    63,    64,    65,    66,    55,    68,    69,    70,    71,
     206,    73,   157,   231,     3,     4,     5,     6,    80,     8,
       9,    -1,    84,    85,    -1,    -1,    29,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    53,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    66,    81,    68,
      69,    70,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    80,    -1,    82,    29,    84,    85,    32,    33,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    -1,    73,    -1,
      -1,     3,     4,     5,     6,    80,     8,     9,    -1,    84,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    72,    66,    -1,    68,    69,    70,    71,
      53,    73,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    84,    66,    33,    68,    69,    70,    71,    -1,
      73,    -1,    -1,     3,     4,     5,     6,    80,     8,     9,
      49,    84,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    33,    73,    -1,    -1,     3,     4,     5,
       6,    80,     8,     9,    83,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,     3,    83,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    29,    -1,
      -1,    32,    33,    -1,    80,    -1,    37,    83,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    -1,    -1,    -1,    69,     3,
       4,     5,     6,    -1,     8,     9,    -1,    32,    33,    80,
      -1,    82,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    46,    47,    -1,    49,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    53,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    -1,    -1,    -1,    32,    33,    80,    81,    -1,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,
      -1,    49,    -1,    51,    52,    53,    -1,    55,    -1,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    -1,     3,     4,
       5,     6,    80,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    53,    73,    -1,
      -1,     3,     4,     5,     6,    80,     8,     9,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    53,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    29,    -1,    -1,    32,    33,    -1,    80,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      -1,    -1,    69,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    80,    -1,    82,    -1,    46,    47,    -1,
      49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    85,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    18,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    29,
      -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    81,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    29,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,
      49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    32,    33,    37,    39,    40,    41,    45,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    64,    65,    91,    92,    93,   121,   122,
     125,   126,   127,   129,   135,   138,   139,     3,    84,     0,
       3,    69,    80,    88,   123,   124,   140,   141,   142,   122,
     122,     3,    84,   122,   122,    84,     3,   136,   137,   138,
     142,   143,   140,    87,    88,    72,    94,    80,    82,   141,
     128,   126,   130,   131,   132,   138,   136,    72,    87,   138,
     142,    81,   124,   140,     3,     4,     5,     6,     8,     9,
      53,    66,    68,    69,    70,    71,    73,    80,    84,   101,
     102,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   151,    84,    96,     3,
      81,   122,   144,   145,   146,   147,    54,    69,    83,   118,
     143,    84,   132,    85,   131,    89,   133,   134,   140,   132,
      85,    87,   104,   117,    85,   137,    53,   104,   104,    80,
     118,   120,    75,    82,   151,   152,   153,   154,   155,     7,
       8,     9,    75,    80,    82,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    72,   119,   106,    69,    78,
      86,    70,    71,    10,    11,    12,    13,    76,    77,    14,
      15,    74,    67,    68,    17,    79,    16,    97,    95,    80,
      82,   140,   142,   149,   150,    81,    87,    81,    87,   118,
     143,    83,    83,    54,    69,    83,   118,   130,   117,    87,
      88,    89,    80,   120,   132,   148,    81,    87,     3,   117,
      85,    87,   151,    72,   155,     3,     3,    81,   103,   118,
     120,   118,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   113,   114,   111,   116,   120,
     112,    96,    98,    99,   100,   120,   121,   122,   144,   149,
      69,   118,   150,    80,    82,    18,   146,     3,    83,   118,
     118,    83,    83,    85,   134,   117,    81,    80,   142,   149,
      81,   118,    83,    85,   151,   153,    81,    87,    83,    89,
      85,    99,    88,    81,    81,    83,    83,    81,   144,    69,
      83,   118,    83,    83,   151,   118,   117,    81,    83,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    94,    95,    93,    97,    96,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   110,   110,   110,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   120,   120,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   128,   127,   127,   127,   129,   129,   130,   130,
     131,   132,   132,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   138,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   152,   152,   153,   154,   154,   155,   155
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     0,     5,     0,     4,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     1,     4,     3,     3,     4,     3,     2,     2,     1,
       3,     1,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     4,     2,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     3,     2,
       5,     5,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     4,     4,     6,     5,
       6,     5,     4,     3,     4,     4,     3,     1,     2,     3,
       2,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     2,     1,     3,     4,     3,
       3,     4,     3,     4,     3,     3,     1,     3,     4,     2,
       1,     4,     3,     2,     1,     2,     3,     2
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
  case 5: /* $@1: %empty  */
#line 81 "parser.y"
                                                       { printf("funct on"); }
#line 1923 "parser.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 81 "parser.y"
                                                                                                  { printf("funct off"); }
#line 1929 "parser.tab.c"
    break;

  case 7: /* function_definition: declaration-specifiers declarator $@1 compound_statement $@2  */
#line 81 "parser.y"
                                                                                                                           { }
#line 1935 "parser.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 85 "parser.y"
                        { printf("2"); }
#line 1941 "parser.tab.c"
    break;

  case 9: /* compound_statement: '{' $@3 decl_or_stmt_list '}'  */
#line 85 "parser.y"
                                                               {  }
#line 1947 "parser.tab.c"
    break;

  case 10: /* decl_or_stmt_list: decl_or_stmt  */
#line 89 "parser.y"
                                { }
#line 1953 "parser.tab.c"
    break;

  case 11: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 90 "parser.y"
                                          { }
#line 1959 "parser.tab.c"
    break;

  case 15: /* stmt: expression ';'  */
#line 97 "parser.y"
                     {  }
#line 1965 "parser.tab.c"
    break;

  case 16: /* primary-expression: IDENT  */
#line 101 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1971 "parser.tab.c"
    break;

  case 17: /* primary-expression: NUMBER  */
#line 102 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 1977 "parser.tab.c"
    break;

  case 18: /* primary-expression: STRING  */
#line 103 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 1985 "parser.tab.c"
    break;

  case 19: /* primary-expression: CHARLIT  */
#line 106 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 1991 "parser.tab.c"
    break;

  case 20: /* primary-expression: '(' expression ')'  */
#line 107 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 1997 "parser.tab.c"
    break;

  case 21: /* postfix-expression: primary-expression  */
#line 110 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2003 "parser.tab.c"
    break;

  case 22: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 111 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 2009 "parser.tab.c"
    break;

  case 23: /* postfix-expression: postfix-expression '.' IDENT  */
#line 112 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 2015 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 113 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2021 "parser.tab.c"
    break;

  case 25: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 114 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2027 "parser.tab.c"
    break;

  case 26: /* postfix-expression: postfix-expression '(' ')'  */
#line 115 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2033 "parser.tab.c"
    break;

  case 27: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 116 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2039 "parser.tab.c"
    break;

  case 28: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 117 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2045 "parser.tab.c"
    break;

  case 29: /* expression-list: assignment-expression  */
#line 120 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2051 "parser.tab.c"
    break;

  case 30: /* expression-list: expression-list ',' assignment-expression  */
#line 121 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2057 "parser.tab.c"
    break;

  case 31: /* unary-expression: postfix-expression  */
#line 125 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2063 "parser.tab.c"
    break;

  case 32: /* unary-expression: PLUSPLUS unary-expression  */
#line 126 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2069 "parser.tab.c"
    break;

  case 33: /* unary-expression: MINUSMINUS unary-expression  */
#line 127 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2075 "parser.tab.c"
    break;

  case 34: /* unary-expression: unary-operator cast-expression  */
#line 128 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2081 "parser.tab.c"
    break;

  case 35: /* unary-expression: SIZEOF '(' expression ')'  */
#line 129 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2087 "parser.tab.c"
    break;

  case 36: /* unary-operator: '-'  */
#line 132 "parser.y"
                    { (yyval.op) = '-'; }
#line 2093 "parser.tab.c"
    break;

  case 37: /* unary-operator: '+'  */
#line 133 "parser.y"
                      { (yyval.op) = '+';  }
#line 2099 "parser.tab.c"
    break;

  case 38: /* unary-operator: '!'  */
#line 134 "parser.y"
                      {(yyval.op) = '!'; }
#line 2105 "parser.tab.c"
    break;

  case 39: /* unary-operator: '~'  */
#line 135 "parser.y"
                      {(yyval.op) = '~'; }
#line 2111 "parser.tab.c"
    break;

  case 40: /* unary-operator: '&'  */
#line 136 "parser.y"
                      {(yyval.op) = '&'; }
#line 2117 "parser.tab.c"
    break;

  case 41: /* unary-operator: '*'  */
#line 137 "parser.y"
                      {(yyval.op) = '*'; }
#line 2123 "parser.tab.c"
    break;

  case 42: /* cast-expression: unary-expression  */
#line 139 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2129 "parser.tab.c"
    break;

  case 43: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 140 "parser.y"
                                          { }
#line 2135 "parser.tab.c"
    break;

  case 44: /* mult-expression: cast-expression  */
#line 144 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2141 "parser.tab.c"
    break;

  case 45: /* mult-expression: mult-expression '*' cast-expression  */
#line 145 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2147 "parser.tab.c"
    break;

  case 46: /* mult-expression: mult-expression '/' cast-expression  */
#line 146 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2153 "parser.tab.c"
    break;

  case 47: /* mult-expression: mult-expression '%' cast-expression  */
#line 147 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2159 "parser.tab.c"
    break;

  case 48: /* add-expression: mult-expression  */
#line 150 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2165 "parser.tab.c"
    break;

  case 49: /* add-expression: add-expression '+' mult-expression  */
#line 151 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2171 "parser.tab.c"
    break;

  case 50: /* add-expression: add-expression '-' mult-expression  */
#line 152 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2177 "parser.tab.c"
    break;

  case 51: /* shift-expression: add-expression  */
#line 155 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2183 "parser.tab.c"
    break;

  case 52: /* shift-expression: shift-expression SHL add-expression  */
#line 156 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2189 "parser.tab.c"
    break;

  case 53: /* shift-expression: shift-expression SHR add-expression  */
#line 157 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2195 "parser.tab.c"
    break;

  case 54: /* relational-expression: shift-expression  */
#line 160 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2201 "parser.tab.c"
    break;

  case 55: /* relational-expression: relational-expression '<' shift-expression  */
#line 161 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2207 "parser.tab.c"
    break;

  case 56: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 162 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2213 "parser.tab.c"
    break;

  case 57: /* relational-expression: relational-expression '>' shift-expression  */
#line 163 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2219 "parser.tab.c"
    break;

  case 58: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 164 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2225 "parser.tab.c"
    break;

  case 59: /* equality-expression: relational-expression  */
#line 167 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2231 "parser.tab.c"
    break;

  case 60: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 168 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2237 "parser.tab.c"
    break;

  case 61: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 169 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2243 "parser.tab.c"
    break;

  case 62: /* bitwise-or-expression: bitwise-xor-expression  */
#line 172 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2249 "parser.tab.c"
    break;

  case 63: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 173 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2255 "parser.tab.c"
    break;

  case 64: /* bitwise-xor-expression: bitwise-and-expression  */
#line 176 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2261 "parser.tab.c"
    break;

  case 65: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 177 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2267 "parser.tab.c"
    break;

  case 66: /* bitwise-and-expression: equality-expression  */
#line 180 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2273 "parser.tab.c"
    break;

  case 67: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 181 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2279 "parser.tab.c"
    break;

  case 68: /* logical-or-expression: logical-and-expression  */
#line 184 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2285 "parser.tab.c"
    break;

  case 69: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 185 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2291 "parser.tab.c"
    break;

  case 70: /* logical-and-expression: bitwise-or-expression  */
#line 188 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2297 "parser.tab.c"
    break;

  case 71: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 189 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2303 "parser.tab.c"
    break;

  case 72: /* conditional-expression: logical-or-expression  */
#line 192 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2309 "parser.tab.c"
    break;

  case 73: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 193 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2315 "parser.tab.c"
    break;

  case 74: /* assignment-expression: conditional-expression  */
#line 196 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2321 "parser.tab.c"
    break;

  case 75: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 197 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2327 "parser.tab.c"
    break;

  case 76: /* assignment-operator: '='  */
#line 201 "parser.y"
                         {(yyval.op) = '='; }
#line 2333 "parser.tab.c"
    break;

  case 77: /* assignment-operator: PLUSEQ  */
#line 202 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2339 "parser.tab.c"
    break;

  case 78: /* assignment-operator: MINUSEQ  */
#line 203 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2345 "parser.tab.c"
    break;

  case 79: /* assignment-operator: TIMESEQ  */
#line 204 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2351 "parser.tab.c"
    break;

  case 80: /* assignment-operator: DIVEQ  */
#line 205 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2357 "parser.tab.c"
    break;

  case 81: /* assignment-operator: MODEQ  */
#line 206 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2363 "parser.tab.c"
    break;

  case 82: /* assignment-operator: SHLEQ  */
#line 207 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2369 "parser.tab.c"
    break;

  case 83: /* assignment-operator: SHREQ  */
#line 208 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2375 "parser.tab.c"
    break;

  case 84: /* assignment-operator: ANDEQ  */
#line 209 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2381 "parser.tab.c"
    break;

  case 85: /* assignment-operator: OREQ  */
#line 210 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2387 "parser.tab.c"
    break;

  case 86: /* assignment-operator: XOREQ  */
#line 211 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2393 "parser.tab.c"
    break;

  case 87: /* expression: assignment-expression  */
#line 213 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2399 "parser.tab.c"
    break;

  case 88: /* expression: expression ',' assignment-expression  */
#line 214 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2405 "parser.tab.c"
    break;

  case 89: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 220 "parser.y"
                                                             {  }
#line 2411 "parser.tab.c"
    break;

  case 90: /* declaration: declaration-specifiers ';'  */
#line 221 "parser.y"
                                  {  (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 2417 "parser.tab.c"
    break;

  case 91: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 224 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2423 "parser.tab.c"
    break;

  case 92: /* declaration-specifiers: storage-class-specifier  */
#line 225 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2429 "parser.tab.c"
    break;

  case 93: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 226 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2435 "parser.tab.c"
    break;

  case 94: /* declaration-specifiers: type-specifier  */
#line 227 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2441 "parser.tab.c"
    break;

  case 95: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 228 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2447 "parser.tab.c"
    break;

  case 96: /* declaration-specifiers: type-qualifier  */
#line 229 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2453 "parser.tab.c"
    break;

  case 97: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 230 "parser.y"
                                                { }
#line 2459 "parser.tab.c"
    break;

  case 98: /* declaration-specifiers: function-specifier  */
#line 231 "parser.y"
                         { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
#line 2465 "parser.tab.c"
    break;

  case 99: /* init-declarator-list: init-declarator  */
#line 234 "parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)->head); }
#line 2471 "parser.tab.c"
    break;

  case 100: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 235 "parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)->head); }
#line 2477 "parser.tab.c"
    break;

  case 101: /* init-declarator: declarator  */
#line 238 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2483 "parser.tab.c"
    break;

  case 102: /* init-declarator: declarator '=' initializer  */
#line 239 "parser.y"
                                 {/* do not have to do yet */ }
#line 2489 "parser.tab.c"
    break;

  case 103: /* storage-class-specifier: TYPEDEF  */
#line 243 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2495 "parser.tab.c"
    break;

  case 104: /* storage-class-specifier: EXTERN  */
#line 244 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2501 "parser.tab.c"
    break;

  case 105: /* storage-class-specifier: STATIC  */
#line 245 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2507 "parser.tab.c"
    break;

  case 106: /* storage-class-specifier: AUTO  */
#line 246 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2513 "parser.tab.c"
    break;

  case 107: /* storage-class-specifier: REGISTER  */
#line 247 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2519 "parser.tab.c"
    break;

  case 108: /* type-specifier: VOID  */
#line 252 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2525 "parser.tab.c"
    break;

  case 109: /* type-specifier: CHAR  */
#line 253 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2531 "parser.tab.c"
    break;

  case 110: /* type-specifier: SHORT  */
#line 254 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2537 "parser.tab.c"
    break;

  case 111: /* type-specifier: INT  */
#line 255 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2543 "parser.tab.c"
    break;

  case 112: /* type-specifier: LONG  */
#line 256 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2549 "parser.tab.c"
    break;

  case 113: /* type-specifier: FLOAT  */
#line 257 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2555 "parser.tab.c"
    break;

  case 114: /* type-specifier: DOUBLE  */
#line 258 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2561 "parser.tab.c"
    break;

  case 115: /* type-specifier: SIGNED  */
#line 259 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2567 "parser.tab.c"
    break;

  case 116: /* type-specifier: UNSIGNED  */
#line 260 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2573 "parser.tab.c"
    break;

  case 117: /* type-specifier: _BOOL  */
#line 261 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2579 "parser.tab.c"
    break;

  case 118: /* type-specifier: _COMPLEX  */
#line 262 "parser.y"
                            { }
#line 2585 "parser.tab.c"
    break;

  case 119: /* type-specifier: _IMAGINARY  */
#line 263 "parser.y"
                           { }
#line 2591 "parser.tab.c"
    break;

  case 120: /* type-specifier: struct-or-union-specifier  */
#line 264 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2597 "parser.tab.c"
    break;

  case 122: /* $@4: %empty  */
#line 271 "parser.y"
                                                 { printf("insert struct in upper symbol table"); }
#line 2603 "parser.tab.c"
    break;

  case 123: /* struct-or-union-specifier: struct-or-union IDENT $@4 '{' struct-declaration-list '}'  */
#line 271 "parser.y"
                                                                                                                                   { (yyval.astnode_p) = newStructUnion((yyvsp[-5].op), (yyvsp[-4].string_literal), NULL); }
#line 2609 "parser.tab.c"
    break;

  case 124: /* struct-or-union-specifier: struct-or-union '{' struct-declaration-list '}'  */
#line 272 "parser.y"
                                                                           { (yyval.astnode_p) = newStructUnion((yyvsp[-3].op), NULL, NULL); }
#line 2615 "parser.tab.c"
    break;

  case 125: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 273 "parser.y"
                                                 {  (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL);   }
#line 2621 "parser.tab.c"
    break;

  case 126: /* struct-or-union: STRUCT  */
#line 276 "parser.y"
                        { (yyval.op) = STRUCT; }
#line 2627 "parser.tab.c"
    break;

  case 127: /* struct-or-union: UNION  */
#line 277 "parser.y"
                        { (yyval.op) =  UNION; }
#line 2633 "parser.tab.c"
    break;

  case 128: /* struct-declaration-list: struct-declaration  */
#line 280 "parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2641 "parser.tab.c"
    break;

  case 130: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 286 "parser.y"
                                                                        { }
#line 2647 "parser.tab.c"
    break;

  case 131: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 289 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2653 "parser.tab.c"
    break;

  case 132: /* specifier-qualifier-list: type-specifier  */
#line 290 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2659 "parser.tab.c"
    break;

  case 133: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 291 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2665 "parser.tab.c"
    break;

  case 134: /* specifier-qualifier-list: type-qualifier  */
#line 292 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2671 "parser.tab.c"
    break;

  case 135: /* struct-declarator-list: struct-declarator  */
#line 294 "parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)->head); }
#line 2677 "parser.tab.c"
    break;

  case 136: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 295 "parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)->head); }
#line 2683 "parser.tab.c"
    break;

  case 137: /* struct-declarator: declarator  */
#line 297 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2689 "parser.tab.c"
    break;

  case 138: /* struct-declarator: declarator ':' conditional-expression  */
#line 298 "parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2697 "parser.tab.c"
    break;

  case 139: /* struct-declarator: ':' conditional-expression  */
#line 301 "parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2705 "parser.tab.c"
    break;

  case 147: /* type-qualifier: CONST  */
#line 322 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2711 "parser.tab.c"
    break;

  case 148: /* type-qualifier: RESTRICT  */
#line 323 "parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2717 "parser.tab.c"
    break;

  case 149: /* type-qualifier: VOLATILE  */
#line 324 "parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2723 "parser.tab.c"
    break;

  case 151: /* declarator: pointer direct-declarator  */
#line 331 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p)); }
#line 2729 "parser.tab.c"
    break;

  case 152: /* declarator: direct-declarator  */
#line 332 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2735 "parser.tab.c"
    break;

  case 153: /* direct-declarator: IDENT  */
#line 335 "parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2741 "parser.tab.c"
    break;

  case 154: /* direct-declarator: '(' declarator ')'  */
#line 336 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2747 "parser.tab.c"
    break;

  case 155: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 337 "parser.y"
                                                                                { }
#line 2753 "parser.tab.c"
    break;

  case 156: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 338 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2759 "parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 339 "parser.y"
                                                         {}
#line 2765 "parser.tab.c"
    break;

  case 158: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 340 "parser.y"
                                                                                     {}
#line 2771 "parser.tab.c"
    break;

  case 159: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 341 "parser.y"
                                                                  {}
#line 2777 "parser.tab.c"
    break;

  case 160: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 342 "parser.y"
                                                                                     {}
#line 2783 "parser.tab.c"
    break;

  case 161: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 343 "parser.y"
                                                             { }
#line 2789 "parser.tab.c"
    break;

  case 162: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 344 "parser.y"
                                          { /*  */ }
#line 2795 "parser.tab.c"
    break;

  case 163: /* direct-declarator: direct-declarator '[' ']'  */
#line 345 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2801 "parser.tab.c"
    break;

  case 164: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 346 "parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl(NULL)); }
#line 2807 "parser.tab.c"
    break;

  case 165: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 347 "parser.y"
                                                    { }
#line 2813 "parser.tab.c"
    break;

  case 166: /* direct-declarator: direct-declarator '(' ')'  */
#line 348 "parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL)); }
#line 2819 "parser.tab.c"
    break;

  case 167: /* pointer: '*'  */
#line 351 "parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2825 "parser.tab.c"
    break;

  case 168: /* pointer: '*' type-qualifier-list  */
#line 352 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2831 "parser.tab.c"
    break;

  case 169: /* pointer: '*' type-qualifier-list pointer  */
#line 353 "parser.y"
                                          {}
#line 2837 "parser.tab.c"
    break;

  case 170: /* pointer: '*' pointer  */
#line 354 "parser.y"
                      { (yyvsp[0].astnode_p)->ptr.next = newType(AST_NODE_TYPE_POINTER,  0);  (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2843 "parser.tab.c"
    break;

  case 171: /* type-qualifier-list: type-qualifier  */
#line 357 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2849 "parser.tab.c"
    break;

  case 172: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 358 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2855 "parser.tab.c"
    break;

  case 177: /* parameter-declaration: declaration-specifiers declarator  */
#line 369 "parser.y"
                                                             {}
#line 2861 "parser.tab.c"
    break;

  case 178: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 370 "parser.y"
                                                     {   }
#line 2867 "parser.tab.c"
    break;

  case 179: /* parameter-declaration: declaration-specifiers  */
#line 371 "parser.y"
                                 { }
#line 2873 "parser.tab.c"
    break;

  case 184: /* abstract-declarator: pointer  */
#line 383 "parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 2879 "parser.tab.c"
    break;

  case 185: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 384 "parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 2885 "parser.tab.c"
    break;

  case 186: /* abstract-declarator: direct-abstract-declarator  */
#line 385 "parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2891 "parser.tab.c"
    break;

  case 187: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 388 "parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 2897 "parser.tab.c"
    break;

  case 188: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 389 "parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 2903 "parser.tab.c"
    break;

  case 189: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 390 "parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2909 "parser.tab.c"
    break;

  case 190: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 391 "parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 2915 "parser.tab.c"
    break;

  case 191: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 392 "parser.y"
                                                 {   }
#line 2921 "parser.tab.c"
    break;

  case 192: /* direct-abstract-declarator: '[' '*' ']'  */
#line 393 "parser.y"
                      {  }
#line 2927 "parser.tab.c"
    break;

  case 193: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 394 "parser.y"
                                                                 { }
#line 2933 "parser.tab.c"
    break;

  case 194: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 395 "parser.y"
                                      { }
#line 2939 "parser.tab.c"
    break;

  case 195: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 396 "parser.y"
                                             { }
#line 2945 "parser.tab.c"
    break;


#line 2949 "parser.tab.c"

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

#line 426 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
