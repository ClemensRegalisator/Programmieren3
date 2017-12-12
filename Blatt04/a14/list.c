#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


void printList(nodep list){
    if(list == NULL){
        printf("Die Liste ist leer du dämlicher Bastard!\n");
    }else{
       while(list){
	   printf("%s \n", list -> data);
	   list = list -> next;
	   }
}
}


nodep insertAt(nodep list, int pos, void *data){
    nodep aktNode;
    int i = 0;
	 nodep new = malloc(sizeof(struct _nodep));
            new -> data = data;
    if(list == NULL){
            return new;   
    }else{
		aktNode = list;
		 while(aktNode -> next != NULL && i < pos){
			aktNode = aktNode -> next;
	}
	if(i == pos){
	aktNode -> next = new;
	new -> prev = aktNode;
	}
	
	if(i < pos && i >= 0){
		nodep temp = aktNode -> next;
		aktNode -> next = new;
		new -> prev = aktNode;
		new -> next = temp;
		temp -> prev = new;
	}
				 

} 
    return list;
}

nodep deleteAt(nodep list, int pos){
    return list;
}


nodep copyList(nodep list){
    return list;c
}

void deleteList(nodep list){
}


