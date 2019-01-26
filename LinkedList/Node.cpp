//
// Created by yordan.popov on 26.01.19.
//

#include "Node.h"

Node::Node(int m_data, Node *m_next, Node *m_previous)
        : m_data(m_data), m_next(m_next), m_previous(m_previous)
{}

int Node::getData() const
{
    return m_data;
}

Node *Node::getNext() const
{
    return m_next;
}

Node *Node::getPrevious() const
{
    return m_previous;
}

void Node::setData(int m_data)
{
    Node::m_data = m_data;
}

void Node::setNext(Node *m_next)
{
    Node::m_next = m_next;
}

void Node::setPrevious(Node *m_previous)
{
    Node::m_previous = m_previous;
}
