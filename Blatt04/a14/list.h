#ifndef LIST_H
#define LIST_H

typedef struct knoten *nodep;
struct knoten{
    nodep next;
    nodep prev;
    void *data;
};

extern void printList(nodep list);
extern nodep insertAt(nodep list, int pos, void *data);
extern nodep deleteAt(nodep list, int pos);
extern nodep copyList(nodep list);
extern void deleteList(nodep list);



#endif
