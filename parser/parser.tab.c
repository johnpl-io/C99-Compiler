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
  YYSYMBOL_stmts = 91,                     /* stmts  */
  YYSYMBOL_declaration_or_fndef = 92,      /* declaration_or_fndef  */
  YYSYMBOL_function_definition = 93,       /* function_definition  */
  YYSYMBOL_94_primary_expression = 94,     /* primary-expression  */
  YYSYMBOL_95_postfix_expression = 95,     /* postfix-expression  */
  YYSYMBOL_96_expression_list = 96,        /* expression-list  */
  YYSYMBOL_97_unary_expression = 97,       /* unary-expression  */
  YYSYMBOL_98_unary_operator = 98,         /* unary-operator  */
  YYSYMBOL_99_cast_expression = 99,        /* cast-expression  */
  YYSYMBOL_100_mult_expression = 100,      /* mult-expression  */
  YYSYMBOL_101_add_expression = 101,       /* add-expression  */
  YYSYMBOL_102_shift_expression = 102,     /* shift-expression  */
  YYSYMBOL_103_relational_expression = 103, /* relational-expression  */
  YYSYMBOL_104_equality_expression = 104,  /* equality-expression  */
  YYSYMBOL_105_bitwise_or_expression = 105, /* bitwise-or-expression  */
  YYSYMBOL_106_bitwise_xor_expression = 106, /* bitwise-xor-expression  */
  YYSYMBOL_107_bitwise_and_expression = 107, /* bitwise-and-expression  */
  YYSYMBOL_108_logical_or_expression = 108, /* logical-or-expression  */
  YYSYMBOL_109_logical_and_expression = 109, /* logical-and-expression  */
  YYSYMBOL_110_conditional_expression = 110, /* conditional-expression  */
  YYSYMBOL_111_assignment_expression = 111, /* assignment-expression  */
  YYSYMBOL_112_assignment_operator = 112,  /* assignment-operator  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_compound_statement = 114,       /* compound_statement  */
  YYSYMBOL_decl_or_stmt = 115,             /* decl_or_stmt  */
  YYSYMBOL_decl_or_stmt_list = 116,        /* decl_or_stmt_list  */
  YYSYMBOL_statement = 117,                /* statement  */
  YYSYMBOL_declaration = 118,              /* declaration  */
  YYSYMBOL_119_declaration_specifiers = 119, /* declaration-specifiers  */
  YYSYMBOL_120_init_declarator_list = 120, /* init-declarator-list  */
  YYSYMBOL_121_init_declarator = 121,      /* init-declarator  */
  YYSYMBOL_122_storage_class_specifier = 122, /* storage-class-specifier  */
  YYSYMBOL_123_type_specifier = 123,       /* type-specifier  */
  YYSYMBOL_124_struct_or_union_specifier = 124, /* struct-or-union-specifier  */
  YYSYMBOL_125_struct_or_union = 125,      /* struct-or-union  */
  YYSYMBOL_126_struct_declaration_list = 126, /* struct-declaration-list  */
  YYSYMBOL_127_struct_declaration = 127,   /* struct-declaration  */
  YYSYMBOL_128_specifier_qualifier_list = 128, /* specifier-qualifier-list  */
  YYSYMBOL_129_struct_declarator_list = 129, /* struct-declarator-list  */
  YYSYMBOL_130_struct_declarator = 130,    /* struct-declarator  */
  YYSYMBOL_131_enum_specifier = 131,       /* enum-specifier  */
  YYSYMBOL_132_enumerator_list = 132,      /* enumerator-list  */
  YYSYMBOL_enumerator = 133,               /* enumerator  */
  YYSYMBOL_134_type_qualifier = 134,       /* type-qualifier  */
  YYSYMBOL_135_function_specifier = 135,   /* function-specifier  */
  YYSYMBOL_declarator = 136,               /* declarator  */
  YYSYMBOL_137_direct_declarator = 137,    /* direct-declarator  */
  YYSYMBOL_pointer = 138,                  /* pointer  */
  YYSYMBOL_139_type_qualifier_list = 139,  /* type-qualifier-list  */
  YYSYMBOL_140_parameter_type_list = 140,  /* parameter-type-list  */
  YYSYMBOL_141_parameter_list = 141,       /* parameter-list  */
  YYSYMBOL_142_parameter_declaration = 142, /* parameter-declaration  */
  YYSYMBOL_143_identifier_list = 143,      /* identifier-list  */
  YYSYMBOL_144_abstract_declarator = 144,  /* abstract-declarator  */
  YYSYMBOL_145_direct_abstract_declarator = 145, /* direct-abstract-declarator  */
  YYSYMBOL_146_typedef_name = 146,         /* typedef-name  */
  YYSYMBOL_initializer = 147,              /* initializer  */
  YYSYMBOL_148_initializer_list = 148,     /* initializer-list  */
  YYSYMBOL_designation = 149,              /* designation  */
  YYSYMBOL_150_designator_list = 150,      /* designator-list  */
  YYSYMBOL_designator = 151                /* designator  */
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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   955

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  311

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
       0,    68,    68,    69,    72,    73,    76,    81,    82,    83,
      84,    85,    88,    89,    90,    91,    92,    93,    94,    95,
      97,    98,   102,   103,   104,   105,   106,   109,   110,   111,
     112,   113,   114,   116,   119,   120,   121,   122,   125,   126,
     127,   130,   131,   132,   135,   136,   137,   138,   139,   142,
     143,   144,   147,   148,   151,   152,   155,   156,   159,   160,
     163,   164,   167,   168,   171,   172,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   188,   189,   193,
     195,   196,   199,   200,   202,   203,   207,   208,   211,   212,
     213,   214,   215,   216,   217,   218,   221,   222,   225,   226,
     230,   231,   232,   233,   234,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     258,   259,   260,   263,   264,   267,   268,   271,   273,   274,
     275,   276,   278,   279,   281,   282,   283,   288,   289,   290,
     292,   293,   296,   297,   302,   303,   304,   307,   311,   312,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   329,   330,   331,   332,   335,   336,   339,   340,
     343,   344,   347,   348,   349,   352,   353,   361,   362,   363,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   377,
     382,   383,   384,   387,   388,   389,   390,   393,   396,   397,
     400,   401
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
  "stmts", "declaration_or_fndef", "function_definition",
  "primary-expression", "postfix-expression", "expression-list",
  "unary-expression", "unary-operator", "cast-expression",
  "mult-expression", "add-expression", "shift-expression",
  "relational-expression", "equality-expression", "bitwise-or-expression",
  "bitwise-xor-expression", "bitwise-and-expression",
  "logical-or-expression", "logical-and-expression",
  "conditional-expression", "assignment-expression", "assignment-operator",
  "expression", "compound_statement", "decl_or_stmt", "decl_or_stmt_list",
  "statement", "declaration", "declaration-specifiers",
  "init-declarator-list", "init-declarator", "storage-class-specifier",
  "type-specifier", "struct-or-union-specifier", "struct-or-union",
  "struct-declaration-list", "struct-declaration",
  "specifier-qualifier-list", "struct-declarator-list",
  "struct-declarator", "enum-specifier", "enumerator-list", "enumerator",
  "type-qualifier", "function-specifier", "declarator",
  "direct-declarator", "pointer", "type-qualifier-list",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "abstract-declarator", "direct-abstract-declarator",
  "typedef-name", "initializer", "initializer-list", "designation",
  "designator-list", "designator", YY_NULLPTR
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

#define YYTABLE_NINF (-190)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     816,  -189,  -189,  -189,  -189,  -189,    17,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,   709,  -189,  -189,  -189,
      11,   816,   816,  -189,    25,  -189,   816,   816,  -189,   -35,
      49,  -189,  -189,  -189,   114,    45,  -189,    86,  -189,   -19,
     -50,    26,  -189,  -189,   -22,   890,  -189,  -189,    49,    -1,
     -30,  -189,  -189,  -189,   114,    50,    45,  -189,   359,   286,
    -189,   502,   101,   -50,   890,   890,   183,  -189,     8,   890,
      81,   723,    13,  -189,  -189,  -189,  -189,    93,  -189,  -189,
    -189,  -189,   723,   723,   100,  -189,  -189,  -189,  -189,  -189,
    -189,   723,   308,  -189,    47,   382,   723,  -189,   -11,   -48,
      68,   105,   188,    70,   118,   130,     2,   193,  -189,  -189,
    -189,   855,  -189,   117,  -189,  -189,   109,  -189,  -189,    11,
      32,  -189,    41,   136,   141,  -189,    43,   650,   148,  -189,
     627,   223,  -189,  -189,  -189,   723,   146,  -189,   147,  -189,
    -189,    49,  -189,  -189,  -189,  -189,  -189,  -189,   723,    51,
     234,   723,   152,   110,   359,    61,  -189,   237,  -189,  -189,
     242,   604,   723,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,   723,  -189,   723,   723,   723,   723,
     723,   723,   723,   723,   723,   723,   723,   723,   723,   723,
     723,   723,   723,   723,   723,   723,  -189,  -189,   286,   443,
     731,  -189,     7,  -189,   119,  -189,   777,  -189,   246,   167,
     650,  -189,   723,   168,   169,  -189,  -189,     8,   723,    64,
    -189,  -189,   170,   172,  -189,   308,  -189,  -189,  -189,  -189,
    -189,  -189,    72,  -189,    74,  -189,  -189,  -189,  -189,   -11,
     -11,   -48,   -48,    68,    68,    68,    68,   105,   105,   118,
     130,   188,   193,   103,    70,  -189,  -189,   107,   173,   177,
     176,   178,   119,   541,   391,  -189,  -189,  -189,  -189,   180,
     182,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,   359,
    -189,   723,  -189,   723,  -189,  -189,  -189,  -189,  -189,   185,
     184,  -189,   190,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   189,   103,   106,   144,   111,     0,   101,   110,   147,
     108,   109,   104,   145,   107,   112,   102,   123,   100,   124,
     113,   105,   146,   114,   115,   116,     0,     2,     5,     4,
       0,    89,    91,   117,     0,   118,    93,    95,   119,   139,
       0,     1,     3,   150,   162,     0,    87,     0,    96,    98,
     149,     0,    88,    90,   122,     0,    92,    94,     0,   142,
       0,   140,   166,   165,   163,     0,     0,    86,     0,     0,
       6,     0,     0,   148,     0,   129,     0,   125,     0,   131,
       0,     0,     0,   167,   164,   151,    97,    98,     7,    10,
       9,     8,     0,     0,     0,    29,    31,    32,    27,    28,
      30,     0,     0,    12,    22,    33,     0,    34,    38,    41,
      44,    49,    56,    60,    52,    54,    62,    58,    64,   190,
      99,     7,    77,     0,    84,    82,     0,    81,    80,     0,
     189,   161,   174,     0,   168,   170,     0,     0,     0,   158,
       0,     0,   128,   121,   126,     0,   127,   132,   134,   130,
     137,     0,    33,   143,   138,   141,    23,    24,     0,     0,
       0,     0,   194,     0,     0,     0,   198,     0,    18,    19,
       0,     0,     0,    69,    70,    71,    67,    68,    72,    73,
      74,    75,    76,    66,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    79,     0,     0,
       0,   172,   177,   173,   179,   159,     0,   160,     0,     0,
       0,   157,     0,    32,     0,   120,   136,     0,     0,     0,
      11,   201,     0,     0,   191,     0,   193,   197,   199,    15,
      14,    17,     0,    20,     0,    65,    35,    36,    37,    40,
      39,    42,    43,    46,    48,    45,    47,    50,    51,    53,
      55,    57,    59,     0,    61,    78,    83,   189,     0,     0,
      32,     0,   178,     0,     0,   169,   171,   176,   154,     0,
       0,   156,   152,   133,   135,    26,   200,   192,   196,     0,
      16,     0,    13,     0,   187,   180,   185,   183,   188,     0,
      32,   182,     0,   153,   155,   195,    21,    63,   186,   184,
     181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,   245,  -189,  -189,  -189,  -189,   -68,  -189,   -94,
      18,    20,   -17,    21,    75,    73,    80,    96,  -189,    78,
     -79,   -64,  -189,   -88,   236,    89,  -189,  -189,   -60,     5,
    -189,   227,  -189,   -15,  -189,  -189,   224,   -58,    85,  -189,
      76,  -189,   241,   -65,   -29,  -189,   -27,   -43,   -37,    -9,
    -188,  -189,    84,  -189,    92,    90,  -189,   -96,  -189,    69,
    -189,   140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    28,   103,   104,   242,   152,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   122,   184,   123,   124,   125,   126,   127,    29,   132,
      47,    48,    31,    32,    33,    34,    76,    77,    78,   146,
     147,    35,    60,    61,    36,    37,    65,    50,    51,    64,
     133,   134,   135,   136,   213,   214,    38,   120,   163,   164,
     165,   166
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   105,   153,    49,   119,    30,   162,    63,    73,   128,
      43,    43,   185,   159,    43,    62,    59,   155,   144,   202,
      39,   268,   189,   190,   156,   157,    79,    84,    54,    43,
      71,    30,    72,   105,   105,    83,    52,    53,   119,    87,
      75,    56,    57,    62,    43,    79,    79,    79,    43,    58,
      79,   148,    59,    68,   167,   168,   169,    82,   186,    75,
      75,    75,    74,   140,    75,    69,   226,   187,   236,   105,
     229,    81,   105,   219,   129,   188,   224,    44,   191,   192,
      44,   203,   232,   144,   244,   299,   155,   209,    45,   210,
     105,    45,   246,   247,   248,   212,   105,   145,   154,    46,
     119,    40,    87,   105,   105,   211,    45,   243,    62,    55,
      44,    83,    79,  -175,    44,   263,   105,   193,   194,  -175,
     245,   209,   170,   210,   217,    45,    75,   171,   220,   172,
     218,    85,   230,   237,     4,   105,   160,   105,   205,   288,
     105,   265,   105,   161,   199,   285,   271,     4,   128,   284,
      13,   205,   105,   290,   105,   137,   279,   292,   280,   291,
     142,   205,    22,    13,   149,    68,   150,   105,   151,    73,
     138,   119,   212,    66,    67,    22,   253,   254,   255,   256,
     158,   195,   196,    44,   139,   200,     1,  -150,  -150,  -150,
     205,    83,   293,   305,   207,   234,   208,   235,   201,   273,
     148,   274,   197,   198,   205,   206,   105,   249,   250,   204,
     302,   251,   252,   129,   307,     3,     4,   215,   257,   258,
       5,   105,     6,   105,     8,   119,     1,   306,   216,    10,
      11,   221,    13,   227,    14,    15,   228,   231,    17,   233,
     239,    19,    20,    21,    22,   240,    23,    24,    25,   277,
     278,   281,   282,   286,   294,     3,     4,   287,   295,   296,
       5,   297,     6,   303,     8,   304,   308,   309,   143,    10,
      11,    42,    13,   310,    14,    15,   261,   264,    17,   259,
     262,    19,    20,    21,    22,    70,    23,    24,    25,   121,
      89,    90,    91,    86,    92,    93,   260,   266,   141,    80,
     276,   269,   272,   283,   289,   238,     0,     0,   225,     0,
       0,    88,    89,    90,    91,     2,    92,    93,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,    94,
      16,    17,     0,    18,    19,    20,    21,    22,     0,    23,
      24,    25,    95,     0,    96,    97,    98,    99,     0,   100,
       0,    94,    88,    89,    90,    91,   101,    92,    93,     0,
      69,     0,     0,     0,    95,     0,    96,    97,    98,    99,
       0,   100,     0,   160,     0,     0,     0,     0,   101,     0,
     161,     0,   102,     0,    88,    89,    90,    91,     0,    92,
      93,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,    96,    97,    98,
      99,     0,   100,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,   102,    94,     0,   267,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,    95,     0,    96,
     300,    98,    99,     0,   100,     0,     0,     0,     0,     0,
       0,   101,     2,     0,   301,     3,     4,     0,     0,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,   130,    23,    24,    25,     0,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   209,     0,   210,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     1,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,     0,    23,    24,    25,     0,     0,
       2,     0,     0,     3,     4,     0,     0,     0,     5,     0,
       6,     7,     8,   131,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,    25,    88,    89,    90,
      91,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,   298,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    94,    92,    93,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,    96,    97,    98,    99,    13,   100,     0,     0,
      94,   222,     0,     4,   101,   241,     0,     0,    22,     0,
       0,     0,     0,    95,     0,    96,   223,    98,    99,    13,
     100,     0,     0,    94,     0,     0,     0,   101,     0,    41,
       0,    22,     1,     0,     0,     0,    95,     0,    96,    97,
      98,    99,     0,   100,     0,     0,    88,    89,    90,    91,
     101,    92,    93,     0,    88,    89,    90,    91,     2,    92,
      93,     3,     4,     0,     0,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,    25,     0,    94,     0,     0,     0,
       1,     0,     0,     0,    94,     0,     0,     0,     0,    95,
       0,    96,    97,    98,    99,   275,   100,    95,     0,    96,
     270,    98,    99,   101,   100,     0,     2,     0,     0,     3,
       4,   101,     0,     0,     5,     0,     6,     7,     8,     1,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,     0,    18,    19,    20,    21,    22,     0,
      23,    24,    25,     0,     0,     2,     0,     0,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,  -189,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,     0,    23,
      24,    25,     0,     0,  -189,     0,     0,  -189,  -189,     0,
       0,     0,  -189,     1,  -189,  -189,  -189,     0,     0,     0,
    -189,  -189,  -189,  -189,  -189,     0,  -189,  -189,     0,  -189,
    -189,     0,  -189,  -189,  -189,  -189,  -189,     0,  -189,  -189,
    -189,     0,     3,     4,     0,     0,     0,     5,     0,     6,
       0,     8,     0,     0,     0,     0,    10,    11,     0,    13,
       0,    14,    15,     0,     0,    17,     0,     0,    19,    20,
      21,    22,     0,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      68,    69,    81,    30,    68,     0,   102,    44,    51,    69,
       3,     3,   106,   101,     3,    44,     3,    82,    76,    17,
       3,   209,    70,    71,    92,    93,    55,    64,     3,     3,
      80,    26,    82,   101,   102,    64,    31,    32,   102,    66,
      55,    36,    37,    72,     3,    74,    75,    76,     3,    84,
      79,    78,     3,    72,     7,     8,     9,    87,    69,    74,
      75,    76,    84,    72,    79,    84,   145,    78,   164,   137,
     158,    72,   140,   137,    69,    86,   140,    69,    10,    11,
      69,    79,   161,   141,   172,   273,   151,    80,    80,    82,
     158,    80,   186,   187,   188,   132,   164,    89,    85,    88,
     164,    84,   129,   171,   172,   132,    80,   171,   137,    84,
      69,   140,   141,    81,    69,   203,   184,    12,    13,    87,
     184,    80,    75,    82,    81,    80,   141,    80,   137,    82,
      87,    81,    81,    72,    33,   203,    75,   205,    87,   235,
     208,   205,   210,    82,    74,    81,   210,    33,   208,   228,
      49,    87,   220,    81,   222,    54,   220,    83,   222,    87,
      75,    87,    61,    49,    79,    72,    85,   235,    87,   212,
      69,   235,   209,    87,    88,    61,   193,   194,   195,   196,
      80,    76,    77,    69,    83,    67,     3,    80,    81,    82,
      87,   220,    89,   289,    85,    85,    87,    87,    68,    80,
     227,    82,    14,    15,    87,    88,   274,   189,   190,    16,
     274,   191,   192,   208,   293,    32,    33,    81,   197,   198,
      37,   289,    39,   291,    41,   289,     3,   291,    87,    46,
      47,    83,    49,    87,    51,    52,    89,     3,    55,    87,
       3,    58,    59,    60,    61,     3,    63,    64,    65,     3,
      83,    83,    83,    83,    81,    32,    33,    85,    81,    83,
      37,    83,    39,    83,    41,    83,    81,    83,    85,    46,
      47,    26,    49,    83,    51,    52,   201,   204,    55,   199,
     202,    58,    59,    60,    61,    49,    63,    64,    65,     3,
       4,     5,     6,    66,     8,     9,   200,   208,    74,    58,
     216,   209,   212,   227,   235,   165,    -1,    -1,    85,    -1,
      -1,     3,     4,     5,     6,    29,     8,     9,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    53,     3,     4,     5,     6,    80,     8,     9,    -1,
      84,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    84,    -1,     3,     4,     5,     6,    -1,     8,
       9,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    53,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    29,    -1,    83,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,     3,    63,    64,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,     3,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    81,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    53,     8,     9,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    49,    73,    -1,    -1,
      53,    54,    -1,    33,    80,    81,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    49,
      73,    -1,    -1,    53,    -1,    -1,    -1,    80,    -1,     0,
      -1,    61,     3,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    -1,     3,     4,     5,     6,
      80,     8,     9,    -1,     3,     4,     5,     6,    29,     8,
       9,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    -1,    53,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    18,    73,    66,    -1,    68,
      69,    70,    71,    80,    73,    -1,    29,    -1,    -1,    32,
      33,    80,    -1,    -1,    37,    -1,    39,    40,    41,     3,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    -1,    29,    -1,    -1,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,     3,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    29,    -1,    -1,    32,    33,    -1,
      -1,    -1,    37,     3,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    32,    33,    37,    39,    40,    41,    45,
      46,    47,    48,    49,    51,    52,    54,    55,    57,    58,
      59,    60,    61,    63,    64,    65,    91,    92,    93,   118,
     119,   122,   123,   124,   125,   131,   134,   135,   146,     3,
      84,     0,    92,     3,    69,    80,    88,   120,   121,   136,
     137,   138,   119,   119,     3,    84,   119,   119,    84,     3,
     132,   133,   134,   138,   139,   136,    87,    88,    72,    84,
     114,    80,    82,   137,    84,   123,   126,   127,   128,   134,
     132,    72,    87,   134,   138,    81,   121,   136,     3,     4,
       5,     6,     8,     9,    53,    66,    68,    69,    70,    71,
      73,    80,    84,    94,    95,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     147,     3,   111,   113,   114,   115,   116,   117,   118,   119,
       3,    81,   119,   140,   141,   142,   143,    54,    69,    83,
     139,   126,   128,    85,   127,    89,   129,   130,   136,   128,
      85,    87,    97,   110,    85,   133,    97,    97,    80,   113,
      75,    82,   147,   148,   149,   150,   151,     7,     8,     9,
      75,    80,    82,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    72,   112,    99,    69,    78,    86,    70,
      71,    10,    11,    12,    13,    76,    77,    14,    15,    74,
      67,    68,    17,    79,    16,    87,    88,    85,    87,    80,
      82,   136,   138,   144,   145,    81,    87,    81,    87,   111,
     139,    83,    54,    69,   111,    85,   110,    87,    89,   113,
      81,     3,   110,    87,    85,    87,   147,    72,   151,     3,
       3,    81,    96,   111,   113,   111,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   103,   103,   106,
     107,   104,   109,   113,   105,   111,   115,     3,   140,   144,
      69,   111,   145,    80,    82,    18,   142,     3,    83,   111,
     111,    83,    83,   130,   110,    81,    83,    85,   147,   149,
      81,    87,    83,    89,    81,    81,    83,    83,    81,   140,
      69,    83,   111,    83,    83,   147,   111,   110,    81,    83,
      83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    99,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   125,   125,   126,   126,   127,   128,   128,
     128,   128,   129,   129,   130,   130,   130,   131,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   135,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   143,   143,   144,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     147,   147,   147,   148,   148,   148,   148,   149,   150,   150,
     151,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     4,     3,     3,     4,     3,     2,     2,
       1,     3,     1,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     3,     1,     2,     3,     2,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     2,     2,     1,
       2,     1,     1,     3,     1,     3,     2,     5,     5,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     5,     6,     5,     6,     5,     4,     3,     4,
       4,     3,     1,     2,     3,     2,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       3,     4,     3,     3,     4,     3,     4,     3,     3,     1,
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
  case 2: /* stmts: declaration_or_fndef  */
#line 68 "parser.y"
                             {  }
#line 1872 "parser.tab.c"
    break;

  case 3: /* stmts: stmts declaration_or_fndef  */
#line 69 "parser.y"
                                       { }
#line 1878 "parser.tab.c"
    break;

  case 4: /* declaration_or_fndef: declaration  */
#line 72 "parser.y"
                                   { }
#line 1884 "parser.tab.c"
    break;

  case 5: /* declaration_or_fndef: function_definition  */
#line 73 "parser.y"
                                          { }
#line 1890 "parser.tab.c"
    break;

  case 7: /* primary-expression: IDENT  */
#line 81 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1896 "parser.tab.c"
    break;

  case 8: /* primary-expression: NUMBER  */
#line 82 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 1902 "parser.tab.c"
    break;

  case 9: /* primary-expression: STRING  */
#line 83 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal));  }
#line 1908 "parser.tab.c"
    break;

  case 10: /* primary-expression: CHARLIT  */
#line 84 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 1914 "parser.tab.c"
    break;

  case 11: /* primary-expression: '(' expression ')'  */
#line 85 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 1920 "parser.tab.c"
    break;

  case 12: /* postfix-expression: primary-expression  */
#line 88 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 1926 "parser.tab.c"
    break;

  case 13: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 89 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 1932 "parser.tab.c"
    break;

  case 14: /* postfix-expression: postfix-expression '.' IDENT  */
#line 90 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 1938 "parser.tab.c"
    break;

  case 15: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 91 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 1944 "parser.tab.c"
    break;

  case 16: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 92 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 1950 "parser.tab.c"
    break;

  case 17: /* postfix-expression: postfix-expression '(' ')'  */
#line 93 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 1956 "parser.tab.c"
    break;

  case 18: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 94 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 1962 "parser.tab.c"
    break;

  case 19: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 95 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 1968 "parser.tab.c"
    break;

  case 20: /* expression-list: assignment-expression  */
#line 97 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 1974 "parser.tab.c"
    break;

  case 21: /* expression-list: expression-list ',' assignment-expression  */
#line 98 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 1980 "parser.tab.c"
    break;

  case 22: /* unary-expression: postfix-expression  */
#line 102 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 1986 "parser.tab.c"
    break;

  case 23: /* unary-expression: PLUSPLUS unary-expression  */
#line 103 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 1992 "parser.tab.c"
    break;

  case 24: /* unary-expression: MINUSMINUS unary-expression  */
#line 104 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 1998 "parser.tab.c"
    break;

  case 25: /* unary-expression: unary-operator cast-expression  */
#line 105 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2004 "parser.tab.c"
    break;

  case 26: /* unary-expression: SIZEOF '(' expression ')'  */
#line 106 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2010 "parser.tab.c"
    break;

  case 27: /* unary-operator: '-'  */
#line 109 "parser.y"
                    { (yyval.op) = '-'; }
#line 2016 "parser.tab.c"
    break;

  case 28: /* unary-operator: '+'  */
#line 110 "parser.y"
                      { (yyval.op) = '+';  }
#line 2022 "parser.tab.c"
    break;

  case 29: /* unary-operator: '!'  */
#line 111 "parser.y"
                      {(yyval.op) = '!'; }
#line 2028 "parser.tab.c"
    break;

  case 30: /* unary-operator: '~'  */
#line 112 "parser.y"
                      {(yyval.op) = '~'; }
#line 2034 "parser.tab.c"
    break;

  case 31: /* unary-operator: '&'  */
#line 113 "parser.y"
                      {(yyval.op) = '&'; }
#line 2040 "parser.tab.c"
    break;

  case 32: /* unary-operator: '*'  */
#line 114 "parser.y"
                      {(yyval.op) = '*'; }
#line 2046 "parser.tab.c"
    break;

  case 33: /* cast-expression: unary-expression  */
#line 116 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2052 "parser.tab.c"
    break;

  case 34: /* mult-expression: cast-expression  */
#line 119 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2058 "parser.tab.c"
    break;

  case 35: /* mult-expression: mult-expression '*' cast-expression  */
#line 120 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2064 "parser.tab.c"
    break;

  case 36: /* mult-expression: mult-expression '/' cast-expression  */
#line 121 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2070 "parser.tab.c"
    break;

  case 37: /* mult-expression: mult-expression '%' cast-expression  */
#line 122 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2076 "parser.tab.c"
    break;

  case 38: /* add-expression: mult-expression  */
#line 125 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2082 "parser.tab.c"
    break;

  case 39: /* add-expression: add-expression '+' mult-expression  */
#line 126 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2088 "parser.tab.c"
    break;

  case 40: /* add-expression: add-expression '-' mult-expression  */
#line 127 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2094 "parser.tab.c"
    break;

  case 41: /* shift-expression: add-expression  */
#line 130 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2100 "parser.tab.c"
    break;

  case 42: /* shift-expression: shift-expression SHL add-expression  */
#line 131 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2106 "parser.tab.c"
    break;

  case 43: /* shift-expression: shift-expression SHR add-expression  */
#line 132 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2112 "parser.tab.c"
    break;

  case 44: /* relational-expression: shift-expression  */
#line 135 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2118 "parser.tab.c"
    break;

  case 45: /* relational-expression: relational-expression '<' shift-expression  */
#line 136 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2124 "parser.tab.c"
    break;

  case 46: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 137 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2130 "parser.tab.c"
    break;

  case 47: /* relational-expression: relational-expression '>' shift-expression  */
#line 138 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2136 "parser.tab.c"
    break;

  case 48: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 139 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2142 "parser.tab.c"
    break;

  case 49: /* equality-expression: relational-expression  */
#line 142 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2148 "parser.tab.c"
    break;

  case 50: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 143 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2154 "parser.tab.c"
    break;

  case 51: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 144 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2160 "parser.tab.c"
    break;

  case 52: /* bitwise-or-expression: bitwise-xor-expression  */
#line 147 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2166 "parser.tab.c"
    break;

  case 53: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 148 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2172 "parser.tab.c"
    break;

  case 54: /* bitwise-xor-expression: bitwise-and-expression  */
#line 151 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2178 "parser.tab.c"
    break;

  case 55: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 152 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2184 "parser.tab.c"
    break;

  case 56: /* bitwise-and-expression: equality-expression  */
#line 155 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2190 "parser.tab.c"
    break;

  case 57: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 156 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2196 "parser.tab.c"
    break;

  case 58: /* logical-or-expression: logical-and-expression  */
#line 159 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2202 "parser.tab.c"
    break;

  case 59: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 160 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2208 "parser.tab.c"
    break;

  case 60: /* logical-and-expression: bitwise-or-expression  */
#line 163 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2214 "parser.tab.c"
    break;

  case 61: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 164 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2220 "parser.tab.c"
    break;

  case 62: /* conditional-expression: logical-or-expression  */
#line 167 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2226 "parser.tab.c"
    break;

  case 63: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 168 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2232 "parser.tab.c"
    break;

  case 64: /* assignment-expression: conditional-expression  */
#line 171 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2238 "parser.tab.c"
    break;

  case 65: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 172 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2244 "parser.tab.c"
    break;

  case 66: /* assignment-operator: '='  */
#line 176 "parser.y"
                         {(yyval.op) = '='; }
#line 2250 "parser.tab.c"
    break;

  case 67: /* assignment-operator: PLUSEQ  */
#line 177 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2256 "parser.tab.c"
    break;

  case 68: /* assignment-operator: MINUSEQ  */
#line 178 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2262 "parser.tab.c"
    break;

  case 69: /* assignment-operator: TIMESEQ  */
#line 179 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2268 "parser.tab.c"
    break;

  case 70: /* assignment-operator: DIVEQ  */
#line 180 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2274 "parser.tab.c"
    break;

  case 71: /* assignment-operator: MODEQ  */
#line 181 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2280 "parser.tab.c"
    break;

  case 72: /* assignment-operator: SHLEQ  */
#line 182 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2286 "parser.tab.c"
    break;

  case 73: /* assignment-operator: SHREQ  */
#line 183 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2292 "parser.tab.c"
    break;

  case 74: /* assignment-operator: ANDEQ  */
#line 184 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2298 "parser.tab.c"
    break;

  case 75: /* assignment-operator: OREQ  */
#line 185 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2304 "parser.tab.c"
    break;

  case 76: /* assignment-operator: XOREQ  */
#line 186 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2310 "parser.tab.c"
    break;

  case 77: /* expression: assignment-expression  */
#line 188 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2316 "parser.tab.c"
    break;

  case 78: /* expression: expression ',' assignment-expression  */
#line 189 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2322 "parser.tab.c"
    break;

  case 80: /* decl_or_stmt: declaration  */
#line 195 "parser.y"
                          { }
#line 2328 "parser.tab.c"
    break;

  case 81: /* decl_or_stmt: statement  */
#line 196 "parser.y"
                {}
#line 2334 "parser.tab.c"
    break;

  case 82: /* decl_or_stmt_list: decl_or_stmt  */
#line 199 "parser.y"
                                 {  }
#line 2340 "parser.tab.c"
    break;

  case 83: /* decl_or_stmt_list: decl_or_stmt_list ',' decl_or_stmt  */
#line 200 "parser.y"
                                                     {   }
#line 2346 "parser.tab.c"
    break;


#line 2350 "parser.tab.c"

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

#line 404 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
