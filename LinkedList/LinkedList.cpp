//
// Created by yordan.popov on 25.01.19.
//
#include <iostream>
#include "LinkedList.h"

void LinkedList::init()
{
    size = 0;
    m_head = nullptr;
}

void LinkedList::copyFrom(const LinkedList &other)
{

}

void LinkedList::unleashData()
{
    Node *currNode = m_head;
    while (currNode)
    {
        Node *pDelete = currNode;
        currNode = currNode->getNext();
        delete pDelete;
    }

}

LinkedList::LinkedList()
{
    init();
}

LinkedList::~LinkedList()
{
    unleashData();
}

LinkedList::LinkedList(const LinkedList &other)
{
    copyFrom(other);
}

LinkedList &LinkedList::operator=(const LinkedList &rhs)
{
    if (this != &rhs)
    {
        unleashData();
        copyFrom(rhs);
    }
    return *this;
}

void LinkedList::insert(int newData)
{
    Node *newNode = new Node(newData, m_head);

    //if its not the first element
    //set old head previous to newNode
    if (m_head != nullptr)
    {
        m_head->setPrevious(newNode);
    }
    //set head to newNode
    m_head = newNode;
}

void LinkedList::remove(int value)
{
    Node *nodeForDeletion = searchNode(value);

    if (nodeForDeletion->getPrevious())
    {
        nodeForDeletion->getPrevious()->setNext(nodeForDeletion->getNext());
    } else
    {
        m_head = nodeForDeletion->getNext();
    }
    if (nodeForDeletion->getNext())
    {
        nodeForDeletion->getNext()->setPrevious(nodeForDeletion->getPrevious());
    }
}

bool LinkedList::containsValue(int &value)
{
    Node *curr = m_head;
    while (curr)
    {
        if (curr->getData() == value)
        {
            return true;
        }
        curr = curr->getNext();
    }
    return false;
}

Node *LinkedList::searchNode(int &value)
{
    Node *curr = m_head;
    while (curr && curr->getData() != value)
    {
        curr = curr->getNext();
    }
    return curr;
}

int LinkedList::getValue(int &index)
{
    return getNode(index)->getData();
}

Node *LinkedList::getNode(int &index)
{
    Node *curr = m_head;
    int counter = 0;
    while (counter != index)
    {
        curr = curr->getNext();
        ++index;
    }
    return curr;
}

void LinkedList::print() const
{
    Node *curr = m_head;
    while (curr)
    {
        std::cout << curr->getData() << " ";
        curr = curr->getNext();
    }
    std::cout << std::endl;
}

