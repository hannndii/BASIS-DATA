#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

typedef struct Node *adrNode;
typedef int infotype;

struct Node{
    infotype info;
    adrNode left;
    adrNode right;

};

adrNode newNode_103022300064(infotype x);
adrNode findNode_103022300064(adrNode root, infotype x);
void insertNode_103022300064(adrNode &root, adrNode p);
void printInOrder_103022300064(adrNode root);
adrNode mostLeftNode_103022300064(adrNode root);
adrNode mostRightNode_103022300064(adrNode root);

#endif // TREE_H_INCLUDED

