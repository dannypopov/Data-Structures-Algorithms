//
// Created by dnn on 29.01.19.
//

#include <regex>
#include <iostream>
#include "DLinkedList.h"

void DLinkedList::copy(const DLinkedList &other)
{

}

void DLinkedList::unleashData()
{
    Node *tmp = head;
    while (tmp)
    {
        Node *forDeletion = tmp;
        tmp = tmp->getNext();
        delete forDeletion;
    }
    init();
}

void DLinkedList::init()
{
    head = tail = nullptr;
    size = 0;
}

DLinkedList::DLinkedList()
{
    init();
}

DLinkedList::~DLinkedList()
{
    unleashData();
}

DLinkedList &DLinkedList::operator=(const DLinkedList &rhs)
{
    if (this != &rhs)
    {
        unleashData();
        copy(rhs);
    }
    return *this;
}

DLinkedList::DLinkedList(const DLinkedList &other)
{
    copy(other);
}

bool DLinkedList::contains(int value)
{
    Node *curr = head;
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

Node *DLinkedList::getHead()
{
    return head;
}

Node *DLinkedList::getTail()
{
    return tail;
}

void DLinkedList::removeHead()
{

}

void DLinkedList::removeTail()
{

}

void DLinkedList::removeByIndex(int index)
{

}

void DLinkedList::removeByValue(int value)
{

}

bool DLinkedList::insert(int newValue)
{
    Node *newNode = new Node(newValue, nullptr, head);
    if (head != nullptr)
    {
        head->setPrev(newNode);
    }
    if (tail == nullptr)
    {
        tail = newNode;
    }
    head = newNode;
    ++size;
}

bool DLinkedList::append(int newValue)
{
    Node *newNode = new Node(newValue, tail, nullptr);
    if (tail != nullptr)
    {
        tail->setNext(newNode);
    }
    if (head == nullptr)
    {
        head = newNode;
    }
    tail = newNode;
    ++size;
}

Node *DLinkedList::getAt(int index)
{
    validateIndex(index);
    int counter = 0;
    Node *curr = head;
    while (curr && index != counter)
    {
        curr = curr->getNext();
        ++counter;
    }
    return curr;
}

const Node *DLinkedList::operator[](int index)
{
    validateIndex(index);
    return getAt(index);
}

void DLinkedList::print() const
{
    Node *curr = head;
    while (curr)
    {
        std::cout << curr->getData() << " ";
        curr = curr->getNext();
    }
    std::cout << std::endl;
}

int DLinkedList::getSize() const
{
    return size ;
}

void DLinkedList::validateIndex(int index)
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Invalid index!");
    }
}
