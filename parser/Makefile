CC = gcc

parser: parser.tab.o lex.yy.o ast.o symbtab.o parser.tab.h symbtab.h
	$(CC) -o parser lex.yy.o parser.tab.o ast.o symbtab.o

parser.tab.c: parser.y
	bison -d parser.y

lex.yy.c: lex.l
	flex lex.l

parser.tab.o: parser.tab.c
	$(CC) -c parser.tab.c

lex.yy.o: lex.yy.c
	$(CC) -c lex.yy.c

ast.o: ast.c
	$(CC) -c ast.c

symbtab.o: symbtab.c symbtab.h
	$(CC) -c symbtab.c
clean:
	rm -f parser parser.tab.* lex.yy.* ast.o