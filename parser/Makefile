CC = gcc
CFLAGS = -Wall

parser: parser.tab.o lex.yy.o ast.o symbtab.o symbtabinsert.o quads.o
	$(CC) $(CFLAGS) -o parser lex.yy.o parser.tab.o ast.o symbtab.o symbtabinsert.o quads.o

parser.tab.c: parser.y
	bison -d parser.y

lex.yy.c: lex.l
	flex lex.l

parser.tab.o: parser.tab.c
	$(CC) $(CFLAGS) -c parser.tab.c

lex.yy.o: lex.yy.c
	$(CC) $(CFLAGS) -c lex.yy.c

ast.o: ast.c
	$(CC) $(CFLAGS) -c ast.c

symbtab.o: symbtab.c symbtab.h
	$(CC) $(CFLAGS) -c symbtab.c

symbtabinsert.o: symbtabinsert.c symbtabinsert.h
	$(CC) $(CFLAGS) -c symbtabinsert.c

quads.o: quads.c quads.h
	$(CC) $(CFLAGS) -c quads.c

debug: CFLAGS += -g
debug: CC = gcc -g
debug: parser

clean:
	rm -f parser parser.tab.* lex.yy.* ast.o symbtab.o symbtabinsert.o quads.o
