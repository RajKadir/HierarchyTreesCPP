#include "Main.h"
#include "Node.h";
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

int main(){

/*    BstNode* root = NULL; // Create an empty tree
    root = Insert(root, 10);
    root = Insert(root, 50);
    root = Insert(root, 5);
*/

    Node* root = 0;
    root = root->Insert(root, 10);
    root = root->Insert(root, 50);
    root = root->Insert(root, 60);



    int number;

    cout << "Enter a number to search in the tree \n";
    cin >> number;
    if(root->Search(root, number) == true) cout << "Found\n";
    else cout << "Not found \n";
}

