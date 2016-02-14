#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node();

        Node* GetNewNode(int data);
        Node* Insert(Node* root, int data);
        bool Search(Node* root, int data);

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
