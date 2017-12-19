#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void zensurBitte(char *wort, int argc, char *argv[]){
    char *wortP1 = wort;
    char *wortP2 = wort;
    char *zensP;
    int i;
    
    for(i = 1; i < argc; i++){
        zensP = argv[i];
        while(tolower(*wortP1) == tolower(*zensP) && (*wortP1 != '\0')){
            *wortP1++;
            *zensP++;
        }
        if(*wortP1 == '\0'){
            *wortP2++;
            while(*wortP2 != '\0'){
                *wortP2 = '*';
                *wortP2++;
            }
            break;
        }
        
    }
    printf("%s ", wort);
}



int main(int argc, char *argv[]){
    
      char eingabe [200];
    while(scanf("%s ", eingabe) != EOF){
       zensurBitte(eingabe, argc, argv);
        
    }
    
    
    return 0;
}
