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
    nodep temp;
    nodep temp2;
    nodep new = malloc(sizeof(struct knoten));
    new -> data = data;
    if(list == NULL){
        return new;
    }
    if(pos == 0){
        new->next = list;
        list->prev = new;
        return new;
    }
    
    temp = list;
    while(temp->next != NULL && pos > 1){
        temp=temp->next;
        pos--;
    }
    if(temp -> next == NULL){
    temp->next = new;
    new->prev = temp;
    }else{
        temp2 = temp ->next;
        temp -> next = new;
        new -> prev = temp;
        new -> next = temp2;
        temp2 -> prev = new;
    }
    return list;
    
}

nodep deleteAt(nodep list, int pos){
    return list;
}


nodep copyList(nodep list){
    return list;
}

void deleteList(nodep list){
}


