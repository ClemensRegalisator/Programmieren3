#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

nodep head = NULL;
nodep tail = NULL;




void printList(nodep list){
    if(list == NULL){
        printf("Die Liste ist leer du dämlicher Bastard!\n");
    }else{
        do{
            printf("%p", list -> data);
        }while(list -> next != NULL);
}
}


nodep insertAt(nodep list, int pos, void *data){
    nodep aktNode;
    int counter = 0;
    int i;
    if(list == NULL){
        if(pos != 0){
            printf("Fehler!");
            return list;
        }else{
            nodep new = malloc(sizeof(nodep));
            new -> data = data;
            return new;
        }
    }else{
        aktNode = list;
        do{
            counter++;
            aktNode = aktNode -> next;
        }while(aktNode -> next);
        aktNode = list;
       } if(pos == counter){
            while(aktNode -> next){
                aktNode = aktNode -> next;
            }
            nodep new = malloc(sizeof(nodep));
            new -> data = data;
            aktNode -> next = new;
            new -> prev = aktNode;
    }else if(pos < counter){
        aktNode = list;
        for(i = 0; i < pos; i++){
            aktNode = aktNode -> next;
        }
        nodep new = malloc(sizeof(nodep));
            new -> data = data;
            nodep temp;
            temp = aktNode -> next;
            temp -> prev = new;
            new -> next = aktNode -> next;
            aktNode -> next = new;
            new -> prev = aktNode;
            
        
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


