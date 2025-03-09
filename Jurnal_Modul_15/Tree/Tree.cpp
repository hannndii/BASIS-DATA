#include <iostream>
#include "Tree.h"

using namespace std;

adrNode newNode_103022300064(infotype x){
    adrNode temp = new Node;
    temp->info = x;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}
adrNode findNode_103022300064(adrNode root, infotype x){
    if(root == nullptr || root->info == x){
        return root;
    }
    if (x < root->info){
        return findNode_103022300064(root->left, x);
    } else {
        return findNode_103022300064(root->right, x);
    }
}
void insertNode_103022300064(adrNode &root, adrNode p){
    if(root == nullptr){
        root = p;
    } else if(root->info < p->info){
        return insertNode_103022300064(root->right, p);
    } else {
        return insertNode_103022300064(root->left, p);
    }
}
void printInOrder_103022300064(adrNode root) {
    if (root != nullptr) {
        printInOrder_103022300064(root->left);
        cout << root->info << " ";
        printInOrder_103022300064(root->right);
    }
}

adrNode mostLeftNode_103022300064(adrNode root){
    if(root->left == nullptr){
        return root;
    } else {
        return mostLeftNode_103022300064(root->left);
    }
}
adrNode mostRightNode_103022300064(adrNode root){
    if(root->right == nullptr){
        return root;
    } else {
        return mostRightNode_103022300064(root->right);
    }
}

