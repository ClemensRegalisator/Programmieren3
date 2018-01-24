#include <stdio.h>
#define LAENGE 100
#define ANZAHL 32


struct ele {
char codezeichen; /* Zeichen im verschluesselten Text */
int anzahl; /* abs. Haeufigkeit dieses Zeichens */
};

void speichern(char line[LAENGE], struct ele dict[26]){
    printf("%s", line[0]);
    
    return dict;
}



int main (int argc, char *argv[]){
    
    struct ele dict[26];
    
    
    FILE *datei;
  char line[ANZAHL][LAENGE];
   int i ;
  datei = fopen ("a21-raeuberbrief.enc", "r");
  if (datei != NULL)
    {
    for(i = 0; i < ANZAHL;i++) {
        
        fgets(line[i],LAENGE,datei);  
        speichern(dict, line[i]);
    }
    fclose (datei);
    }
    
    return 0;
}
