#include <stddef.h>
struct List;
struct List *createList();
size_t len(struct List*);
void addToFront(struct List *, int);
void removeItem(struct List *, size_t);
int ith(struct List *, size_t);
void setElem(struct List *, size_t, int);
void deleteList(struct List *);
