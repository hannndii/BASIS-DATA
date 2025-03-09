#include "tree.h"
#include <iostream>
using namespace std;

int main() {
    adrNode root = NULL;
    int numbers[] = {8,9,12,13,15,17,7,6,4};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < n; i++) {
        adrNode p = newNode_10302230064(numbers[i]);
        insertNode_10302230064(root, p);
    }

    printInOrder_10302230064(root);
    cout << endl;

    int toDelete[] = {8,9,12,13,15,17,7,6,4};
    for (int i = 0; i < n; i++) {
        adrNode p = newNode_10302230064(toDelete[i]);
        DeleteNode_10302230064(root, p);
        cout << toDelete[i] << ": ";
        printInOrder_10302230064(root);
        cout << endl;
    }

    return 0;
}
