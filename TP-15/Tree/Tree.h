#ifndef TREE_H
#define TREE_H

typedef int infotype;
typedef struct node *adrNode;

struct node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_10302230064(infotype x);
void insertNode_10302230064(adrNode &root, adrNode p);
void DeleteNode_10302230064(adrNode &root, adrNode &p);
void printInOrder_10302230064(adrNode root);
adrNode findMin_10302230064(adrNode root);

#endif
