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
  YYSYMBOL_124_1 = 124,                    /* $@1  */
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
  YYSYMBOL_144_type_name = 144,            /* type-name  */
  YYSYMBOL_145_abstract_declarator = 145,  /* abstract-declarator  */
  YYSYMBOL_146_direct_abstract_declarator = 146, /* direct-abstract-declarator  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

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
       0,    77,    77,    78,    80,    83,    86,    87,    90,    91,
      93,    94,    98,    99,   100,   103,   104,   107,   108,   109,
     110,   111,   112,   113,   114,   117,   118,   122,   123,   124,
     125,   126,   129,   130,   131,   132,   133,   134,   136,   137,
     141,   142,   143,   144,   147,   148,   149,   152,   153,   154,
     157,   158,   159,   160,   161,   164,   165,   166,   169,   170,
     173,   174,   177,   178,   181,   182,   185,   186,   189,   190,
     193,   194,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   210,   211,   217,   218,   221,   222,   223,
     224,   225,   226,   227,   228,   231,   232,   235,   236,   240,
     241,   242,   243,   244,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   268,   268,
     269,   270,   273,   274,   277,   280,   283,   286,   287,   288,
     289,   291,   292,   294,   295,   298,   305,   306,   307,   309,
     310,   313,   314,   319,   320,   321,   324,   328,   329,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   349,   350,   351,   352,   355,   356,   359,
     360,   363,   364,   367,   368,   369,   372,   373,   377,   378,
     381,   382,   383,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   402,   403,   404,   407,   408,   409,   410,   413,
     416,   417,   420,   421
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
  "struct-or-union-specifier", "$@1", "struct-or-union",
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

#define YYPACT_NINF (-185)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-119)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     733,  -185,  -185,  -185,  -185,  -185,    20,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,   105,    22,    41,  -185,
    -185,    37,  1072,  1072,  -185,    21,  -185,  1072,  1072,   -40,
      89,    27,   -12,    61,  -185,  -185,   105,     4,  -185,  -185,
      55,  -185,   -14,  -185,  -185,    35,  1106,  -185,  -185,   359,
    -185,   291,   457,    89,    61,    16,    52,  -185,  -185,  -185,
    -185,    22,  -185,   186,    63,  1106,   621,  -185,     7,  1106,
    -185,  -185,  -185,  -185,   819,   819,    71,  -185,  -185,  -185,
    -185,  -185,  -185,   838,  -185,   232,  -185,  -185,  -185,    75,
     425,   838,  -185,   -23,    94,   195,   146,   196,    82,    93,
     100,     0,   156,  -185,  -185,   125,  -185,  -185,  -185,    44,
     112,    91,  -185,   -65,   800,   131,  -185,   135,   530,    88,
     838,    10,  -185,   432,  -185,  -185,  1106,  -185,  -185,  -185,
     838,   129,  -185,   132,  -185,   150,  -185,  -185,   688,   -45,
    -185,  -185,   223,  -185,  -185,   228,   642,   838,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,   838,
    -185,  -185,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,  -185,   575,   873,  -185,    47,  -185,    97,  -185,
    1035,  -185,   231,   161,   800,  -185,  -185,   838,   162,  -185,
     163,  -185,    61,  -185,  -185,  -185,   244,   838,  -185,    96,
     186,    62,  -185,   956,  -185,     7,  -185,   838,   838,   -28,
     -20,   167,  -185,  -185,  -185,  -185,     5,  -185,    -6,  -185,
    -185,  -185,  -185,   -23,   -23,    94,    94,   195,   195,   195,
     195,   146,   146,    93,   100,   196,   156,   110,    82,  -185,
     170,   172,   175,   179,    97,   997,   478,  -185,  -185,  -185,
    -185,   180,   184,  -185,  -185,  -185,   185,  -185,   305,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,   918,   118,  -185,  -185,
    -185,   838,  -185,   838,  -185,  -185,  -185,  -185,  -185,   193,
     192,  -185,   199,  -185,  -185,  -185,  -185,  -185,   186,  -185,
    -185,  -185,  -185,  -185,  -185
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   149,   102,   105,   143,   110,     0,   100,   109,   146,
     107,   108,   103,   144,   106,   111,   101,   122,    99,   123,
     112,   104,   145,   113,   114,   115,   163,     0,     0,     3,
       2,     0,    88,    90,   116,     0,   117,    92,    94,     0,
     148,     0,   138,     0,   167,   166,   164,     0,     1,    86,
       0,    95,    97,    87,    89,   121,     0,    91,    93,     0,
       4,     0,     0,   147,     0,   141,     0,   139,   168,   165,
     150,     0,    85,     0,     0,   128,     0,   124,     0,   130,
      12,    15,    14,    13,     0,     0,     0,    34,    36,    37,
      32,    33,    35,     0,    10,     0,     6,     9,    17,    27,
      38,     0,    40,    44,    47,    50,    55,    62,    66,    58,
      60,    68,    64,    70,    83,     0,     8,   176,   162,   175,
       0,   169,   171,     0,     0,    37,   159,     0,     0,     0,
       0,     0,    96,     0,   192,    98,     0,   127,   120,   125,
       0,     0,   131,   133,   129,     0,    28,    29,     0,     0,
       5,     7,     0,    23,    24,     0,     0,     0,    75,    76,
      77,    73,    74,    78,    79,    80,    81,    82,    72,     0,
      38,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,   173,   180,   174,   182,   160,
       0,   161,     0,     0,     0,   158,   152,     0,    37,   153,
       0,   136,     0,   142,   137,   140,     0,     0,   196,     0,
       0,     0,   200,     0,   135,     0,   126,     0,     0,     0,
     178,     0,    16,    20,    19,    22,     0,    25,     0,    71,
      41,    42,    43,    46,    45,    48,    49,    52,    54,    51,
      53,    56,    57,    59,    61,    63,    65,     0,    67,    84,
       0,     0,    37,     0,   181,     0,     0,   170,   172,   177,
     155,     0,     0,   157,   151,   203,     0,   193,     0,   195,
     199,   201,   119,   132,   134,    31,     0,   180,   179,    39,
      21,     0,    18,     0,   190,   183,   188,   186,   191,     0,
      37,   185,     0,   154,   156,   202,   194,   198,     0,    26,
      69,   189,   187,   184,   197
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,   237,  -185,   204,  -185,  -185,  -185,  -185,
     -58,  -185,    29,    49,    51,     6,    59,   101,   114,   121,
     133,  -185,   119,  -109,   -59,  -185,   -48,   315,    19,  -185,
     247,  -185,   -47,  -185,  -185,  -185,   189,   -70,   -36,  -185,
     102,  -185,   257,   -97,    -8,  -185,     2,   -33,   -26,    -1,
     -56,  -185,   122,  -185,  -185,  -108,  -184,  -126,  -185,    48,
    -185,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    28,    29,    94,    95,    96,    97,    98,    99,   236,
     170,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   169,   115,   116,   119,    50,
      51,    32,    33,    34,    74,    35,    76,    77,    78,   141,
     142,    36,    66,    67,    37,    38,    47,    40,    41,    46,
     260,   121,   122,   123,   231,   261,   198,   135,   219,   220,
     221,   222
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   100,    39,   127,   100,   120,   139,   218,    63,    75,
       1,   197,   264,    65,   134,   100,   201,   188,    44,    31,
      69,   213,   202,    42,    55,     1,   146,   147,    75,    75,
       1,   224,    75,    52,   215,   100,   232,   100,    68,   137,
       1,    48,   191,   144,    59,   149,   172,     1,    79,    26,
       1,    53,    54,   285,    44,   173,    57,    58,    73,   191,
     286,   128,   194,   174,    65,   203,   100,    79,    79,   210,
     100,    79,    64,    52,   134,   100,    26,   292,    31,   189,
     143,   191,   152,   153,   154,    70,   290,    27,   130,    75,
     100,    26,   291,   196,   279,   214,   140,   237,   100,   100,
     229,    75,    27,   264,    43,    56,    26,    27,   276,   238,
     239,   100,   230,    26,    31,   215,    44,    27,   284,  -118,
      68,   195,   288,   204,   193,    49,   194,   193,    79,   194,
     171,   100,   259,   100,   280,   263,   100,   216,     4,   131,
      79,   257,    71,    72,   217,   271,   100,   136,   272,   100,
     155,   148,   307,   139,    13,   156,   185,   157,   179,   180,
     186,   134,   100,    63,   175,   176,    22,   196,   187,    61,
     100,    62,   190,   211,    26,   212,    75,   265,   200,   266,
     229,   277,   314,   278,   310,   247,   248,   249,   250,    80,
      81,    82,    83,   199,    84,    85,    68,   191,   286,   293,
     194,   240,   241,   242,   287,   177,   178,   302,   100,   299,
     183,   184,   191,   192,   205,    79,   225,   226,   206,   134,
     100,   227,   181,   182,   243,   244,   233,   143,   245,   246,
     228,   234,   309,   100,   269,    80,    81,    82,    83,    86,
      84,    85,   251,   252,   270,   273,   274,   275,   289,   134,
     100,   294,    87,   295,    88,    89,    90,    91,   296,    92,
     287,     2,   297,   303,     3,     4,    93,   304,   305,     5,
     133,     6,     7,     8,   311,   312,    60,     9,    10,    11,
      12,    13,   313,    14,    15,    86,    16,    17,   255,    18,
      19,    20,    21,    22,   117,    23,    24,    25,    87,   151,
      88,    89,    90,    91,   258,    92,   253,   256,    80,    81,
      82,    83,    93,    84,    85,    30,    59,   150,   132,   254,
       2,   129,   268,     3,     4,   223,   308,   283,     5,   281,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,    25,     0,    86,     0,
       0,     0,    80,    81,    82,    83,     0,    84,    85,     0,
       0,    87,   118,    88,    89,    90,    91,     0,    92,     0,
     216,     0,     0,     0,     0,    93,     0,   217,     2,   133,
     306,     3,     4,     0,     0,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    86,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,    25,    87,     0,    88,    89,    90,
      91,     0,    92,     0,     0,    80,    81,    82,    83,    93,
      84,    85,     0,    59,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,     0,     0,     0,     0,     0,     0,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       4,     0,     0,     0,     0,     0,     0,   168,    87,     0,
      88,    89,    90,    91,     0,    92,    13,   216,     0,     0,
      86,   124,    93,     0,   217,     0,   133,     0,    22,     0,
       0,     0,     0,    87,     0,    88,   125,    90,    91,     0,
      92,    86,     0,    80,    81,    82,    83,    93,    84,    85,
     126,     0,     0,     0,    87,     0,    88,   300,    90,    91,
       0,    92,     0,     0,     0,     0,     0,     0,    93,     0,
       0,   301,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    13,
       0,     0,     0,    86,   207,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,    87,     0,    88,   208,
      90,    91,     0,    92,     2,     0,     0,     3,     4,     0,
      93,     0,     5,   209,     6,     7,     8,     0,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,     0,    16,
      17,     0,    18,    19,    20,    21,    22,     0,    23,    24,
      25,     0,     0,     0,    26,    80,    81,    82,    83,     0,
      84,    85,     0,     3,     4,   193,     0,   194,     5,     0,
       6,     0,     8,     0,     0,     0,     0,    10,    11,     0,
      13,     0,    14,    15,     0,     0,    17,     0,     0,    19,
      20,    21,    22,     0,    23,    24,    25,     0,     0,     0,
       0,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,    87,     0,
      88,    89,    90,    91,     0,    92,     0,     0,     0,     0,
       3,     4,    93,   235,     0,     5,     0,     6,     0,     8,
       0,     0,     0,     0,    10,    11,     1,    13,     0,    14,
      15,    86,     0,    17,     0,     0,    19,    20,    21,    22,
       0,    23,    24,    25,    87,     0,    88,    89,    90,    91,
       0,    92,     2,     0,     0,     3,     4,     0,    93,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,    25,     0,
       0,     0,    26,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,    80,    81,    82,    83,     0,    84,    85,     0,    13,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,    87,     0,    88,    89,
      90,    91,   145,    92,     0,     0,    80,    81,    82,    83,
      93,    84,    85,     0,     0,    87,     0,    88,    89,    90,
      91,    86,    92,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,    87,     0,    88,    89,    90,    91,
       0,    92,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,   262,    90,    91,     0,    92,     2,     0,     0,
       3,     4,     0,    93,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
       0,    23,    24,    25,     0,     0,     0,    26,     3,     4,
       0,     0,     0,     5,     0,     6,     0,     8,   286,     0,
     194,     0,    10,    11,     0,    13,     0,    14,    15,     0,
       0,    17,     0,     0,    19,    20,    21,    22,     0,    23,
      24,    25,     0,     0,     0,     0,     2,     0,     0,     3,
       4,     0,     0,     0,     5,     0,     6,     7,     8,     0,
       0,   282,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,   267,    18,    19,    20,    21,    22,     0,
      23,    24,    25,     0,     2,     0,     0,     3,     4,     0,
       0,     0,     5,     0,     6,     7,     8,     0,   298,     0,
       9,    10,    11,    12,    13,     0,    14,    15,     0,    16,
      17,     0,    18,    19,    20,    21,    22,     0,    23,    24,
      25,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,     0,    23,    24,    25,     3,     4,
       0,     0,     0,     5,     0,     6,     0,     8,     0,     0,
       0,     0,    10,    11,     0,    13,     0,    14,    15,     0,
       0,    17,     0,     0,    19,    20,    21,    22,     0,    23,
      24,    25
};

static const yytype_int16 yycheck[] =
{
      26,    59,     0,    62,    62,    61,    76,   133,    41,    56,
       3,   119,   196,     3,    73,    73,    81,    17,    26,     0,
      46,   130,    87,     3,     3,     3,    84,    85,    75,    76,
       3,   140,    79,    31,   131,    93,    81,    95,    46,    75,
       3,     0,    87,    79,    84,    93,    69,     3,    56,    69,
       3,    32,    33,    81,    62,    78,    37,    38,    72,    87,
      80,    62,    82,    86,     3,   124,   124,    75,    76,   128,
     128,    79,    84,    71,   133,   133,    69,    83,    59,    79,
      78,    87,     7,     8,     9,    81,    81,    80,    72,   136,
     148,    69,    87,   119,   220,    85,    89,   156,   156,   157,
     148,   148,    80,   287,    84,    84,    69,    80,   217,   157,
     169,   169,   148,    69,    95,   212,   124,    80,   227,    84,
     128,   119,   230,   124,    80,    88,    82,    80,   136,    82,
     101,   189,   191,   191,    72,   194,   194,    75,    33,    87,
     148,   189,    87,    88,    82,   204,   204,    84,   207,   207,
      75,    80,   278,   223,    49,    80,    74,    82,    12,    13,
      67,   220,   220,   196,    70,    71,    61,   193,    68,    80,
     228,    82,    16,    85,    69,    87,   223,    80,    87,    82,
     228,    85,   308,    87,   293,   179,   180,   181,   182,     3,
       4,     5,     6,    81,     8,     9,   204,    87,    80,    89,
      82,   172,   173,   174,   230,    10,    11,   266,   266,   265,
      14,    15,    87,    88,    83,   223,    87,    88,    83,   278,
     278,    89,    76,    77,   175,   176,     3,   225,   177,   178,
      80,     3,   291,   291,     3,     3,     4,     5,     6,    53,
       8,     9,   183,   184,    83,    83,    83,     3,    81,   308,
     308,    81,    66,    81,    68,    69,    70,    71,    83,    73,
     286,    29,    83,    83,    32,    33,    80,    83,    83,    37,
      84,    39,    40,    41,    81,    83,    39,    45,    46,    47,
      48,    49,    83,    51,    52,    53,    54,    55,   187,    57,
      58,    59,    60,    61,     3,    63,    64,    65,    66,    95,
      68,    69,    70,    71,   190,    73,   185,   188,     3,     4,
       5,     6,    80,     8,     9,     0,    84,    85,    71,   186,
      29,    64,   200,    32,    33,   136,   278,   225,    37,   221,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    53,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    66,    81,    68,    69,    70,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    80,    -1,    82,    29,    84,
      85,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    -1,    73,    -1,    -1,     3,     4,     5,     6,    80,
       8,     9,    -1,    84,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    53,     8,     9,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    72,    66,    -1,
      68,    69,    70,    71,    -1,    73,    49,    75,    -1,    -1,
      53,    54,    80,    -1,    82,    -1,    84,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      73,    53,    -1,     3,     4,     5,     6,    80,     8,     9,
      83,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    29,    -1,    -1,    32,    33,    -1,
      80,    -1,    37,    83,    39,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    -1,    -1,    69,     3,     4,     5,     6,    -1,
       8,     9,    -1,    32,    33,    80,    -1,    82,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,
      49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    53,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,
      32,    33,    80,    81,    -1,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    47,     3,    49,    -1,    51,
      52,    53,    -1,    55,    -1,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      -1,    73,    29,    -1,    -1,    32,    33,    -1,    80,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      -1,    -1,    69,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    49,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    53,    73,    -1,    -1,     3,     4,     5,     6,
      80,     8,     9,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    53,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    29,    -1,    -1,
      32,    33,    -1,    80,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    -1,    -1,    69,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    80,    -1,
      82,    -1,    46,    47,    -1,    49,    -1,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    85,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    18,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    29,    -1,    -1,    32,    33,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    81,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    32,    33,    37,    39,    40,    41,    45,
      46,    47,    48,    49,    51,    52,    54,    55,    57,    58,
      59,    60,    61,    63,    64,    65,    69,    80,    91,    92,
     117,   118,   121,   122,   123,   125,   131,   134,   135,   136,
     137,   138,     3,    84,   134,   138,   139,   136,     0,    88,
     119,   120,   136,   118,   118,     3,    84,   118,   118,    84,
      93,    80,    82,   137,    84,     3,   132,   133,   134,   138,
      81,    87,    88,    72,   124,   122,   126,   127,   128,   134,
       3,     4,     5,     6,     8,     9,    53,    66,    68,    69,
      70,    71,    73,    80,    93,    94,    95,    96,    97,    98,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   116,   117,     3,    81,   118,
     140,   141,   142,   143,    54,    69,    83,   114,   139,   132,
      72,    87,   120,    84,   114,   147,    84,   128,    85,   127,
      89,   129,   130,   136,   128,    53,   100,   100,    80,   116,
      85,    95,     7,     8,     9,    75,    80,    82,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    72,   115,
     100,   102,    69,    78,    86,    70,    71,    10,    11,    12,
      13,    76,    77,    14,    15,    74,    67,    68,    17,    79,
      16,    87,    88,    80,    82,   136,   138,   145,   146,    81,
      87,    81,    87,   114,   139,    83,    83,    54,    69,    83,
     114,    85,    87,   113,    85,   133,    75,    82,   147,   148,
     149,   150,   151,   126,   113,    87,    88,    89,    80,   116,
     128,   144,    81,     3,     3,    81,    99,   114,   116,   114,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   106,   106,   109,   110,   107,   112,   116,   108,   114,
     140,   145,    69,   114,   146,    80,    82,    18,   142,     3,
      83,   114,   114,    83,    83,     3,   113,    85,    87,   147,
      72,   151,    85,   130,   113,    81,    80,   138,   145,    81,
      81,    87,    83,    89,    81,    81,    83,    83,    81,   140,
      69,    83,   114,    83,    83,    83,    85,   147,   149,   114,
     113,    81,    83,    83,   147
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
     122,   122,   122,   122,   122,   122,   122,   122,   124,   123,
     123,   123,   125,   125,   126,   126,   127,   128,   128,   128,
     128,   129,   129,   130,   130,   130,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   134,   135,   136,   136,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   138,   138,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   143,   143,   144,   144,
     145,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   147,   147,   147,   148,   148,   148,   148,   149,
     150,   150,   151,   151
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       4,     2,     1,     1,     1,     2,     3,     2,     1,     2,
       1,     1,     3,     1,     3,     2,     5,     5,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       3,     5,     4,     4,     6,     5,     6,     5,     4,     3,
       4,     4,     3,     1,     2,     3,     2,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     2,
       1,     2,     1,     3,     4,     3,     3,     4,     3,     4,
       3,     3,     1,     3,     4,     2,     1,     4,     3,     2,
       1,     2,     3,     2
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
  case 4: /* function_definition: declarator compound_statement  */
#line 80 "parser.y"
                                                   { }
#line 1923 "parser.tab.c"
    break;

  case 5: /* compound_statement: '{' decl_or_stmt_list '}'  */
#line 83 "parser.y"
                                               {current_scope = symbtab_push(SCOPE_BLOCK, current_scope); /* this would need to happen as a mid rule after '{'  */ }
#line 1929 "parser.tab.c"
    break;

  case 6: /* decl_or_stmt_list: decl_or_stmt  */
#line 86 "parser.y"
                                { }
#line 1935 "parser.tab.c"
    break;

  case 7: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 87 "parser.y"
                                          { }
#line 1941 "parser.tab.c"
    break;

  case 11: /* stmt: expression ';'  */
#line 94 "parser.y"
                     {  }
#line 1947 "parser.tab.c"
    break;

  case 12: /* primary-expression: IDENT  */
#line 98 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1953 "parser.tab.c"
    break;

  case 13: /* primary-expression: NUMBER  */
#line 99 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 1959 "parser.tab.c"
    break;

  case 14: /* primary-expression: STRING  */
#line 100 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 1967 "parser.tab.c"
    break;

  case 15: /* primary-expression: CHARLIT  */
#line 103 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 1973 "parser.tab.c"
    break;

  case 16: /* primary-expression: '(' expression ')'  */
#line 104 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 1979 "parser.tab.c"
    break;

  case 17: /* postfix-expression: primary-expression  */
#line 107 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 1985 "parser.tab.c"
    break;

  case 18: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 108 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 1991 "parser.tab.c"
    break;

  case 19: /* postfix-expression: postfix-expression '.' IDENT  */
#line 109 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 1997 "parser.tab.c"
    break;

  case 20: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 110 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2003 "parser.tab.c"
    break;

  case 21: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 111 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2009 "parser.tab.c"
    break;

  case 22: /* postfix-expression: postfix-expression '(' ')'  */
#line 112 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2015 "parser.tab.c"
    break;

  case 23: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 113 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2021 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 114 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2027 "parser.tab.c"
    break;

  case 25: /* expression-list: assignment-expression  */
#line 117 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2033 "parser.tab.c"
    break;

  case 26: /* expression-list: expression-list ',' assignment-expression  */
#line 118 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2039 "parser.tab.c"
    break;

  case 27: /* unary-expression: postfix-expression  */
#line 122 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2045 "parser.tab.c"
    break;

  case 28: /* unary-expression: PLUSPLUS unary-expression  */
#line 123 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2051 "parser.tab.c"
    break;

  case 29: /* unary-expression: MINUSMINUS unary-expression  */
#line 124 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2057 "parser.tab.c"
    break;

  case 30: /* unary-expression: unary-operator cast-expression  */
#line 125 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2063 "parser.tab.c"
    break;

  case 31: /* unary-expression: SIZEOF '(' expression ')'  */
#line 126 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2069 "parser.tab.c"
    break;

  case 32: /* unary-operator: '-'  */
#line 129 "parser.y"
                    { (yyval.op) = '-'; }
#line 2075 "parser.tab.c"
    break;

  case 33: /* unary-operator: '+'  */
#line 130 "parser.y"
                      { (yyval.op) = '+';  }
#line 2081 "parser.tab.c"
    break;

  case 34: /* unary-operator: '!'  */
#line 131 "parser.y"
                      {(yyval.op) = '!'; }
#line 2087 "parser.tab.c"
    break;

  case 35: /* unary-operator: '~'  */
#line 132 "parser.y"
                      {(yyval.op) = '~'; }
#line 2093 "parser.tab.c"
    break;

  case 36: /* unary-operator: '&'  */
#line 133 "parser.y"
                      {(yyval.op) = '&'; }
#line 2099 "parser.tab.c"
    break;

  case 37: /* unary-operator: '*'  */
#line 134 "parser.y"
                      {(yyval.op) = '*'; }
#line 2105 "parser.tab.c"
    break;

  case 38: /* cast-expression: unary-expression  */
#line 136 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2111 "parser.tab.c"
    break;

  case 39: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 137 "parser.y"
                                          { }
#line 2117 "parser.tab.c"
    break;

  case 40: /* mult-expression: cast-expression  */
#line 141 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2123 "parser.tab.c"
    break;

  case 41: /* mult-expression: mult-expression '*' cast-expression  */
#line 142 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2129 "parser.tab.c"
    break;

  case 42: /* mult-expression: mult-expression '/' cast-expression  */
#line 143 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2135 "parser.tab.c"
    break;

  case 43: /* mult-expression: mult-expression '%' cast-expression  */
#line 144 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2141 "parser.tab.c"
    break;

  case 44: /* add-expression: mult-expression  */
#line 147 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2147 "parser.tab.c"
    break;

  case 45: /* add-expression: add-expression '+' mult-expression  */
#line 148 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2153 "parser.tab.c"
    break;

  case 46: /* add-expression: add-expression '-' mult-expression  */
#line 149 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2159 "parser.tab.c"
    break;

  case 47: /* shift-expression: add-expression  */
#line 152 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2165 "parser.tab.c"
    break;

  case 48: /* shift-expression: shift-expression SHL add-expression  */
#line 153 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2171 "parser.tab.c"
    break;

  case 49: /* shift-expression: shift-expression SHR add-expression  */
#line 154 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2177 "parser.tab.c"
    break;

  case 50: /* relational-expression: shift-expression  */
#line 157 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2183 "parser.tab.c"
    break;

  case 51: /* relational-expression: relational-expression '<' shift-expression  */
#line 158 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2189 "parser.tab.c"
    break;

  case 52: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 159 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2195 "parser.tab.c"
    break;

  case 53: /* relational-expression: relational-expression '>' shift-expression  */
#line 160 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2201 "parser.tab.c"
    break;

  case 54: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 161 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2207 "parser.tab.c"
    break;

  case 55: /* equality-expression: relational-expression  */
#line 164 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2213 "parser.tab.c"
    break;

  case 56: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 165 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2219 "parser.tab.c"
    break;

  case 57: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 166 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2225 "parser.tab.c"
    break;

  case 58: /* bitwise-or-expression: bitwise-xor-expression  */
#line 169 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2231 "parser.tab.c"
    break;

  case 59: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 170 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2237 "parser.tab.c"
    break;

  case 60: /* bitwise-xor-expression: bitwise-and-expression  */
#line 173 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2243 "parser.tab.c"
    break;

  case 61: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 174 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2249 "parser.tab.c"
    break;

  case 62: /* bitwise-and-expression: equality-expression  */
#line 177 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2255 "parser.tab.c"
    break;

  case 63: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 178 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2261 "parser.tab.c"
    break;

  case 64: /* logical-or-expression: logical-and-expression  */
#line 181 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2267 "parser.tab.c"
    break;

  case 65: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 182 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2273 "parser.tab.c"
    break;

  case 66: /* logical-and-expression: bitwise-or-expression  */
#line 185 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2279 "parser.tab.c"
    break;

  case 67: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 186 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2285 "parser.tab.c"
    break;

  case 68: /* conditional-expression: logical-or-expression  */
#line 189 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2291 "parser.tab.c"
    break;

  case 69: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 190 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2297 "parser.tab.c"
    break;

  case 70: /* assignment-expression: conditional-expression  */
#line 193 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2303 "parser.tab.c"
    break;

  case 71: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 194 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2309 "parser.tab.c"
    break;

  case 72: /* assignment-operator: '='  */
#line 198 "parser.y"
                         {(yyval.op) = '='; }
#line 2315 "parser.tab.c"
    break;

  case 73: /* assignment-operator: PLUSEQ  */
#line 199 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2321 "parser.tab.c"
    break;

  case 74: /* assignment-operator: MINUSEQ  */
#line 200 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2327 "parser.tab.c"
    break;

  case 75: /* assignment-operator: TIMESEQ  */
#line 201 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2333 "parser.tab.c"
    break;

  case 76: /* assignment-operator: DIVEQ  */
#line 202 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2339 "parser.tab.c"
    break;

  case 77: /* assignment-operator: MODEQ  */
#line 203 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2345 "parser.tab.c"
    break;

  case 78: /* assignment-operator: SHLEQ  */
#line 204 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2351 "parser.tab.c"
    break;

  case 79: /* assignment-operator: SHREQ  */
#line 205 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2357 "parser.tab.c"
    break;

  case 80: /* assignment-operator: ANDEQ  */
#line 206 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2363 "parser.tab.c"
    break;

  case 81: /* assignment-operator: OREQ  */
#line 207 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2369 "parser.tab.c"
    break;

  case 82: /* assignment-operator: XOREQ  */
#line 208 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2375 "parser.tab.c"
    break;

  case 83: /* expression: assignment-expression  */
#line 210 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2381 "parser.tab.c"
    break;

  case 84: /* expression: expression ',' assignment-expression  */
#line 211 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2387 "parser.tab.c"
    break;

  case 85: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 217 "parser.y"
                                                             {  }
#line 2393 "parser.tab.c"
    break;

  case 86: /* declaration: declaration-specifiers ';'  */
#line 218 "parser.y"
                                  {  (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 2399 "parser.tab.c"
    break;

  case 87: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 221 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2405 "parser.tab.c"
    break;

  case 88: /* declaration-specifiers: storage-class-specifier  */
#line 222 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2411 "parser.tab.c"
    break;

  case 89: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 223 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2417 "parser.tab.c"
    break;

  case 90: /* declaration-specifiers: type-specifier  */
#line 224 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2423 "parser.tab.c"
    break;

  case 91: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 225 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2429 "parser.tab.c"
    break;

  case 92: /* declaration-specifiers: type-qualifier  */
#line 226 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2435 "parser.tab.c"
    break;

  case 93: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 227 "parser.y"
                                                { }
#line 2441 "parser.tab.c"
    break;

  case 94: /* declaration-specifiers: function-specifier  */
#line 228 "parser.y"
                         { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
#line 2447 "parser.tab.c"
    break;

  case 95: /* init-declarator-list: init-declarator  */
#line 231 "parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)->head); }
#line 2453 "parser.tab.c"
    break;

  case 96: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 232 "parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)->head); }
#line 2459 "parser.tab.c"
    break;

  case 97: /* init-declarator: declarator  */
#line 235 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2465 "parser.tab.c"
    break;

  case 98: /* init-declarator: declarator '=' initializer  */
#line 236 "parser.y"
                                 {/* do not have to do yet */ }
#line 2471 "parser.tab.c"
    break;

  case 99: /* storage-class-specifier: TYPEDEF  */
#line 240 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2477 "parser.tab.c"
    break;

  case 100: /* storage-class-specifier: EXTERN  */
#line 241 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2483 "parser.tab.c"
    break;

  case 101: /* storage-class-specifier: STATIC  */
#line 242 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2489 "parser.tab.c"
    break;

  case 102: /* storage-class-specifier: AUTO  */
#line 243 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2495 "parser.tab.c"
    break;

  case 103: /* storage-class-specifier: REGISTER  */
#line 244 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2501 "parser.tab.c"
    break;

  case 104: /* type-specifier: VOID  */
#line 249 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2507 "parser.tab.c"
    break;

  case 105: /* type-specifier: CHAR  */
#line 250 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2513 "parser.tab.c"
    break;

  case 106: /* type-specifier: SHORT  */
#line 251 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2519 "parser.tab.c"
    break;

  case 107: /* type-specifier: INT  */
#line 252 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2525 "parser.tab.c"
    break;

  case 108: /* type-specifier: LONG  */
#line 253 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2531 "parser.tab.c"
    break;

  case 109: /* type-specifier: FLOAT  */
#line 254 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2537 "parser.tab.c"
    break;

  case 110: /* type-specifier: DOUBLE  */
#line 255 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2543 "parser.tab.c"
    break;

  case 111: /* type-specifier: SIGNED  */
#line 256 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2549 "parser.tab.c"
    break;

  case 112: /* type-specifier: UNSIGNED  */
#line 257 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2555 "parser.tab.c"
    break;

  case 113: /* type-specifier: _BOOL  */
#line 258 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2561 "parser.tab.c"
    break;

  case 114: /* type-specifier: _COMPLEX  */
#line 259 "parser.y"
                            { }
#line 2567 "parser.tab.c"
    break;

  case 115: /* type-specifier: _IMAGINARY  */
#line 260 "parser.y"
                           { }
#line 2573 "parser.tab.c"
    break;

  case 116: /* type-specifier: struct-or-union-specifier  */
#line 261 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p);}
#line 2579 "parser.tab.c"
    break;

  case 118: /* $@1: %empty  */
#line 268 "parser.y"
                                                 { printf("insert struct in upper symbol table"); }
#line 2585 "parser.tab.c"
    break;

  case 119: /* struct-or-union-specifier: struct-or-union IDENT $@1 '{' struct-declaration-list '}'  */
#line 268 "parser.y"
                                                                                                                                   { (yyval.astnode_p) = newStructUnion((yyvsp[-5].op), (yyvsp[-4].string_literal), NULL); }
#line 2591 "parser.tab.c"
    break;

  case 120: /* struct-or-union-specifier: struct-or-union '{' struct-declaration-list '}'  */
#line 269 "parser.y"
                                                                           { (yyval.astnode_p) = newStructUnion((yyvsp[-3].op), NULL, NULL); }
#line 2597 "parser.tab.c"
    break;

  case 121: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 270 "parser.y"
                                                 {  (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL);  astwalk_impl((yyval.astnode_p), 0); }
#line 2603 "parser.tab.c"
    break;

  case 122: /* struct-or-union: STRUCT  */
#line 273 "parser.y"
                        { (yyval.op) = STRUCT; }
#line 2609 "parser.tab.c"
    break;

  case 123: /* struct-or-union: UNION  */
#line 274 "parser.y"
                        { (yyval.op) =  UNION; }
#line 2615 "parser.tab.c"
    break;

  case 124: /* struct-declaration-list: struct-declaration  */
#line 277 "parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2623 "parser.tab.c"
    break;

  case 126: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 283 "parser.y"
                                                                        {current_scope = symbtab_push(SCOPE_STRUCT_UNION, current_scope);}
#line 2629 "parser.tab.c"
    break;

  case 127: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 286 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2635 "parser.tab.c"
    break;

  case 128: /* specifier-qualifier-list: type-specifier  */
#line 287 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2641 "parser.tab.c"
    break;

  case 129: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 288 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2647 "parser.tab.c"
    break;

  case 130: /* specifier-qualifier-list: type-qualifier  */
#line 289 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2653 "parser.tab.c"
    break;

  case 131: /* struct-declarator-list: struct-declarator  */
#line 291 "parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)->head); }
#line 2659 "parser.tab.c"
    break;

  case 132: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 292 "parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)->head); }
#line 2665 "parser.tab.c"
    break;

  case 133: /* struct-declarator: declarator  */
#line 294 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2671 "parser.tab.c"
    break;

  case 134: /* struct-declarator: declarator ':' conditional-expression  */
#line 295 "parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2679 "parser.tab.c"
    break;

  case 135: /* struct-declarator: ':' conditional-expression  */
#line 298 "parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2687 "parser.tab.c"
    break;

  case 143: /* type-qualifier: CONST  */
#line 319 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2693 "parser.tab.c"
    break;

  case 144: /* type-qualifier: RESTRICT  */
#line 320 "parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2699 "parser.tab.c"
    break;

  case 145: /* type-qualifier: VOLATILE  */
#line 321 "parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2705 "parser.tab.c"
    break;

  case 147: /* declarator: pointer direct-declarator  */
#line 328 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p)); }
#line 2711 "parser.tab.c"
    break;

  case 148: /* declarator: direct-declarator  */
#line 329 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2717 "parser.tab.c"
    break;

  case 149: /* direct-declarator: IDENT  */
#line 332 "parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2723 "parser.tab.c"
    break;

  case 150: /* direct-declarator: '(' declarator ')'  */
#line 333 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2729 "parser.tab.c"
    break;

  case 151: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 334 "parser.y"
                                                                                { }
#line 2735 "parser.tab.c"
    break;

  case 152: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 335 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2741 "parser.tab.c"
    break;

  case 153: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 336 "parser.y"
                                                         {}
#line 2747 "parser.tab.c"
    break;

  case 154: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 337 "parser.y"
                                                                                     {}
#line 2753 "parser.tab.c"
    break;

  case 155: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 338 "parser.y"
                                                                  {}
#line 2759 "parser.tab.c"
    break;

  case 156: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 339 "parser.y"
                                                                                     {}
#line 2765 "parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 340 "parser.y"
                                                             { }
#line 2771 "parser.tab.c"
    break;

  case 158: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 341 "parser.y"
                                          { /*  */ }
#line 2777 "parser.tab.c"
    break;

  case 159: /* direct-declarator: direct-declarator '[' ']'  */
#line 342 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2783 "parser.tab.c"
    break;

  case 160: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 343 "parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl(NULL)); }
#line 2789 "parser.tab.c"
    break;

  case 161: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 344 "parser.y"
                                                    { }
#line 2795 "parser.tab.c"
    break;

  case 162: /* direct-declarator: direct-declarator '(' ')'  */
#line 345 "parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL));
                                        current_scope = symbtab_push(SCOPE_FUNCTION, current_scope); }
#line 2802 "parser.tab.c"
    break;

  case 163: /* pointer: '*'  */
#line 349 "parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2808 "parser.tab.c"
    break;

  case 164: /* pointer: '*' type-qualifier-list  */
#line 350 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2814 "parser.tab.c"
    break;

  case 165: /* pointer: '*' type-qualifier-list pointer  */
#line 351 "parser.y"
                                          {}
#line 2820 "parser.tab.c"
    break;

  case 166: /* pointer: '*' pointer  */
#line 352 "parser.y"
                      { (yyvsp[0].astnode_p)->ptr.next = newType(AST_NODE_TYPE_POINTER,  0);  (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2826 "parser.tab.c"
    break;

  case 167: /* type-qualifier-list: type-qualifier  */
#line 355 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2832 "parser.tab.c"
    break;

  case 168: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 356 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2838 "parser.tab.c"
    break;

  case 173: /* parameter-declaration: declaration-specifiers declarator  */
#line 367 "parser.y"
                                                             {}
#line 2844 "parser.tab.c"
    break;

  case 174: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 368 "parser.y"
                                                     {   }
#line 2850 "parser.tab.c"
    break;

  case 175: /* parameter-declaration: declaration-specifiers  */
#line 369 "parser.y"
                                 { }
#line 2856 "parser.tab.c"
    break;

  case 180: /* abstract-declarator: pointer  */
#line 381 "parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 2862 "parser.tab.c"
    break;

  case 181: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 382 "parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 2868 "parser.tab.c"
    break;

  case 182: /* abstract-declarator: direct-abstract-declarator  */
#line 383 "parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2874 "parser.tab.c"
    break;

  case 183: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 386 "parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 2880 "parser.tab.c"
    break;

  case 184: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 387 "parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 2886 "parser.tab.c"
    break;

  case 185: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 388 "parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2892 "parser.tab.c"
    break;

  case 186: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 389 "parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 2898 "parser.tab.c"
    break;

  case 187: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 390 "parser.y"
                                                 {   }
#line 2904 "parser.tab.c"
    break;

  case 188: /* direct-abstract-declarator: '[' '*' ']'  */
#line 391 "parser.y"
                      {  }
#line 2910 "parser.tab.c"
    break;

  case 189: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 392 "parser.y"
                                                                 { }
#line 2916 "parser.tab.c"
    break;

  case 190: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 393 "parser.y"
                                      { }
#line 2922 "parser.tab.c"
    break;

  case 191: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 394 "parser.y"
                                             { }
#line 2928 "parser.tab.c"
    break;


#line 2932 "parser.tab.c"

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

#line 424 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
