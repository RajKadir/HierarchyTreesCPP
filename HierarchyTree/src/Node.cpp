#include "Node.h"


// Constructor
Node::Node(Member _data, Node* _parent)
{
    // Set the value of this Node
    m_Data = _data;
    m_Parent = _parent;
}

Node::Node(Member _data, int _parent)
{
    // Set the value of this Node
    m_Data = _data;
    m_Counter = _parent;
}
