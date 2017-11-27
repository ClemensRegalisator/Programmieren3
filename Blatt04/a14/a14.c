#include <stdio.h>
#include "list.h"

int main(void){
    nodep liste = NULL;
    liste = insertAt(liste, 0, "hi");
     liste = insertAt(liste, 1, "hi");
   
    
    printList(liste);
    return 0;
}
