#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List L;
    createList(L);
    int angka;
    for (int i = 0; i < 5; i++){
        cin >> angka;
        address p = allocate(angka);
        insertFirst(L, p);
    }
    cout << "isi list:";
    printInfo(L);

    return 0;
}
