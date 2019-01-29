//
// Created by dnn on 29.01.19.
//

#include "SinglyLinkedListNode.h"

SinglyLinkedListNode::SinglyLinkedListNode(int data, SinglyLinkedListNode *next)
        : data(data), next(next)
{}

int SinglyLinkedListNode::getData() const
{
    return data;
}

SinglyLinkedListNode *SinglyLinkedListNode::getNext() const
{
    return next;
}

void SinglyLinkedListNode::setData(int data)
{
    SinglyLinkedListNode::data = data;
}

void SinglyLinkedListNode::setNext(SinglyLinkedListNode *next)
{
    SinglyLinkedListNode::next = next;
}
