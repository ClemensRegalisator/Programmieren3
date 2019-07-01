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
    
    if(pos < 0){
        temp = list;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp -> next = new;
    new -> prev = temp;
    return list;
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
    nodep temp = list;
    nodep safe;
    if(list == NULL){
        printf("Liste ist leer. Es gibt nichts zu löschen!");
        return list;
    }
    if(pos == 0){
        safe = temp -> next;
        free(temp);
        return safe;
        
    }
    while(temp -> next != NULL && pos > 0){
        temp = temp -> next;
        pos--;
    }
    if(temp -> next == NULL){
        safe = temp -> prev;
        safe -> next == NULL;
        free(temp);
    }else{
        safe = temp->prev;
        safe -> next = temp -> next;
        free(temp);
        temp = safe -> next;
        temp -> prev = safe;
        
    }
    return list;
}


nodep copyList(nodep list){
    return list;
}

void deleteList(nodep list){
    nodep temp;
 
    while(list){
        temp = list -> next;
        free(list);
        list = temp;
    }
}


