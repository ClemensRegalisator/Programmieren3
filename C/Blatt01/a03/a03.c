#include <stdio.h>

int main(void){

    int zahl;
   
    
    printf("Bitte ganze Zahl eingeben: ");
    scanf("%d", &zahl);
   
    while(zahl >= 100){
    printf("C");
    zahl = zahl - 100;
    }
    while(zahl >= 50){
        printf("L");
        zahl -= 50;
    }
    while(zahl >= 10){
        printf("X");
        zahl -=10;
    }
    while(zahl >= 5){
        printf("V");
        zahl -= 50;
    }
    while(zahl >= 1){
        printf("I");
        zahl --;
    }
    
    
    
    return 0;
}
