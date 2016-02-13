#ifndef NODE_H
#define NODE_H
#include "Member.h"

class Node
{
    public:
        Node();
        // Getters and setters
        int getData() { return data; }
        void setData(int val) { data = val; }
    protected:

    private:
        int data;
        Node* left;
        Node* right;
};

#endif // NODE_H
