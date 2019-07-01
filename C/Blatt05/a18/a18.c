#include <stdio.h>
#ifndef DE
    #define DE "Ohne Hörgerät höre ich nichts"
#endif
    
#ifndef NL
    #define NL "Zonder gehoorapparaat hoor ik niets"
#endif
    
#ifdef FI
    #define FI "Ilman kuuloleitta en kuula mitään"
#endif
#ifdef SE
    #define SE "Jag hör ingenting utan hörselapparat"
#endif
#ifdef IT
    #define IT "Senza l’apparecchio d’autito non sento niente"
#endif
#ifdef CN
    #define CN "mei zhu ting qi jiu tingbujian"
#endif
int main(int argc, char *argv[]){
    
    printf("%s", DE);
    
    return 0;

}
