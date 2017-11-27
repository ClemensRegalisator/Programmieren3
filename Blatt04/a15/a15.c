#include <stdio.h>
#include <string.h>



int main (int argc, char *argv[]){
    char eingabe [200];
    
    printf("Herzlich Wilkommen Sie Kackwurst,\n Geben Sie einen Text ein, Ich zensier dir\n");
    
    while(scanf("%s", &eingabe) != EOF){
        machMalGeileZensurDrauf(argc, argv, eingabe);
    }
    
    return 0;
    
}
    
