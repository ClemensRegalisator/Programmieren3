#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void){
    nodep liste = NULL;
    liste = insertAt(liste, 0, "1");
    liste = insertAt(liste, 1, "2");
    liste = insertAt(liste, 2, "3");
    liste = insertAt(liste, 3, "4");
    liste = insertAt(liste, 2, "5");
    printList(liste);
    return 0;
}
