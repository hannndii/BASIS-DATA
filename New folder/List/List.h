#include <iostream>
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next

using namespace std;

typedef struct elmlist *address;
typedef int infotype;

struct elmlist{
    address next;
    infotype info;
};

struct List{
    address first;
};

void createList(List &L);

address allocate(infotype x);

void insertLast(List &L, address P);

void printInfo(List L);

void searchInfo(List L, int);

void insertFirst(List &L, address P);

void insertAfter(List &L, address P);
