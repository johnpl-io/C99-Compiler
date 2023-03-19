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
#line 3 "parser.y"


    #define YYDEBUG 1
   #include <stdlib.h>
   #include <stdio.h>
   #include <ctype.h>
   #include "ast.h"
  int yylex();
  void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
  // typedef union yylval YYSTYPE;

#line 85 "parser.tab.c"

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
  YYSYMBOL_declaration_or_fndef = 91,      /* declaration_or_fndef  */
  YYSYMBOL_function_definition = 92,       /* function_definition  */
  YYSYMBOL_compound_statement = 93,        /* compound_statement  */
  YYSYMBOL_decl_or_stmt_list = 94,         /* decl_or_stmt_list  */
  YYSYMBOL_decl_or_stmt = 95,              /* decl_or_stmt  */
  YYSYMBOL_stmt = 96,                      /* stmt  */
  YYSYMBOL_97_primary_expression = 97,     /* primary-expression  */
  YYSYMBOL_98_postfix_expression = 98,     /* postfix-expression  */
  YYSYMBOL_99_expression_list = 99,        /* expression-list  */
  YYSYMBOL_100_unary_expression = 100,     /* unary-expression  */
  YYSYMBOL_101_unary_operator = 101,       /* unary-operator  */
  YYSYMBOL_102_cast_expression = 102,      /* cast-expression  */
  YYSYMBOL_103_mult_expression = 103,      /* mult-expression  */
  YYSYMBOL_104_add_expression = 104,       /* add-expression  */
  YYSYMBOL_105_shift_expression = 105,     /* shift-expression  */
  YYSYMBOL_106_relational_expression = 106, /* relational-expression  */
  YYSYMBOL_107_equality_expression = 107,  /* equality-expression  */
  YYSYMBOL_108_bitwise_or_expression = 108, /* bitwise-or-expression  */
  YYSYMBOL_109_bitwise_xor_expression = 109, /* bitwise-xor-expression  */
  YYSYMBOL_110_bitwise_and_expression = 110, /* bitwise-and-expression  */
  YYSYMBOL_111_logical_or_expression = 111, /* logical-or-expression  */
  YYSYMBOL_112_logical_and_expression = 112, /* logical-and-expression  */
  YYSYMBOL_113_conditional_expression = 113, /* conditional-expression  */
  YYSYMBOL_114_assignment_expression = 114, /* assignment-expression  */
  YYSYMBOL_115_assignment_operator = 115,  /* assignment-operator  */
  YYSYMBOL_expression = 116,               /* expression  */
  YYSYMBOL_declaration = 117,              /* declaration  */
  YYSYMBOL_118_declaration_specifiers = 118, /* declaration-specifiers  */
  YYSYMBOL_119_init_declarator_list = 119, /* init-declarator-list  */
  YYSYMBOL_120_init_declarator = 120,      /* init-declarator  */
  YYSYMBOL_121_storage_class_specifier = 121, /* storage-class-specifier  */
  YYSYMBOL_122_type_specifier = 122,       /* type-specifier  */
  YYSYMBOL_123_struct_or_union_specifier = 123, /* struct-or-union-specifier  */
  YYSYMBOL_124_struct_or_union = 124,      /* struct-or-union  */
  YYSYMBOL_125_struct_declaration_list = 125, /* struct-declaration-list  */
  YYSYMBOL_126_struct_declaration = 126,   /* struct-declaration  */
  YYSYMBOL_127_specifier_qualifier_list = 127, /* specifier-qualifier-list  */
  YYSYMBOL_128_struct_declarator_list = 128, /* struct-declarator-list  */
  YYSYMBOL_129_struct_declarator = 129,    /* struct-declarator  */
  YYSYMBOL_130_enum_specifier = 130,       /* enum-specifier  */
  YYSYMBOL_131_enumerator_list = 131,      /* enumerator-list  */
  YYSYMBOL_enumerator = 132,               /* enumerator  */
  YYSYMBOL_133_type_qualifier = 133,       /* type-qualifier  */
  YYSYMBOL_134_function_specifier = 134,   /* function-specifier  */
  YYSYMBOL_declarator = 135,               /* declarator  */
  YYSYMBOL_136_direct_declarator = 136,    /* direct-declarator  */
  YYSYMBOL_pointer = 137,                  /* pointer  */
  YYSYMBOL_138_type_qualifier_list = 138,  /* type-qualifier-list  */
  YYSYMBOL_139_parameter_type_list = 139,  /* parameter-type-list  */
  YYSYMBOL_140_parameter_list = 140,       /* parameter-list  */
  YYSYMBOL_141_parameter_declaration = 141, /* parameter-declaration  */
  YYSYMBOL_142_identifier_list = 142,      /* identifier-list  */
  YYSYMBOL_143_type_name = 143,            /* type-name  */
  YYSYMBOL_144_abstract_declarator = 144,  /* abstract-declarator  */
  YYSYMBOL_145_direct_abstract_declarator = 145, /* direct-abstract-declarator  */
  YYSYMBOL_initializer = 146,              /* initializer  */
  YYSYMBOL_147_initializer_list = 147,     /* initializer-list  */
  YYSYMBOL_designation = 148,              /* designation  */
  YYSYMBOL_149_designator_list = 149,      /* designator-list  */
  YYSYMBOL_designator = 150                /* designator  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

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
       0,    68,    68,    69,    71,    72,    73,    74,    77,    78,
      80,    81,    85,    86,    87,    88,    89,    92,    93,    94,
      95,    96,    97,    98,    99,   102,   103,   107,   108,   109,
     110,   111,   114,   115,   116,   117,   118,   119,   121,   122,
     126,   127,   128,   129,   132,   133,   134,   137,   138,   139,
     142,   143,   144,   145,   146,   149,   150,   151,   154,   155,
     158,   159,   162,   163,   166,   167,   170,   171,   174,   175,
     178,   179,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   195,   196,   202,   203,   206,   207,   208,
     209,   210,   211,   212,   213,   216,   217,   220,   221,   225,
     226,   227,   228,   229,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   253,   254,
     255,   258,   259,   262,   263,   266,   269,   270,   271,   272,
     274,   275,   277,   278,   279,   284,   285,   286,   288,   289,
     292,   293,   298,   299,   300,   303,   307,   308,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   327,   328,   329,   330,   333,   334,   337,   338,
     341,   342,   345,   346,   347,   350,   351,   355,   356,   359,
     360,   361,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   380,   381,   382,   385,   386,   387,   388,   391,   394,
     395,   398,   399
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
  "declaration_or_fndef", "function_definition", "compound_statement",
  "decl_or_stmt_list", "decl_or_stmt", "stmt", "primary-expression",
  "postfix-expression", "expression-list", "unary-expression",
  "unary-operator", "cast-expression", "mult-expression", "add-expression",
  "shift-expression", "relational-expression", "equality-expression",
  "bitwise-or-expression", "bitwise-xor-expression",
  "bitwise-and-expression", "logical-or-expression",
  "logical-and-expression", "conditional-expression",
  "assignment-expression", "assignment-operator", "expression",
  "declaration", "declaration-specifiers", "init-declarator-list",
  "init-declarator", "storage-class-specifier", "type-specifier",
  "struct-or-union-specifier", "struct-or-union",
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

#define YYPACT_NINF (-186)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     749,  -186,  -186,  -186,  -186,  -186,    36,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,   132,    16,    13,  -186,
    -186,    15,  1088,  1088,  -186,    39,  -186,  1088,  1088,   -68,
     -52,    21,   -17,    69,  -186,  -186,   132,    -4,  -186,  -186,
     -47,  -186,    57,  -186,  -186,    50,  1122,  -186,  -186,   347,
    -186,   279,   473,   -52,    69,    67,    60,  -186,  -186,  -186,
    -186,    16,  -186,   439,  1122,  1122,   637,  -186,    33,  1122,
    -186,  -186,  -186,  -186,   835,   835,    80,  -186,  -186,  -186,
    -186,  -186,  -186,   854,  -186,   220,  -186,  -186,  -186,   134,
     164,   854,  -186,   -40,   -23,    49,    76,   141,    97,   109,
      96,     0,   206,  -186,  -186,   107,  -186,  -186,  -186,    58,
     151,   146,  -186,    31,   816,   152,  -186,   156,   512,   115,
     854,     6,  -186,   420,  -186,  -186,   972,  -186,  -186,  -186,
     854,   153,  -186,   154,  -186,   161,  -186,  -186,   704,    63,
    -186,  -186,   239,  -186,  -186,   241,   658,   854,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,   854,
    -186,  -186,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,  -186,   591,   889,  -186,    48,  -186,    95,  -186,
    1051,  -186,   242,   163,   816,  -186,  -186,   854,   167,  -186,
     168,  -186,    69,  -186,  -186,  -186,   251,   854,  -186,   125,
     439,   -50,  -186,  -186,  -186,    33,   854,   854,    87,    90,
     174,  -186,  -186,  -186,  -186,    92,  -186,   -25,  -186,  -186,
    -186,  -186,   -40,   -40,   -23,   -23,    49,    49,    49,    49,
      76,    76,   109,    96,   141,   206,   124,    97,  -186,   175,
     181,   180,   187,    95,  1013,   546,  -186,  -186,  -186,  -186,
     193,   204,  -186,  -186,  -186,   209,  -186,   293,  -186,  -186,
    -186,  -186,  -186,  -186,   934,   135,  -186,  -186,  -186,   854,
    -186,   854,  -186,  -186,  -186,  -186,  -186,   183,   211,  -186,
     212,  -186,  -186,  -186,  -186,  -186,   439,  -186,  -186,  -186,
    -186,  -186,  -186
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   148,   102,   105,   142,   110,     0,   100,   109,   145,
     107,   108,   103,   143,   106,   111,   101,   121,    99,   122,
     112,   104,   144,   113,   114,   115,   162,     0,     0,     3,
       2,     0,    88,    90,   116,     0,   117,    92,    94,     0,
     147,     0,   137,     0,   166,   165,   163,     0,     1,    86,
       0,    95,    97,    87,    89,   120,     0,    91,    93,     0,
       4,     0,     0,   146,     0,   140,     0,   138,   167,   164,
     149,     0,    85,     0,     0,   127,     0,   123,     0,   129,
      12,    15,    14,    13,     0,     0,     0,    34,    36,    37,
      32,    33,    35,     0,    10,     0,     6,     9,    17,    27,
      38,     0,    40,    44,    47,    50,    55,    62,    66,    58,
      60,    68,    64,    70,    83,     0,     8,   175,   161,   174,
       0,   168,   170,     0,     0,    37,   158,     0,     0,     0,
       0,     0,    96,     0,   191,    98,     0,   126,   119,   124,
       0,   125,   130,   132,   128,     0,    28,    29,     0,     0,
       5,     7,     0,    23,    24,     0,     0,     0,    75,    76,
      77,    73,    74,    78,    79,    80,    81,    82,    72,     0,
      38,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,   172,   179,   173,   181,   159,
       0,   160,     0,     0,     0,   157,   151,     0,    37,   152,
       0,   135,     0,   141,   136,   139,     0,     0,   195,     0,
       0,     0,   199,   118,   134,     0,     0,     0,     0,   177,
       0,    16,    20,    19,    22,     0,    25,     0,    71,    41,
      42,    43,    46,    45,    48,    49,    52,    54,    51,    53,
      56,    57,    59,    61,    63,    65,     0,    67,    84,     0,
       0,    37,     0,   180,     0,     0,   169,   171,   176,   154,
       0,     0,   156,   150,   202,     0,   192,     0,   194,   198,
     200,   131,   133,    31,     0,   179,   178,    39,    21,     0,
      18,     0,   189,   182,   187,   185,   190,     0,    37,   184,
       0,   153,   155,   201,   193,   197,     0,    26,    69,   188,
     186,   183,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,   264,  -186,   214,  -186,  -186,  -186,  -186,
     -58,  -186,   -91,    29,    43,    17,    54,   119,   117,   128,
     129,  -186,   122,  -109,   -59,  -186,   -70,   314,    12,  -186,
     246,  -186,   -22,  -186,  -186,   247,   -21,   -11,  -186,    98,
    -186,   258,   -88,    30,  -186,     2,   -33,   -26,     1,   -56,
    -186,   145,  -186,  -186,  -113,  -185,  -126,  -186,    52,  -186,
     111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    28,    29,    94,    95,    96,    97,    98,    99,   235,
     170,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   169,   115,   116,   119,    50,
      51,    32,    33,    34,    35,    76,    77,    78,   141,   142,
      36,    66,    67,    37,    38,    47,    40,    41,    46,   259,
     121,   122,   123,   230,   260,   198,   135,   219,   220,   221,
     222
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   100,    39,   127,   100,   120,   197,   218,    63,    65,
     171,   263,    31,    48,   134,   100,    59,   188,     1,     1,
      69,   213,   279,   149,     1,   216,   146,   147,    61,   172,
      62,   224,   217,    52,    75,   100,     1,   100,   173,    42,
      71,    72,    55,   215,    53,    54,   174,   175,   176,    57,
      58,     1,    75,    75,    75,   139,    44,    75,   290,   177,
     178,     1,   191,   128,   137,   203,   100,    64,   144,   210,
     100,    31,    65,    52,   134,   100,    68,    70,   228,   189,
     143,   239,   240,   241,    26,    26,    79,   237,   179,   180,
     100,   214,    44,   196,   278,    27,    27,   236,   100,   100,
     263,    27,    26,    49,    79,    79,    79,    31,   275,    79,
     238,   100,   201,    27,    75,   139,   286,   282,   202,   256,
      43,   195,   140,    56,   215,   204,    75,    26,   193,    73,
     194,   100,   258,   100,    74,   262,   100,   229,   193,   130,
     194,   152,   153,   154,   231,   270,   100,   131,   271,   100,
     191,   305,   181,   182,    44,   183,   184,   228,    68,    26,
     148,   134,   100,    63,   187,     4,    79,   196,   283,   100,
     284,   185,   194,   288,   191,   264,   186,   265,    79,   289,
     312,    13,   308,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,    22,   191,   192,   246,   247,   248,   249,
     211,    26,   212,   285,   242,   243,   300,   100,   297,   155,
     276,   191,   277,   291,   156,   284,   157,   194,   134,   100,
     244,   245,   190,    80,    81,    82,    83,   143,    84,    85,
     307,   100,   199,   200,    68,   205,   168,   250,   251,   206,
     225,   227,   232,   226,   233,   268,   269,   134,   100,     2,
     272,   273,     3,     4,   274,   287,   292,     5,   285,     6,
       7,     8,   293,   294,   309,     9,    10,    11,    12,    13,
     295,    14,    15,    86,    16,    17,   301,    18,    19,    20,
      21,    22,   117,    23,    24,    25,    87,   302,    88,    89,
      90,    91,   303,    92,   310,   311,    80,    81,    82,    83,
      93,    84,    85,    60,    59,   150,   254,   257,     2,   151,
     255,     3,     4,   252,    30,   253,     5,   132,     6,     7,
       8,   136,   129,   281,     9,    10,    11,    12,    13,   306,
      14,    15,   280,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,    25,   267,    86,     0,     0,     0,
      80,    81,    82,    83,     0,    84,    85,     0,     0,    87,
     118,    88,    89,    90,    91,     0,    92,     0,   216,     0,
       0,     0,     0,    93,     0,   217,     2,   133,   304,     3,
       4,     0,     0,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
      86,    16,    17,     0,    18,    19,    20,    21,    22,     0,
      23,    24,    25,    87,     0,    88,    89,    90,    91,     0,
      92,     0,     0,    80,    81,    82,    83,    93,    84,    85,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,    87,     0,    88,    89,
      90,    91,    86,    92,     0,   216,     0,     0,     0,     0,
      93,     0,   217,     0,   133,    87,     4,    88,    89,    90,
      91,     0,    92,     0,     0,    80,    81,    82,    83,    93,
      84,    85,    13,   133,     0,     0,    86,   124,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,    87,
       0,    88,   125,    90,    91,     4,    92,     0,     0,    80,
      81,    82,    83,    93,    84,    85,   126,     0,     0,     0,
       0,    13,     0,     0,     0,    86,   207,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,    87,     0,
      88,   208,    90,    91,     0,    92,     0,     0,     0,     0,
       0,     0,    93,     0,     1,   209,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,   298,    90,    91,     0,    92,
       2,     0,     0,     3,     4,     0,    93,     0,     5,   299,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,    25,     0,     0,     0,
      26,    80,    81,    82,    83,     0,    84,    85,     0,     3,
       4,   193,     0,   194,     5,     0,     6,     0,     8,     0,
       0,     0,     0,    10,    11,     0,    13,     0,    14,    15,
       0,     0,    17,     0,     0,    19,    20,    21,    22,     0,
      23,    24,    25,     0,     0,     0,     0,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,   138,     0,    87,     0,    88,    89,    90,    91,
       0,    92,     0,     0,     0,     0,     3,     4,    93,   234,
       0,     5,     0,     6,     0,     8,     0,     0,     0,     0,
      10,    11,     1,    13,     0,    14,    15,    86,     0,    17,
       0,     0,    19,    20,    21,    22,     0,    23,    24,    25,
      87,     0,    88,    89,    90,    91,     0,    92,     2,     0,
       0,     3,     4,     0,    93,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,    25,     0,     0,     0,    26,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,    80,    81,    82,
      83,     0,    84,    85,     0,    13,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,    87,     0,    88,    89,    90,    91,   145,    92,
       0,     0,    80,    81,    82,    83,    93,    84,    85,     0,
       0,    87,     0,    88,    89,    90,    91,    86,    92,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
      87,     0,    88,    89,    90,    91,     0,    92,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,   261,    90,
      91,     0,    92,     2,     0,     0,     3,     4,     0,    93,
       0,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,     0,    23,    24,    25,
       0,     0,     0,    26,     3,     4,     0,     0,     0,     5,
       0,     6,     0,     8,   284,     0,   194,     0,    10,    11,
       0,    13,     0,    14,    15,     0,     0,    17,     0,     0,
      19,    20,    21,    22,     0,    23,    24,    25,     0,     0,
       0,     0,     2,     0,     0,     3,     4,     0,     0,     0,
       5,     0,     6,     7,     8,     0,     0,   223,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,   266,
      18,    19,    20,    21,    22,     0,    23,    24,    25,     0,
       2,     0,     0,     3,     4,     0,     0,     0,     5,     0,
       6,     7,     8,     0,   296,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,    25,     2,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
       0,    23,    24,    25,     3,     4,     0,     0,     0,     5,
       0,     6,     0,     8,     0,     0,     0,     0,    10,    11,
       0,    13,     0,    14,    15,     0,     0,    17,     0,     0,
      19,    20,    21,    22,     0,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      26,    59,     0,    62,    62,    61,   119,   133,    41,     3,
     101,   196,     0,     0,    73,    73,    84,    17,     3,     3,
      46,   130,    72,    93,     3,    75,    84,    85,    80,    69,
      82,   140,    82,    31,    56,    93,     3,    95,    78,     3,
      87,    88,     3,   131,    32,    33,    86,    70,    71,    37,
      38,     3,    74,    75,    76,    76,    26,    79,    83,    10,
      11,     3,    87,    62,    75,   124,   124,    84,    79,   128,
     128,    59,     3,    71,   133,   133,    46,    81,   148,    79,
      78,   172,   173,   174,    69,    69,    56,   157,    12,    13,
     148,    85,    62,   119,   220,    80,    80,   156,   156,   157,
     285,    80,    69,    88,    74,    75,    76,    95,   217,    79,
     169,   169,    81,    80,   136,   136,   229,   226,    87,   189,
      84,   119,    89,    84,   212,   124,   148,    69,    80,    72,
      82,   189,   191,   191,    84,   194,   194,   148,    80,    72,
      82,     7,     8,     9,    81,   204,   204,    87,   207,   207,
      87,   277,    76,    77,   124,    14,    15,   227,   128,    69,
      80,   220,   220,   196,    68,    33,   136,   193,    81,   227,
      80,    74,    82,    81,    87,    80,    67,    82,   148,    87,
     306,    49,   291,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    61,    87,    88,   179,   180,   181,   182,
      85,    69,    87,   229,   175,   176,   265,   265,   264,    75,
      85,    87,    87,    89,    80,    80,    82,    82,   277,   277,
     177,   178,    16,     3,     4,     5,     6,   225,     8,     9,
     289,   289,    81,    87,   204,    83,    72,   183,   184,    83,
      87,    80,     3,    89,     3,     3,    83,   306,   306,    29,
      83,    83,    32,    33,     3,    81,    81,    37,   284,    39,
      40,    41,    81,    83,    81,    45,    46,    47,    48,    49,
      83,    51,    52,    53,    54,    55,    83,    57,    58,    59,
      60,    61,     3,    63,    64,    65,    66,    83,    68,    69,
      70,    71,    83,    73,    83,    83,     3,     4,     5,     6,
      80,     8,     9,    39,    84,    85,   187,   190,    29,    95,
     188,    32,    33,   185,     0,   186,    37,    71,    39,    40,
      41,    74,    64,   225,    45,    46,    47,    48,    49,   277,
      51,    52,   221,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,   200,    53,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    66,
      81,    68,    69,    70,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    82,    29,    84,    85,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    -1,
      73,    -1,    -1,     3,     4,     5,     6,    80,     8,     9,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    53,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    84,    66,    33,    68,    69,    70,
      71,    -1,    73,    -1,    -1,     3,     4,     5,     6,    80,
       8,     9,    49,    84,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    33,    73,    -1,    -1,     3,
       4,     5,     6,    80,     8,     9,    83,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,     3,    83,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      29,    -1,    -1,    32,    33,    -1,    80,    -1,    37,    83,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,
      69,     3,     4,     5,     6,    -1,     8,     9,    -1,    32,
      33,    80,    -1,    82,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    53,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    32,    33,    80,    81,
      -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,
      46,    47,     3,    49,    -1,    51,    52,    53,    -1,    55,
      -1,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    -1,    73,    29,    -1,
      -1,    32,    33,    -1,    80,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    -1,    -1,    -1,    69,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    80,
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
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    29,    -1,    -1,    32,    33,    -1,    80,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    -1,    -1,    69,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    -1,    41,    80,    -1,    82,    -1,    46,    47,
      -1,    49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    85,    45,    46,
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
       0,     3,    29,    32,    33,    37,    39,    40,    41,    45,
      46,    47,    48,    49,    51,    52,    54,    55,    57,    58,
      59,    60,    61,    63,    64,    65,    69,    80,    91,    92,
     117,   118,   121,   122,   123,   124,   130,   133,   134,   135,
     136,   137,     3,    84,   133,   137,   138,   135,     0,    88,
     119,   120,   135,   118,   118,     3,    84,   118,   118,    84,
      93,    80,    82,   136,    84,     3,   131,   132,   133,   137,
      81,    87,    88,    72,    84,   122,   125,   126,   127,   133,
       3,     4,     5,     6,     8,     9,    53,    66,    68,    69,
      70,    71,    73,    80,    93,    94,    95,    96,    97,    98,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   116,   117,     3,    81,   118,
     139,   140,   141,   142,    54,    69,    83,   114,   138,   131,
      72,    87,   120,    84,   114,   146,   125,   127,    85,   126,
      89,   128,   129,   135,   127,    53,   100,   100,    80,   116,
      85,    95,     7,     8,     9,    75,    80,    82,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    72,   115,
     100,   102,    69,    78,    86,    70,    71,    10,    11,    12,
      13,    76,    77,    14,    15,    74,    67,    68,    17,    79,
      16,    87,    88,    80,    82,   135,   137,   144,   145,    81,
      87,    81,    87,   114,   138,    83,    83,    54,    69,    83,
     114,    85,    87,   113,    85,   132,    75,    82,   146,   147,
     148,   149,   150,    85,   113,    87,    89,    80,   116,   127,
     143,    81,     3,     3,    81,    99,   114,   116,   114,   102,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   109,   110,   107,   112,   116,   108,   114,   139,
     144,    69,   114,   145,    80,    82,    18,   141,     3,    83,
     114,   114,    83,    83,     3,   113,    85,    87,   146,    72,
     150,   129,   113,    81,    80,   137,   144,    81,    81,    87,
      83,    89,    81,    81,    83,    83,    81,   139,    69,    83,
     114,    83,    83,    83,    85,   146,   148,   114,   113,    81,
      83,    83,   146
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   103,   103,   104,   104,   104,   105,   105,   105,
     106,   106,   106,   106,   106,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   126,   127,   127,   127,   127,
     128,   128,   129,   129,   129,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   142,   142,   143,   143,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   146,   147,   147,   147,   147,   148,   149,
     149,   150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       3,     4,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       1,     3,     1,     3,     2,     5,     5,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     4,     4,     6,     5,     6,     5,     4,     3,     4,
       4,     3,     1,     2,     3,     2,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       2,     1,     3,     4,     3,     3,     4,     3,     4,     3,
       3,     1,     3,     4,     2,     1,     4,     3,     2,     1,
       2,     3,     2
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
  case 11: /* stmt: expression ';'  */
#line 81 "parser.y"
                     { astwalk_impl((yyvsp[-1].astnode_p), 0); }
#line 1917 "parser.tab.c"
    break;

  case 12: /* primary-expression: IDENT  */
#line 85 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1923 "parser.tab.c"
    break;

  case 13: /* primary-expression: NUMBER  */
#line 86 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 1929 "parser.tab.c"
    break;

  case 14: /* primary-expression: STRING  */
#line 87 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal));  }
#line 1935 "parser.tab.c"
    break;

  case 15: /* primary-expression: CHARLIT  */
#line 88 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 1941 "parser.tab.c"
    break;

  case 16: /* primary-expression: '(' expression ')'  */
#line 89 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 1947 "parser.tab.c"
    break;

  case 17: /* postfix-expression: primary-expression  */
#line 92 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 1953 "parser.tab.c"
    break;

  case 18: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 93 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 1959 "parser.tab.c"
    break;

  case 19: /* postfix-expression: postfix-expression '.' IDENT  */
#line 94 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 1965 "parser.tab.c"
    break;

  case 20: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 95 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 1971 "parser.tab.c"
    break;

  case 21: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 96 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 1977 "parser.tab.c"
    break;

  case 22: /* postfix-expression: postfix-expression '(' ')'  */
#line 97 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 1983 "parser.tab.c"
    break;

  case 23: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 98 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 1989 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 99 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 1995 "parser.tab.c"
    break;

  case 25: /* expression-list: assignment-expression  */
#line 102 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2001 "parser.tab.c"
    break;

  case 26: /* expression-list: expression-list ',' assignment-expression  */
#line 103 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2007 "parser.tab.c"
    break;

  case 27: /* unary-expression: postfix-expression  */
#line 107 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2013 "parser.tab.c"
    break;

  case 28: /* unary-expression: PLUSPLUS unary-expression  */
#line 108 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2019 "parser.tab.c"
    break;

  case 29: /* unary-expression: MINUSMINUS unary-expression  */
#line 109 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2025 "parser.tab.c"
    break;

  case 30: /* unary-expression: unary-operator cast-expression  */
#line 110 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2031 "parser.tab.c"
    break;

  case 31: /* unary-expression: SIZEOF '(' expression ')'  */
#line 111 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2037 "parser.tab.c"
    break;

  case 32: /* unary-operator: '-'  */
#line 114 "parser.y"
                    { (yyval.op) = '-'; }
#line 2043 "parser.tab.c"
    break;

  case 33: /* unary-operator: '+'  */
#line 115 "parser.y"
                      { (yyval.op) = '+';  }
#line 2049 "parser.tab.c"
    break;

  case 34: /* unary-operator: '!'  */
#line 116 "parser.y"
                      {(yyval.op) = '!'; }
#line 2055 "parser.tab.c"
    break;

  case 35: /* unary-operator: '~'  */
#line 117 "parser.y"
                      {(yyval.op) = '~'; }
#line 2061 "parser.tab.c"
    break;

  case 36: /* unary-operator: '&'  */
#line 118 "parser.y"
                      {(yyval.op) = '&'; }
#line 2067 "parser.tab.c"
    break;

  case 37: /* unary-operator: '*'  */
#line 119 "parser.y"
                      {(yyval.op) = '*'; }
#line 2073 "parser.tab.c"
    break;

  case 38: /* cast-expression: unary-expression  */
#line 121 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2079 "parser.tab.c"
    break;

  case 39: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 122 "parser.y"
                                          { }
#line 2085 "parser.tab.c"
    break;

  case 40: /* mult-expression: cast-expression  */
#line 126 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2091 "parser.tab.c"
    break;

  case 41: /* mult-expression: mult-expression '*' cast-expression  */
#line 127 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2097 "parser.tab.c"
    break;

  case 42: /* mult-expression: mult-expression '/' cast-expression  */
#line 128 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2103 "parser.tab.c"
    break;

  case 43: /* mult-expression: mult-expression '%' cast-expression  */
#line 129 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2109 "parser.tab.c"
    break;

  case 44: /* add-expression: mult-expression  */
#line 132 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2115 "parser.tab.c"
    break;

  case 45: /* add-expression: add-expression '+' mult-expression  */
#line 133 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2121 "parser.tab.c"
    break;

  case 46: /* add-expression: add-expression '-' mult-expression  */
#line 134 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2127 "parser.tab.c"
    break;

  case 47: /* shift-expression: add-expression  */
#line 137 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2133 "parser.tab.c"
    break;

  case 48: /* shift-expression: shift-expression SHL add-expression  */
#line 138 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2139 "parser.tab.c"
    break;

  case 49: /* shift-expression: shift-expression SHR add-expression  */
#line 139 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2145 "parser.tab.c"
    break;

  case 50: /* relational-expression: shift-expression  */
#line 142 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2151 "parser.tab.c"
    break;

  case 51: /* relational-expression: relational-expression '<' shift-expression  */
#line 143 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2157 "parser.tab.c"
    break;

  case 52: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 144 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2163 "parser.tab.c"
    break;

  case 53: /* relational-expression: relational-expression '>' shift-expression  */
#line 145 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2169 "parser.tab.c"
    break;

  case 54: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 146 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2175 "parser.tab.c"
    break;

  case 55: /* equality-expression: relational-expression  */
#line 149 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2181 "parser.tab.c"
    break;

  case 56: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 150 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2187 "parser.tab.c"
    break;

  case 57: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 151 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2193 "parser.tab.c"
    break;

  case 58: /* bitwise-or-expression: bitwise-xor-expression  */
#line 154 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2199 "parser.tab.c"
    break;

  case 59: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 155 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2205 "parser.tab.c"
    break;

  case 60: /* bitwise-xor-expression: bitwise-and-expression  */
#line 158 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2211 "parser.tab.c"
    break;

  case 61: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 159 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2217 "parser.tab.c"
    break;

  case 62: /* bitwise-and-expression: equality-expression  */
#line 162 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2223 "parser.tab.c"
    break;

  case 63: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 163 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2229 "parser.tab.c"
    break;

  case 64: /* logical-or-expression: logical-and-expression  */
#line 166 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2235 "parser.tab.c"
    break;

  case 65: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 167 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2241 "parser.tab.c"
    break;

  case 66: /* logical-and-expression: bitwise-or-expression  */
#line 170 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2247 "parser.tab.c"
    break;

  case 67: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 171 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2253 "parser.tab.c"
    break;

  case 68: /* conditional-expression: logical-or-expression  */
#line 174 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2259 "parser.tab.c"
    break;

  case 69: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 175 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2265 "parser.tab.c"
    break;

  case 70: /* assignment-expression: conditional-expression  */
#line 178 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2271 "parser.tab.c"
    break;

  case 71: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 179 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2277 "parser.tab.c"
    break;

  case 72: /* assignment-operator: '='  */
#line 183 "parser.y"
                         {(yyval.op) = '='; }
#line 2283 "parser.tab.c"
    break;

  case 73: /* assignment-operator: PLUSEQ  */
#line 184 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2289 "parser.tab.c"
    break;

  case 74: /* assignment-operator: MINUSEQ  */
#line 185 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2295 "parser.tab.c"
    break;

  case 75: /* assignment-operator: TIMESEQ  */
#line 186 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2301 "parser.tab.c"
    break;

  case 76: /* assignment-operator: DIVEQ  */
#line 187 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2307 "parser.tab.c"
    break;

  case 77: /* assignment-operator: MODEQ  */
#line 188 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2313 "parser.tab.c"
    break;

  case 78: /* assignment-operator: SHLEQ  */
#line 189 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2319 "parser.tab.c"
    break;

  case 79: /* assignment-operator: SHREQ  */
#line 190 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2325 "parser.tab.c"
    break;

  case 80: /* assignment-operator: ANDEQ  */
#line 191 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2331 "parser.tab.c"
    break;

  case 81: /* assignment-operator: OREQ  */
#line 192 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2337 "parser.tab.c"
    break;

  case 82: /* assignment-operator: XOREQ  */
#line 193 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2343 "parser.tab.c"
    break;

  case 83: /* expression: assignment-expression  */
#line 195 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2349 "parser.tab.c"
    break;

  case 84: /* expression: expression ',' assignment-expression  */
#line 196 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2355 "parser.tab.c"
    break;

  case 86: /* declaration: declaration-specifiers ';'  */
#line 203 "parser.y"
                                  { printf("%d\n", (yyvsp[-1].astnode_p)->declspec.typespecif->scal.next->scal.next->scal.types);}
#line 2361 "parser.tab.c"
    break;

  case 87: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 206 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2367 "parser.tab.c"
    break;

  case 88: /* declaration-specifiers: storage-class-specifier  */
#line 207 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2373 "parser.tab.c"
    break;

  case 89: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 208 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2379 "parser.tab.c"
    break;

  case 90: /* declaration-specifiers: type-specifier  */
#line 209 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2385 "parser.tab.c"
    break;

  case 91: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 210 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); printf("%d\n", (yyval.astnode_p)->declspec.typequal); }
#line 2391 "parser.tab.c"
    break;

  case 92: /* declaration-specifiers: type-qualifier  */
#line 211 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2397 "parser.tab.c"
    break;

  case 93: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 212 "parser.y"
                                                { }
#line 2403 "parser.tab.c"
    break;

  case 94: /* declaration-specifiers: function-specifier  */
#line 213 "parser.y"
                         { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
#line 2409 "parser.tab.c"
    break;

  case 97: /* init-declarator: declarator  */
#line 220 "parser.y"
                            {  astwalk_impl((yyvsp[0].astnode_p), 0);}
#line 2415 "parser.tab.c"
    break;

  case 98: /* init-declarator: declarator '=' initializer  */
#line 221 "parser.y"
                                 {/* do not have to do yet */ }
#line 2421 "parser.tab.c"
    break;

  case 99: /* storage-class-specifier: TYPEDEF  */
#line 225 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2427 "parser.tab.c"
    break;

  case 100: /* storage-class-specifier: EXTERN  */
#line 226 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2433 "parser.tab.c"
    break;

  case 101: /* storage-class-specifier: STATIC  */
#line 227 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2439 "parser.tab.c"
    break;

  case 102: /* storage-class-specifier: AUTO  */
#line 228 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2445 "parser.tab.c"
    break;

  case 103: /* storage-class-specifier: REGISTER  */
#line 229 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2451 "parser.tab.c"
    break;

  case 104: /* type-specifier: VOID  */
#line 234 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2457 "parser.tab.c"
    break;

  case 105: /* type-specifier: CHAR  */
#line 235 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2463 "parser.tab.c"
    break;

  case 106: /* type-specifier: SHORT  */
#line 236 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2469 "parser.tab.c"
    break;

  case 107: /* type-specifier: INT  */
#line 237 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2475 "parser.tab.c"
    break;

  case 108: /* type-specifier: LONG  */
#line 238 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2481 "parser.tab.c"
    break;

  case 109: /* type-specifier: FLOAT  */
#line 239 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2487 "parser.tab.c"
    break;

  case 110: /* type-specifier: DOUBLE  */
#line 240 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2493 "parser.tab.c"
    break;

  case 111: /* type-specifier: SIGNED  */
#line 241 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2499 "parser.tab.c"
    break;

  case 112: /* type-specifier: UNSIGNED  */
#line 242 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2505 "parser.tab.c"
    break;

  case 113: /* type-specifier: _BOOL  */
#line 243 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2511 "parser.tab.c"
    break;

  case 114: /* type-specifier: _COMPLEX  */
#line 244 "parser.y"
                            { }
#line 2517 "parser.tab.c"
    break;

  case 115: /* type-specifier: _IMAGINARY  */
#line 245 "parser.y"
                           { }
#line 2523 "parser.tab.c"
    break;

  case 142: /* type-qualifier: CONST  */
#line 298 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2529 "parser.tab.c"
    break;

  case 143: /* type-qualifier: RESTRICT  */
#line 299 "parser.y"
                        {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2535 "parser.tab.c"
    break;

  case 144: /* type-qualifier: VOLATILE  */
#line 300 "parser.y"
                       {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2541 "parser.tab.c"
    break;

  case 146: /* declarator: pointer direct-declarator  */
#line 307 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 2547 "parser.tab.c"
    break;

  case 147: /* declarator: direct-declarator  */
#line 308 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2553 "parser.tab.c"
    break;

  case 148: /* direct-declarator: IDENT  */
#line 311 "parser.y"
                             { struct astnode *temp = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)); (yyval.astnode_p) = insertElementorig(AST_NODE_TYPE_LL, temp);  }
#line 2559 "parser.tab.c"
    break;

  case 149: /* direct-declarator: '(' declarator ')'  */
#line 312 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 2565 "parser.tab.c"
    break;

  case 150: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 313 "parser.y"
                                                                                { }
#line 2571 "parser.tab.c"
    break;

  case 151: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 314 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2577 "parser.tab.c"
    break;

  case 152: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 315 "parser.y"
                                                         {}
#line 2583 "parser.tab.c"
    break;

  case 153: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 316 "parser.y"
                                                                                     {}
#line 2589 "parser.tab.c"
    break;

  case 154: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 317 "parser.y"
                                                                  {}
#line 2595 "parser.tab.c"
    break;

  case 155: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 318 "parser.y"
                                                                                     {}
#line 2601 "parser.tab.c"
    break;

  case 156: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 319 "parser.y"
                                                             {}
#line 2607 "parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 320 "parser.y"
                                          {}
#line 2613 "parser.tab.c"
    break;

  case 158: /* direct-declarator: direct-declarator '[' ']'  */
#line 321 "parser.y"
                                    {printf("hi");}
#line 2619 "parser.tab.c"
    break;

  case 159: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 322 "parser.y"
                                                        { }
#line 2625 "parser.tab.c"
    break;

  case 160: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 323 "parser.y"
                                                    {}
#line 2631 "parser.tab.c"
    break;

  case 161: /* direct-declarator: direct-declarator '(' ')'  */
#line 324 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), newast(AST_NODE_TYPE_FN, NULL, NULL, '0'));  }
#line 2637 "parser.tab.c"
    break;

  case 162: /* pointer: '*'  */
#line 327 "parser.y"
                 { (yyval.astnode_p) = insertElementorig(AST_NODE_TYPE_LL, newType(AST_NODE_TYPE_POINTER,  0));  }
#line 2643 "parser.tab.c"
    break;

  case 163: /* pointer: '*' type-qualifier-list  */
#line 328 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2649 "parser.tab.c"
    break;

  case 164: /* pointer: '*' type-qualifier-list pointer  */
#line 329 "parser.y"
                                          {}
#line 2655 "parser.tab.c"
    break;

  case 165: /* pointer: '*' pointer  */
#line 330 "parser.y"
                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p), newType(AST_NODE_TYPE_POINTER,  0)); }
#line 2661 "parser.tab.c"
    break;

  case 166: /* type-qualifier-list: type-qualifier  */
#line 333 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2667 "parser.tab.c"
    break;

  case 167: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 334 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2673 "parser.tab.c"
    break;

  case 182: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 364 "parser.y"
                                                            { }
#line 2679 "parser.tab.c"
    break;

  case 183: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 365 "parser.y"
                                                                   {}
#line 2685 "parser.tab.c"
    break;

  case 184: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 366 "parser.y"
                                             {}
#line 2691 "parser.tab.c"
    break;

  case 185: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 367 "parser.y"
                                        {}
#line 2697 "parser.tab.c"
    break;

  case 187: /* direct-abstract-declarator: '[' '*' ']'  */
#line 369 "parser.y"
                      { }
#line 2703 "parser.tab.c"
    break;

  case 188: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 370 "parser.y"
                                                                 { }
#line 2709 "parser.tab.c"
    break;

  case 189: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 371 "parser.y"
                                      { }
#line 2715 "parser.tab.c"
    break;

  case 190: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 372 "parser.y"
                                             { }
#line 2721 "parser.tab.c"
    break;


#line 2725 "parser.tab.c"

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

#line 402 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
