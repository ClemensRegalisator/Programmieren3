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
    int i;
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
    while(counter > 0){
        
	for(i = 0; i < anzahl; i++){
        letztePerson = aktPerson;
        aktPerson = aktPerson -> next;
    }
    
	letztePerson -> next = aktPerson -> next;
    printf("Raus: ");
    printf("%s\n", aktPerson -> name);
    free(aktPerson);
    aktPerson = letztePerson;
    
    counter --;
}
	return 0;
}
