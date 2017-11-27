#ifndef LIST_H
#define LIST_H

typedef struct _nodep{
    struct nodep *next;
    struct nodep *prev;
    void *data;
}*nodep;

extern void printList(nodep list);
extern nodep insertAt(nodep list, int pos, void *data);
extern nodep deleteAt(nodep list, int pos);
extern nodep copyList(nodep list);
extern void deleteList(nodep list);



#endif
