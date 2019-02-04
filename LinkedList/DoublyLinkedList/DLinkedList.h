//
// Created by dnn on 29.01.19.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H

#include "DoublyLinkedListNode.h"

#define Node DoublyLinkedListNode


class DLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;
private:
    void copy(const DLinkedList &);
    void unleashData();
    void init();
    void validateIndex(int index);

public:
    DLinkedList();
    ~DLinkedList();
    DLinkedList &operator=(const DLinkedList &);
    DLinkedList(const DLinkedList &);

    bool contains(int);
    Node* getHead();
    Node* getTail();

    void removeHead();
    void removeTail();
    void removeByIndex(int index);
    void removeByValue(int value);

    bool insert(int newValue); // insert at the beginning, new head
    bool append(int newValue); // appends at the end, new tail

    Node* getAt(int index);
    const Node* operator[](int index);

    void print() const;
    int getSize() const;
};


#endif //DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
