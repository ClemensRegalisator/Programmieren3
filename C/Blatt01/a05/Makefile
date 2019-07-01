.PHONY: run clean

a05: a05.c
	cc -g -ansi -pedantic -Wall a05.c -o a05
	
run: a05
	cat rot.txt | ./a05 >ergebnis.txt
run2: a05
	cat ergebnis.txt | ./a05 >rot.txt
clean:
	rm a05

	

