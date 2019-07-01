#include <stdio.h>
#include "textfun.h"
#include <string.h>

int main(int argc, char *argv[]){
    int i;
    size_t buffsize = 200;
    char *suchwort;
    char *ersatzwort;
    char eingabe[buffsize];
    
  /* mitgegebene strings in such und ersatzwoerter trennen, wordlist befuellen*/   
    for(i = 1; i < argc; i++){
    suchwort = strtok(argv[i], "=");
    ersatzwort = strtok(NULL, "=");
    addPair(suchwort, ersatzwort);
    }
    
    /* tastatureingabe lesen und in string speichern*/
    
    while(getline(&eingabe, &buffsize, stdin) != EOF){
        find(eingabe);
    }
    
    
    return 0;
}
