#include "Main.h"
#include "Node.h";
#include <iostream>
using namespace std;

int main(){

    // Create the tree
    Node* root = 0;
    root = root->Insert(root, 10);
    root = root->Insert(root, 50);
    root = root->Insert(root, 60);

    // Hold input
    int number;

    // Ask for input
    cout << "Enter a number to search in the tree \n";
    cin >> number;

    // Check if this number is inside the tree
    if(root->Search(root, number) == true) cout << "Found\n";
    else cout << "Not found \n";
}

