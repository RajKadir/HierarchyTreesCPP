#ifndef NODE_H
#define NODE_H


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
};

#endif // NODE_H
