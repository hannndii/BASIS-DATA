#include "tree.h"
#include <iostream>
using namespace std;

adrNode newNode_10302230064(infotype x) {
    adrNode p = new node;
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void insertNode_10302230064(adrNode &root, adrNode p) {
    if (root == NULL) {
        root = p;
    } else {
        if (p->info < root->info) {
            insertNode_10302230064(root->left, p);
        } else {
            insertNode_10302230064(root->right, p);
        }
    }
}

adrNode findMin_10302230064(adrNode root) {
    if (root == NULL) {
        return NULL;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

void DeleteNode_10302230064(adrNode &root, adrNode &p) {
    if (root == NULL) return;

    if (p->info < root->info) {
        DeleteNode_10302230064(root->left, p);
    } else if (p->info > root->info) {
        DeleteNode_10302230064(root->right, p);
    } else {
        adrNode temp;

        if (root->left == NULL && root->right == NULL) {
            temp = root;
            root = NULL;
            delete temp;
        }
        else if (root->left == NULL) {
            temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL) {
            temp = root;
            root = root->left;
            delete temp;
        }
        else {
            temp = findMin_10302230064(root->right);
            root->info = temp->info;
            DeleteNode_10302230064(root->right, temp);
        }
    }
}

void printInOrder_10302230064(adrNode root) {
    if (root != NULL) {
        printInOrder_10302230064(root->left);
        cout << root->info << " ";
        printInOrder_10302230064(root->right);
    }
}
