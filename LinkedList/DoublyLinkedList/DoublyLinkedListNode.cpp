//
// Created by dNN on 04.02.19.
//

#include "DoublyLinkedListNode.h"

DoublyLinkedListNode::DoublyLinkedListNode(int data, DoublyLinkedListNode *prev, DoublyLinkedListNode *next) : data(
        data), prev(prev), next(next)
{}

int DoublyLinkedListNode::getData() const
{
    return data;
}

DoublyLinkedListNode *DoublyLinkedListNode::getPrev() const
{
    return prev;
}

DoublyLinkedListNode *DoublyLinkedListNode::getNext() const
{
    return next;
}

void DoublyLinkedListNode::setData(int data)
{
    DoublyLinkedListNode::data = data;
}

void DoublyLinkedListNode::setPrev(DoublyLinkedListNode *prev)
{
    DoublyLinkedListNode::prev = prev;
}

void DoublyLinkedListNode::setNext(DoublyLinkedListNode *next)
{
    DoublyLinkedListNode::next = next;
}
