#ifndef NODE_H
#define NODE_H
#include "Member.h"

class Node
{
    public:
        Node(Member _data, Node* _parent);
        Node(Member _data, int _parent);
        // Getters and setters
        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

        Member GetMember() { return m_Data; }
    protected:

    private:
        unsigned int m_Counter;
        Member m_Data;
        Node* m_Parent;
};

#endif // NODE_H
