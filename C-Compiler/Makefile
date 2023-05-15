CC = gcc
CFLAGS = -Wall

PARSER_DIR = parser
LEXER_DIR = lexer
QUADS_DIR = quads
CODEGEN_DIR = codegen

PARSER_SRCS = $(PARSER_DIR)/parser.y
LEXER_SRCS = $(LEXER_DIR)/lex.l
AST_SRCS = $(PARSER_DIR)/ast.c
SYMBTAB_SRCS = $(PARSER_DIR)/symbtab.c $(PARSER_DIR)/symbtab.h
SYMBTABINSERT_SRCS = $(PARSER_DIR)/symbtabinsert.c $(PARSER_DIR)/symbtabinsert.h
QUADS_SRCS = $(QUADS_DIR)/quads.c $(QUADS_DIR)/quads.h $(QUADS_DIR)/sizeof.c
CODEGEN_SRCS = $(CODEGEN_DIR)/codegen.c $(CODEGEN_DIR)/codegen.h

PARSER_TAB_C = $(PARSER_DIR)/parser.tab.c
PARSER_TAB_O = $(PARSER_DIR)/parser.tab.o
LEXER_YY_C = $(LEXER_DIR)/lex.yy.c
LEXER_YY_O = $(LEXER_DIR)/lex.yy.o
AST_O = $(PARSER_DIR)/ast.o
SYMBTAB_O = $(PARSER_DIR)/symbtab.o
SYMBTABINSERT_O = $(PARSER_DIR)/symbtabinsert.o
QUADS_O = $(QUADS_DIR)/quads.o $(QUADS_DIR)/sizeof.o
CODEGEN_O = $(CODEGEN_DIR)/codegen.o

jcc: $(PARSER_TAB_O) $(LEXER_YY_O) $(AST_O) $(SYMBTAB_O) $(SYMBTABINSERT_O) $(QUADS_O) $(CODEGEN_O)
	$(CC) $(CFLAGS) -o jcc $(LEXER_YY_O) $(PARSER_TAB_O) $(AST_O) $(SYMBTAB_O) $(SYMBTABINSERT_O) $(QUADS_O) $(CODEGEN_O)

$(PARSER_TAB_C): $(PARSER_SRCS)
	bison -d -o $@ $<

$(LEXER_YY_C): $(LEXER_SRCS)
	flex -o $@ $<

$(PARSER_TAB_O): $(PARSER_TAB_C)
	$(CC) $(CFLAGS) -c $< -o $@

$(LEXER_YY_O): $(LEXER_YY_C)
	$(CC) $(CFLAGS) -c $< -o $@

$(AST_O): $(AST_SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(SYMBTAB_O): $(SYMBTAB_SRCS)
	$(CC) $(CFLAGS) -c $(PARSER_DIR)/symbtab.c -o $(SYMBTAB_O)

$(SYMBTABINSERT_O): $(SYMBTABINSERT_SRCS)
	$(CC) $(CFLAGS) -c $(PARSER_DIR)/symbtabinsert.c -o $(SYMBTABINSERT_O)

$(QUADS_O): $(QUADS_SRCS)
	$(CC) $(CFLAGS) -c $(QUADS_DIR)/sizeof.c -o $(QUADS_DIR)/sizeof.o
	$(CC) $(CFLAGS) -c $(QUADS_DIR)/quads.c -o $(QUADS_DIR)/quads.o


$(CODEGEN_O): $(CODEGEN_SRCS)
	$(CC) $(CFLAGS) -c $(CODEGEN_DIR)/codegen.c -o $(CODEGEN_DIR)/codegen.o

debug: CFLAGS += -g
debug: CC = gcc -g

clean:
	rm -f jcc $(PARSER_TAB_C) $(LEXER_YY_C) $(PARSER_TAB_O) $(LEXER_YY_O) $(AST_DIR)/$(AST_O) $(SYMBTAB_DIR)/$(SYMBTAB_O) $(SYMBTAB_DIR)/$(SYMBTABINSERT_O) $(QUADS_DIR)/$(QUADS_O) $(QUADS_DIR)/sizeof.o $(CODEGEN_DIR)/$(CODEGEN_O)
