#ifndef NODE_H
#define NODE_H
#include "Member.h"

class Node
{
    public:
        Node();
        virtual ~Node();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
        Member data;
        Node* seniorColleague;
        Node* firstColleague;
        Node* firstJuniorColleague;
};

#endif // NODE_H
