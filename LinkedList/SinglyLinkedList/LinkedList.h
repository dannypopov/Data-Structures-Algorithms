//
// Created by dnn on 29.01.19.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H

#include "SinglyLinkedListNode.h"
#include <iostream>
#define Node SinglyLinkedListNode

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList();
    ~LinkedList();

    bool isEmpty();

    void addToHead(int);
    void addToTail(int);

    bool deleteHead();
    bool deleteTail();
    void deleteNode(int);

    bool contains(int);

    void print() const;
};
#endif //DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
