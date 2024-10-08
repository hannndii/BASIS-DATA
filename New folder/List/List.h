#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList(List &L);

address allocate(infotype x);

void insertFirst(List &L, address p);

void printInfo(List L);

void deleteFirst(List &L, address &P);


#endif // LIST_H_INCLUDED
