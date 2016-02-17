#include "Node.h"

using namespace std;

// Constructor
Node::Node(){
    // Set the value of this Node
}


Node* Node::GetNewNode(int data){
        // Create new node
        Node* newNode = new Node();
        // Set values of data and left/right child
        newNode->data = data;
        newNode->left = newNode->right = 0;
}

Node* Node::Insert(Node* root, int data){
        if(root == 0){ // Empty Tree
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

bool Node::Search(Node* root, int data){
    // Assume our search is false
    bool valid = false;

    if(root == 0) valid = false;
    else if(root->data == data) valid = true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);

    return valid;
}
