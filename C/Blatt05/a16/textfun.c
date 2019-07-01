#include <stdio.h>
#include "textfun.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>



 void addPair(const char *such, const char *ersatz){
     
     listEle new = malloc(sizeof(listEle));
       strcpy(new -> suchwort, such);
        strcpy(new -> ersetzungswort, ersatz);
    if(wordlist == NULL){
        wordlist = new;
    }else{
        listEle aktnode = wordlist;
        while(aktnode -> next){
            aktnode = aktnode -> next;
        }
        
        aktnode -> next = new;
    }
     
 }
 void clearList(void){
     
 }
 char *find(const char *find){
     char *wortP1 = find;
     char *wortP2 = find;
     listEle aktNode = wordlist;
     char* wortP3 = aktNode -> suchwort;
     while(wortP1){
     while(wortP3){
            if( )
            if(wortP1 == wortP3){
                wortP1++;
                wortP3++;
            }
            
            else{
                wortP1 = WortP2;
                aktNode = aktNode -> next;
                wortP3 = aktNode -> suchwort;
            }
         
        
         
     }
     
 }
     
 }
 int replaceAll (char *s ){
     
 }
