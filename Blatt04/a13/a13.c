#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


typedef struct _person *Perspointer;
struct _person{
	char name[25];
	Perspointer next;
}person;



int main(int argc, char *argv[]){
	int anzahl = argc -1;
	int counter = 0;
	char aktName[25];
	Perspointer start;
	Perspointer letztePerson;
	Perspointer aktPerson;
	
	
/*einlesevorgang*/	
	while(scanf("%s", aktName) != EOF){
		if(counter == 0){
		start = malloc(sizeof(person));
		strcpy(start -> name, aktName);
		letztePerson = start;
		counter ++;
	}
		Perspointer neuePerson = malloc(sizeof(person));
		strcpy(neuePerson -> name, aktName);
		letztePerson -> next = neuePerson;
		letztePerson = neuePerson;
		counter++;
	}
	/* Ende mit Anfang verbinden um Kreis erhalten */
		letztePerson -> next = start;
	
	aktPerson = start;
	
	while(aktPerson -> next != 0){
		printf("%s", aktPerson -> next);
		aktPerson = aktPerson -> next;
	}
	
	
	return 0;
}
