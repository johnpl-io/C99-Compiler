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
  YYSYMBOL_143_abstract_declarator = 143,  /* abstract-declarator  */
  YYSYMBOL_144_direct_abstract_declarator = 144, /* direct-abstract-declarator  */
  YYSYMBOL_145_typedef_name = 145,         /* typedef-name  */
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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   972

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  308

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
      95,    96,    97,    98,    99,   101,   102,   106,   107,   108,
     109,   110,   113,   114,   115,   116,   117,   118,   120,   123,
     124,   125,   126,   129,   130,   131,   134,   135,   136,   139,
     140,   141,   142,   143,   146,   147,   148,   151,   152,   155,
     156,   159,   160,   163,   164,   167,   168,   171,   172,   175,
     176,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   192,   193,   199,   200,   203,   204,   205,   206,
     207,   208,   209,   210,   213,   214,   217,   218,   222,   223,
     224,   225,   226,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   250,   251,
     252,   255,   256,   259,   260,   263,   265,   266,   267,   268,
     270,   271,   273,   274,   275,   280,   281,   282,   284,   285,
     288,   289,   294,   295,   296,   299,   303,   304,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     321,   322,   323,   324,   327,   328,   331,   332,   335,   336,
     339,   340,   341,   344,   345,   353,   354,   355,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   369,   374,   375,
     376,   379,   380,   381,   382,   385,   388,   389,   392,   393
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

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-188)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     765,  -137,  -137,  -137,  -137,  -137,    14,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,    43,  -137,  -137,    11,
     765,   765,  -137,    17,  -137,   765,   765,  -137,   -31,    61,
    -137,  -137,   111,     9,  -137,    53,  -137,   -61,   -50,    15,
    -137,  -137,    27,   907,  -137,  -137,    61,    46,    36,  -137,
    -137,  -137,   111,    56,     9,  -137,   178,   381,  -137,   558,
      96,   -50,   907,   907,   283,  -137,     5,   907,   -35,   779,
       7,  -137,  -137,  -137,  -137,    76,  -137,  -137,  -137,  -137,
     779,   779,    88,  -137,  -137,  -137,  -137,  -137,  -137,   779,
     403,  -137,   119,   469,   779,  -137,    52,   136,   200,    55,
     201,    59,   106,    95,    -2,   177,  -137,  -137,  -137,   872,
    -137,   224,  -137,  -137,  -137,   130,  -137,    11,   -59,  -137,
      37,   117,   113,  -137,    -6,   706,   121,  -137,   683,   318,
    -137,  -137,  -137,   779,   125,  -137,   132,  -137,  -137,    61,
    -137,  -137,  -137,  -137,  -137,  -137,   779,    74,   199,   779,
     127,    66,   178,    87,  -137,   205,  -137,  -137,   216,   660,
     779,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,   779,  -137,   779,   779,   779,   779,   779,   779,
     779,   779,   779,   779,   779,   779,   779,   779,   779,   779,
     779,   779,   779,  -137,  -137,   779,  -137,   499,   787,  -137,
      42,  -137,   108,  -137,   833,  -137,   220,   142,   706,  -137,
     779,   153,   158,  -137,  -137,     5,   779,    83,  -137,  -137,
     159,   160,  -137,   403,  -137,  -137,  -137,  -137,  -137,  -137,
     104,  -137,   -52,  -137,  -137,  -137,  -137,    52,    52,   136,
     136,   200,   200,   200,   200,    55,    55,   106,    95,   201,
     177,   -68,    59,  -137,   115,   162,   169,   171,   172,   108,
     597,   454,  -137,  -137,  -137,  -137,   176,   183,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,   178,  -137,   779,  -137,
     779,  -137,  -137,  -137,  -137,  -137,   179,   184,  -137,   185,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   187,   101,   104,   142,   109,     0,    99,   108,   145,
     106,   107,   102,   143,   105,   110,   100,   121,    98,   122,
     111,   103,   144,   112,   113,   114,     0,     3,     2,     0,
      87,    89,   115,     0,   116,    91,    93,   117,   137,     0,
       1,   148,   160,     0,    85,     0,    94,    96,   147,     0,
      86,    88,   120,     0,    90,    92,     0,   140,     0,   138,
     164,   163,   161,     0,     0,    84,     0,     0,     4,     0,
       0,   146,     0,   127,     0,   123,     0,   129,     0,     0,
       0,   165,   162,   149,    95,    96,    12,    15,    14,    13,
       0,     0,     0,    34,    36,    37,    32,    33,    35,     0,
       0,    17,    27,    38,     0,    39,    43,    46,    49,    54,
      61,    65,    57,    59,    67,    63,    69,   188,    97,    12,
      10,     0,     6,     9,    82,     0,     8,     0,   187,   159,
     172,     0,   166,   168,     0,     0,     0,   156,     0,     0,
     126,   119,   124,     0,   125,   130,   132,   128,   135,     0,
      38,   141,   136,   139,    28,    29,     0,     0,     0,     0,
     192,     0,     0,     0,   196,     0,    23,    24,     0,     0,
       0,    74,    75,    76,    72,    73,    77,    78,    79,    80,
      81,    71,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     7,     0,    11,     0,     0,   170,
     175,   171,   177,   157,     0,   158,     0,     0,     0,   155,
       0,    37,     0,   118,   134,     0,     0,     0,    16,   199,
       0,     0,   189,     0,   191,   195,   197,    20,    19,    22,
       0,    25,     0,    70,    40,    41,    42,    45,    44,    47,
      48,    51,    53,    50,    52,    55,    56,    58,    60,    62,
      64,     0,    66,    83,   187,     0,     0,    37,     0,   176,
       0,     0,   167,   169,   174,   152,     0,     0,   154,   150,
     131,   133,    31,   198,   190,   194,     0,    21,     0,    18,
       0,   185,   178,   183,   181,   186,     0,    37,   180,     0,
     151,   153,   193,    26,    68,   184,   182,   179
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,   227,  -137,   131,  -137,  -137,  -137,  -137,
     -66,  -137,   -98,    47,    48,   -16,    44,    81,    89,    99,
     100,  -137,   101,   -77,   -62,  -137,   -86,   299,    26,  -137,
     236,  -137,   -14,  -137,  -137,   230,   -37,     6,  -137,    78,
    -137,   249,   -39,   -26,  -137,   -22,   -44,   -33,   -21,  -136,
    -137,    92,  -137,   103,    97,  -137,   -97,  -137,    79,  -137,
     148
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,   120,   121,   122,   123,   101,   102,   240,
     150,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   124,   182,   125,   126,   130,    45,
      46,    30,    31,    32,    33,    74,    75,    76,   144,   145,
      34,    58,    59,    35,    36,    63,    48,    49,    62,   131,
     132,   133,   134,   211,   212,    37,   118,   161,   162,   163,
     164
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   103,   151,   160,   117,    71,   183,    47,    41,    61,
      57,    66,    41,   157,    41,   200,    60,    38,    41,   205,
      52,   290,  -173,    67,   154,   155,    29,    77,  -173,    82,
      69,   289,    70,   103,   103,   205,    81,   142,   117,    73,
      41,   153,    85,    40,    60,    41,    77,    77,    77,   138,
     148,    77,   149,    56,   146,   103,    50,    51,    73,    73,
      73,    54,    55,    73,    57,   234,   224,   191,   192,   103,
     227,   265,   103,   217,    42,   215,   222,   201,    42,   140,
      42,   216,   230,   147,   242,    43,   244,   245,   246,    43,
     103,    43,   152,   127,   143,    43,   103,   210,    39,    44,
     117,    53,   142,   103,   103,    85,    42,   241,   209,    60,
     153,    72,    81,    77,   218,   261,   103,   207,    79,   208,
     243,   184,   207,    80,   208,    73,   165,   166,   167,     4,
     185,   193,   194,   197,   296,   103,   285,    83,   186,   103,
      64,    65,   103,   263,     4,    13,   268,   127,    66,   281,
     135,   232,   103,   233,   103,   228,   276,    22,   277,   235,
      13,   205,   158,   199,   282,   136,    71,   103,   156,   159,
     205,   117,    22,   198,   210,   251,   252,   253,   254,   137,
      42,    86,    87,    88,    89,   287,    90,    91,   270,   302,
     271,   288,    81,   202,   168,  -148,  -148,  -148,   213,   169,
     214,   170,   229,   146,   219,   103,   187,   188,   237,   299,
     189,   190,   225,   304,   231,   195,   196,   205,   206,   238,
     103,   226,   103,   274,   117,   275,   303,   119,    87,    88,
      89,    92,    90,    91,   247,   248,   278,   249,   250,   255,
     256,   279,   283,   291,    93,   284,    94,    95,    96,    97,
     292,    98,   204,     2,   293,   294,     3,     4,    99,   300,
     305,     5,   100,     6,     7,     8,   301,   306,   307,     9,
      10,    11,    12,    13,    68,    14,    15,    92,    16,    17,
     259,    18,    19,    20,    21,    22,     1,    23,    24,    25,
      93,   262,    94,    95,    96,    97,   257,    98,   258,    28,
      84,   260,   139,   280,    99,    78,   273,   269,    67,   203,
     266,   236,   286,     0,     0,     3,     4,     0,     0,     0,
       5,     1,     6,     0,     8,     0,     0,     0,     0,    10,
      11,     0,    13,     0,    14,    15,     0,     0,    17,     0,
       0,    19,    20,    21,    22,     0,    23,    24,    25,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     0,     8,
       0,     0,     0,     0,    10,    11,     0,    13,   141,    14,
      15,     0,     0,    17,     0,     0,    19,    20,    21,    22,
       0,    23,    24,    25,   119,    87,    88,    89,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,    86,    87,    88,    89,
       2,    90,    91,     3,     4,     0,     0,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    92,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,    25,    93,     0,    94,
      95,    96,    97,     0,    98,     0,    92,    86,    87,    88,
      89,    99,    90,    91,     0,    67,     0,     0,     0,    93,
       0,    94,    95,    96,    97,     0,    98,     0,   158,     0,
       0,     0,     0,    99,     0,   159,     0,   100,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
       0,     0,   264,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,    94,   297,    96,    97,     0,    98,     2,     0,
       0,     3,     4,     0,    99,     0,     5,   298,     6,     7,
       8,   181,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,   128,    23,    24,    25,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
       0,   208,     0,     0,     0,     0,     0,     2,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       1,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
       0,    23,    24,    25,     0,     0,     2,     0,     0,     3,
       4,     0,     0,     0,     5,     0,     6,     7,     8,   129,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,     0,    18,    19,    20,    21,    22,     0,
      23,    24,    25,    86,    87,    88,    89,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
       0,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    90,    91,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    13,    98,     0,     0,    92,   220,     0,     4,
      99,   239,     0,     0,    22,     0,     0,     0,     0,    93,
       0,    94,   221,    96,    97,    13,    98,     0,     0,    92,
       0,     0,     0,    99,     0,     0,     0,    22,     1,     0,
       0,     0,    93,     0,    94,    95,    96,    97,     0,    98,
       0,     0,    86,    87,    88,    89,    99,    90,    91,     0,
      86,    87,    88,    89,     2,    90,    91,     3,     4,     0,
       0,     0,     5,     0,     6,     7,     8,     0,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,     0,    16,
      17,     0,    18,    19,    20,    21,    22,     0,    23,    24,
      25,     0,    92,     0,     0,     0,     1,     0,     0,     0,
      92,     0,     0,     0,     0,    93,     0,    94,    95,    96,
      97,   272,    98,    93,     0,    94,   267,    96,    97,    99,
      98,     0,     2,     0,     0,     3,     4,    99,     0,     0,
       5,     0,     6,     7,     8,  -187,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,    25,     0,
       0,  -187,     0,     0,  -187,  -187,     0,     0,     0,  -187,
       1,  -187,  -187,  -187,     0,     0,     0,  -187,  -187,  -187,
    -187,  -187,     0,  -187,  -187,     0,  -187,  -187,     0,  -187,
    -187,  -187,  -187,  -187,     0,  -187,  -187,  -187,     0,     3,
       4,     0,     0,     0,     5,     0,     6,     0,     8,     0,
       0,     0,     0,    10,    11,     0,    13,     0,    14,    15,
       0,     0,    17,     0,     0,    19,    20,    21,    22,     0,
      23,    24,    25
};

static const yytype_int16 yycheck[] =
{
      66,    67,    79,   100,    66,    49,   104,    29,     3,    42,
       3,    72,     3,    99,     3,    17,    42,     3,     3,    87,
       3,    89,    81,    84,    90,    91,     0,    53,    87,    62,
      80,    83,    82,    99,   100,    87,    62,    74,   100,    53,
       3,    80,    64,     0,    70,     3,    72,    73,    74,    70,
      85,    77,    87,    84,    76,   121,    30,    31,    72,    73,
      74,    35,    36,    77,     3,   162,   143,    12,    13,   135,
     156,   207,   138,   135,    69,    81,   138,    79,    69,    73,
      69,    87,   159,    77,   170,    80,   184,   185,   186,    80,
     156,    80,    85,    67,    89,    80,   162,   130,    84,    88,
     162,    84,   139,   169,   170,   127,    69,   169,   130,   135,
     149,    84,   138,   139,   135,   201,   182,    80,    72,    82,
     182,    69,    80,    87,    82,   139,     7,     8,     9,    33,
      78,    76,    77,    74,   270,   201,   233,    81,    86,   205,
      87,    88,   208,   205,    33,    49,   208,   121,    72,   226,
      54,    85,   218,    87,   220,    81,   218,    61,   220,    72,
      49,    87,    75,    68,    81,    69,   210,   233,    80,    82,
      87,   233,    61,    67,   207,   191,   192,   193,   194,    83,
      69,     3,     4,     5,     6,    81,     8,     9,    80,   286,
      82,    87,   218,    16,    75,    80,    81,    82,    81,    80,
      87,    82,     3,   225,    83,   271,    70,    71,     3,   271,
      10,    11,    87,   290,    87,    14,    15,    87,    88,     3,
     286,    89,   288,     3,   286,    83,   288,     3,     4,     5,
       6,    53,     8,     9,   187,   188,    83,   189,   190,   195,
     196,    83,    83,    81,    66,    85,    68,    69,    70,    71,
      81,    73,   121,    29,    83,    83,    32,    33,    80,    83,
      81,    37,    84,    39,    40,    41,    83,    83,    83,    45,
      46,    47,    48,    49,    47,    51,    52,    53,    54,    55,
     199,    57,    58,    59,    60,    61,     3,    63,    64,    65,
      66,   202,    68,    69,    70,    71,   197,    73,   198,     0,
      64,   200,    72,   225,    80,    56,   214,   210,    84,    85,
     207,   163,   233,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,     3,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    -1,    51,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    47,    -1,    49,    85,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,     3,     4,     5,     6,
      29,     8,     9,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    -1,    73,    -1,    53,     3,     4,     5,
       6,    80,     8,     9,    -1,    84,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,    84,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    29,    -1,
      -1,    32,    33,    -1,    80,    -1,    37,    83,    39,    40,
      41,    72,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,     3,    63,    64,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
       3,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    -1,    29,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,    81,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    53,     8,     9,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    49,    73,    -1,    -1,    53,    54,    -1,    33,
      80,    81,    -1,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    49,    73,    -1,    -1,    53,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    61,     3,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    -1,     3,     4,     5,     6,    80,     8,     9,    -1,
       3,     4,     5,     6,    29,     8,     9,    32,    33,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    53,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    18,    73,    66,    -1,    68,    69,    70,    71,    80,
      73,    -1,    29,    -1,    -1,    32,    33,    80,    -1,    -1,
      37,    -1,    39,    40,    41,     3,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
       3,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    32,    33,    37,    39,    40,    41,    45,
      46,    47,    48,    49,    51,    52,    54,    55,    57,    58,
      59,    60,    61,    63,    64,    65,    91,    92,   117,   118,
     121,   122,   123,   124,   130,   133,   134,   145,     3,    84,
       0,     3,    69,    80,    88,   119,   120,   135,   136,   137,
     118,   118,     3,    84,   118,   118,    84,     3,   131,   132,
     133,   137,   138,   135,    87,    88,    72,    84,    93,    80,
      82,   136,    84,   122,   125,   126,   127,   133,   131,    72,
      87,   133,   137,    81,   120,   135,     3,     4,     5,     6,
       8,     9,    53,    66,    68,    69,    70,    71,    73,    80,
      84,    97,    98,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   146,     3,
      93,    94,    95,    96,   114,   116,   117,   118,     3,    81,
     118,   139,   140,   141,   142,    54,    69,    83,   138,   125,
     127,    85,   126,    89,   128,   129,   135,   127,    85,    87,
     100,   113,    85,   132,   100,   100,    80,   116,    75,    82,
     146,   147,   148,   149,   150,     7,     8,     9,    75,    80,
      82,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    72,   115,   102,    69,    78,    86,    70,    71,    10,
      11,    12,    13,    76,    77,    14,    15,    74,    67,    68,
      17,    79,    16,    85,    95,    87,    88,    80,    82,   135,
     137,   143,   144,    81,    87,    81,    87,   114,   138,    83,
      54,    69,   114,    85,   113,    87,    89,   116,    81,     3,
     113,    87,    85,    87,   146,    72,   150,     3,     3,    81,
      99,   114,   116,   114,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   106,   106,   109,   110,   107,
     112,   116,   108,   114,     3,   139,   143,    69,   114,   144,
      80,    82,    18,   141,     3,    83,   114,   114,    83,    83,
     129,   113,    81,    83,    85,   146,   148,    81,    87,    83,
      89,    81,    81,    83,    83,    81,   139,    69,    83,   114,
      83,    83,   146,   114,   113,    81,    83,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   103,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   120,   120,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   126,   127,   127,   127,   127,
     128,   128,   129,   129,   129,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   146,   146,
     146,   147,   147,   147,   147,   148,   149,   149,   150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       3,     4,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     2,     2,     1,     2,     1,
       1,     3,     1,     3,     2,     5,     5,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     6,     5,     6,     5,     4,     3,     4,     4,     3,
       1,     2,     3,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     3,     4,
       3,     3,     4,     3,     4,     3,     3,     1,     1,     3,
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
  case 11: /* stmt: expression ';'  */
#line 81 "parser.y"
                     { astwalk_impl((yyvsp[-1].astnode_p), 0); }
#line 1869 "parser.tab.c"
    break;

  case 12: /* primary-expression: IDENT  */
#line 85 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1875 "parser.tab.c"
    break;

  case 13: /* primary-expression: NUMBER  */
#line 86 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 1881 "parser.tab.c"
    break;

  case 14: /* primary-expression: STRING  */
#line 87 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal));  }
#line 1887 "parser.tab.c"
    break;

  case 15: /* primary-expression: CHARLIT  */
#line 88 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 1893 "parser.tab.c"
    break;

  case 16: /* primary-expression: '(' expression ')'  */
#line 89 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 1899 "parser.tab.c"
    break;

  case 17: /* postfix-expression: primary-expression  */
#line 92 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 1905 "parser.tab.c"
    break;

  case 18: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 93 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 1911 "parser.tab.c"
    break;

  case 19: /* postfix-expression: postfix-expression '.' IDENT  */
#line 94 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 1917 "parser.tab.c"
    break;

  case 20: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 95 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 1923 "parser.tab.c"
    break;

  case 21: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 96 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 1929 "parser.tab.c"
    break;

  case 22: /* postfix-expression: postfix-expression '(' ')'  */
#line 97 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 1935 "parser.tab.c"
    break;

  case 23: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 98 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 1941 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 99 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 1947 "parser.tab.c"
    break;

  case 25: /* expression-list: assignment-expression  */
#line 101 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 1953 "parser.tab.c"
    break;

  case 26: /* expression-list: expression-list ',' assignment-expression  */
#line 102 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 1959 "parser.tab.c"
    break;

  case 27: /* unary-expression: postfix-expression  */
#line 106 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 1965 "parser.tab.c"
    break;

  case 28: /* unary-expression: PLUSPLUS unary-expression  */
#line 107 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 1971 "parser.tab.c"
    break;

  case 29: /* unary-expression: MINUSMINUS unary-expression  */
#line 108 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 1977 "parser.tab.c"
    break;

  case 30: /* unary-expression: unary-operator cast-expression  */
#line 109 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 1983 "parser.tab.c"
    break;

  case 31: /* unary-expression: SIZEOF '(' expression ')'  */
#line 110 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 1989 "parser.tab.c"
    break;

  case 32: /* unary-operator: '-'  */
#line 113 "parser.y"
                    { (yyval.op) = '-'; }
#line 1995 "parser.tab.c"
    break;

  case 33: /* unary-operator: '+'  */
#line 114 "parser.y"
                      { (yyval.op) = '+';  }
#line 2001 "parser.tab.c"
    break;

  case 34: /* unary-operator: '!'  */
#line 115 "parser.y"
                      {(yyval.op) = '!'; }
#line 2007 "parser.tab.c"
    break;

  case 35: /* unary-operator: '~'  */
#line 116 "parser.y"
                      {(yyval.op) = '~'; }
#line 2013 "parser.tab.c"
    break;

  case 36: /* unary-operator: '&'  */
#line 117 "parser.y"
                      {(yyval.op) = '&'; }
#line 2019 "parser.tab.c"
    break;

  case 37: /* unary-operator: '*'  */
#line 118 "parser.y"
                      {(yyval.op) = '*'; }
#line 2025 "parser.tab.c"
    break;

  case 38: /* cast-expression: unary-expression  */
#line 120 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2031 "parser.tab.c"
    break;

  case 39: /* mult-expression: cast-expression  */
#line 123 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2037 "parser.tab.c"
    break;

  case 40: /* mult-expression: mult-expression '*' cast-expression  */
#line 124 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2043 "parser.tab.c"
    break;

  case 41: /* mult-expression: mult-expression '/' cast-expression  */
#line 125 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2049 "parser.tab.c"
    break;

  case 42: /* mult-expression: mult-expression '%' cast-expression  */
#line 126 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2055 "parser.tab.c"
    break;

  case 43: /* add-expression: mult-expression  */
#line 129 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2061 "parser.tab.c"
    break;

  case 44: /* add-expression: add-expression '+' mult-expression  */
#line 130 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2067 "parser.tab.c"
    break;

  case 45: /* add-expression: add-expression '-' mult-expression  */
#line 131 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2073 "parser.tab.c"
    break;

  case 46: /* shift-expression: add-expression  */
#line 134 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2079 "parser.tab.c"
    break;

  case 47: /* shift-expression: shift-expression SHL add-expression  */
#line 135 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2085 "parser.tab.c"
    break;

  case 48: /* shift-expression: shift-expression SHR add-expression  */
#line 136 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2091 "parser.tab.c"
    break;

  case 49: /* relational-expression: shift-expression  */
#line 139 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2097 "parser.tab.c"
    break;

  case 50: /* relational-expression: relational-expression '<' shift-expression  */
#line 140 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2103 "parser.tab.c"
    break;

  case 51: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 141 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2109 "parser.tab.c"
    break;

  case 52: /* relational-expression: relational-expression '>' shift-expression  */
#line 142 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2115 "parser.tab.c"
    break;

  case 53: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 143 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2121 "parser.tab.c"
    break;

  case 54: /* equality-expression: relational-expression  */
#line 146 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2127 "parser.tab.c"
    break;

  case 55: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 147 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2133 "parser.tab.c"
    break;

  case 56: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 148 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2139 "parser.tab.c"
    break;

  case 57: /* bitwise-or-expression: bitwise-xor-expression  */
#line 151 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2145 "parser.tab.c"
    break;

  case 58: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 152 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2151 "parser.tab.c"
    break;

  case 59: /* bitwise-xor-expression: bitwise-and-expression  */
#line 155 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2157 "parser.tab.c"
    break;

  case 60: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 156 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2163 "parser.tab.c"
    break;

  case 61: /* bitwise-and-expression: equality-expression  */
#line 159 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2169 "parser.tab.c"
    break;

  case 62: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 160 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2175 "parser.tab.c"
    break;

  case 63: /* logical-or-expression: logical-and-expression  */
#line 163 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2181 "parser.tab.c"
    break;

  case 64: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 164 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2187 "parser.tab.c"
    break;

  case 65: /* logical-and-expression: bitwise-or-expression  */
#line 167 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2193 "parser.tab.c"
    break;

  case 66: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 168 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2199 "parser.tab.c"
    break;

  case 67: /* conditional-expression: logical-or-expression  */
#line 171 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2205 "parser.tab.c"
    break;

  case 68: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 172 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2211 "parser.tab.c"
    break;

  case 69: /* assignment-expression: conditional-expression  */
#line 175 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2217 "parser.tab.c"
    break;

  case 70: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 176 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2223 "parser.tab.c"
    break;

  case 71: /* assignment-operator: '='  */
#line 180 "parser.y"
                         {(yyval.op) = '='; }
#line 2229 "parser.tab.c"
    break;

  case 72: /* assignment-operator: PLUSEQ  */
#line 181 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2235 "parser.tab.c"
    break;

  case 73: /* assignment-operator: MINUSEQ  */
#line 182 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2241 "parser.tab.c"
    break;

  case 74: /* assignment-operator: TIMESEQ  */
#line 183 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2247 "parser.tab.c"
    break;

  case 75: /* assignment-operator: DIVEQ  */
#line 184 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2253 "parser.tab.c"
    break;

  case 76: /* assignment-operator: MODEQ  */
#line 185 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2259 "parser.tab.c"
    break;

  case 77: /* assignment-operator: SHLEQ  */
#line 186 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2265 "parser.tab.c"
    break;

  case 78: /* assignment-operator: SHREQ  */
#line 187 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2271 "parser.tab.c"
    break;

  case 79: /* assignment-operator: ANDEQ  */
#line 188 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2277 "parser.tab.c"
    break;

  case 80: /* assignment-operator: OREQ  */
#line 189 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2283 "parser.tab.c"
    break;

  case 81: /* assignment-operator: XOREQ  */
#line 190 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2289 "parser.tab.c"
    break;

  case 82: /* expression: assignment-expression  */
#line 192 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2295 "parser.tab.c"
    break;

  case 83: /* expression: expression ',' assignment-expression  */
#line 193 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2301 "parser.tab.c"
    break;


#line 2305 "parser.tab.c"

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

#line 396 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
