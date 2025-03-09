#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
     int x[9] = {4, 6, 7, 8, 9, 12, 13, 15, 17};
    adrNode root = nullptr;

    // 1. Tambahkan setiap elemen array x ke dalam BST secara berurutan
    for (int i = 0; i < 9; ++i) {
        adrNode newNodePtr = newNode_103022300064(x[i]);
        insertNode_103022300064(root, newNodePtr);
    }


    // 2. Tampilkan node dari BST secara In-Order
    cout << "\nIn-Order\t: ";
    printInOrder_103022300064(root);
    cout << endl;

    // 3. Tampilkan node dari BST paling kiri
    cout << "\Most Left Node: ";
    adrNode temp1 = mostLeftNode_103022300064(root);
    cout << temp1->info << endl;


    // 4. Tampilkan node dari BST paling kiri
    cout << "\Most Right Node: ";
    adrNode temp2 = mostRightNode_103022300064(root);
    cout << temp2->info << endl;


    return 0;
}
