#include <iostream>
#include "List.h"

using namespace std;

int main(){
    List L;
    int target;

    createList(L);
    for(int i = 0; i < 5; i++){
        int angka;
        cin >> angka;
        address p = allocate(angka);
        insertLast(L, p);
    }
    printInfo(L);
    address prec = next(first(L));
    address p = allocate(6);
    insertAfter(L, prec, p);
}
