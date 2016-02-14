#include <iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

// Create a new node in dynamic memory
BstNode* GetNewNode(int data){
    // Create new node
    BstNode* newNode = new BstNode();
    // Set values of data and left/right child
    newNode->data = data;
    newNode->left = newNode->right = NULL;
}

BstNode* Insert(BstNode* root, int data){
    if(root == NULL){ // Empty Tree
        root = GetNewNode(data);

    }
    else if(data <= root->data){
        root->left = Insert(root->left, data);
    }
    else{
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(BstNode* root, int data){
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);
}
