.PHONY: run clean

all:a14

list.o: list.c list.h
	cc -c -g -ansi -pedantic -Wall list.c
 
a14.o: a14.c list.h
	cc -c -g -ansi -pedantic -Wall a14.c

a14: a14.o list.o
	cc -g -ansi -pedantic -Wall list.o a14.o -o a14
 
 
run: a14
	./a14

val: a14
	valgrind ./a14
	
nem: a14
	nemiver ./a14

clean: a14
	rm a14 list.o a14.o
 
