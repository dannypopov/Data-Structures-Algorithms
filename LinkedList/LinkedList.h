//
// Created by yordan.popov on 25.01.19.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H


#include "Node.h"

/**
 *  head-> [prev:null, key:1, next:2] -> [prev:1, key:2, next:3] -> [prev:2, key:3, next:null]
 *  when we insert we change the pointer to head
 */
class LinkedList
{
private:
    Node *m_head;
    int size;

private:
    void init();

    void copyFrom(const LinkedList &);

    void unleashData();

public:
    //BIG FOUR
    LinkedList();

    ~LinkedList();

    LinkedList(const LinkedList &);

    LinkedList &operator=(const LinkedList &);

    //add
    void insert(int newData);

    //delete
    void remove(int value);

    //search
    bool containsValue(int &value);

    Node *searchNode(int &value);

    //get
    int getValue(int &index);

    Node *getNode(int &index);

    //print
    void print() const;
};

#endif //DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
