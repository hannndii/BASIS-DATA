#include <iostream>
#include "List.h"

using namespace std;


void createList(List &L){
    first(L) = NULL;
}


address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    return p;
}


void insertLast(List &L, address P){
    if(first(L) == NULL){
        first(L) = P;
    } else {
        address q = first(L);
        while(next(q) != NULL){
            q = next(q);
        }
        next(q) = P;
    }

}

void printInfo(List L){
    address p = first(L);
    while(p != NULL){
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}

void searchInfo(List L, int target){
    bool ketemu;
    address p = first(L);
        while(next(p) != NULL){
            if (info(p) == target){
                cout << "ketemu, " << info(p);
                ketemu = true;
                break;
            } else {
                ketemu = false;
                p = next(p);
            }
        }
        if(!ketemu){
            cout << "Tidak ketemu" << endl;
        }

    }

void insertFirst(List &L, address P){
    if(first(L) == NULL){
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertAfter(List &L, address prec, address P){
    if(prec != NULL){
        next(P) = next(prec);
        next(prec) = P;
    }





