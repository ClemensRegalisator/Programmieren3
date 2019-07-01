#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define LAENGE 100
#define ANZAHL 32


struct ele {
int anzahl; /* abs. Haeufigkeit dieses Zeichens */
char codezeichen; /* Zeichen im verschluesselten Text */

};


struct ele dict[26];

void run(char c, char encrypt[26], char decrypt[26]){
	int i;
	int bool = 1;
	for(i = 0; i < 26; i++){
	if(decrypt[i] == c){
		printf("%c", encrypt[i]);
		bool = 0;
		break;
}
}
	if(bool == 1){
		printf("%c", c);
	}
}
void speichern(char c){
    int i = 0;
    int index = 0;
    struct ele *dictP = dict;
  if(c >= 97 && c <= 122){  
    while(dictP -> anzahl != 0){
        if(dictP -> codezeichen == c){
            dictP -> anzahl++;
            i = 1;
        }
        index++;
        dictP++;
    }
        if(i == 0){
            dictP = malloc(sizeof(struct ele));
            dictP->codezeichen = c;
            dictP->anzahl = 1;
            dict[index] = *dictP;
        }
    }
        
    }
    
    int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

    




int main (int argc, char *argv[]){
    
    char folge[] = "eniastruhdlcmogkwbzfvpjxyq";
    char key[26] = {'0'};
    char c;
    int i;
    FILE * text;
    
    
    text = fopen(argv[1], "r+");
    
    while(!feof(text)){
        c = fgetc(text);
        speichern(c);
    }
    
    fclose(text);
    
 
  
    
    qsort(dict, 26, sizeof(struct ele), cmpfunc);
  
    for(i = 0; i < 26; i++){
        key[i] = dict[i].codezeichen;
    }

    
    text = fopen(argv[1], "r+");
    
    while(!feof(text)){
        c = fgetc(text);
        run(c, folge, key);
    }
   
    fclose(text);

    
    
    return 0;
}
