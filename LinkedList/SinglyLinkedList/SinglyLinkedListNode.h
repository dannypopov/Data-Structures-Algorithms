//
// Created by dnn on 29.01.19.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_NODE_H
#define DATA_STRUCTURES_ALGORITHMS_NODE_H


class SinglyLinkedListNode
{
private:
    int data;
    SinglyLinkedListNode *next;
public:
    SinglyLinkedListNode(int data, SinglyLinkedListNode *next = nullptr);

    int getData() const;

    SinglyLinkedListNode *getNext() const;

    void setData(int data);

    void setNext(SinglyLinkedListNode *next);
};


#endif //DATA_STRUCTURES_ALGORITHMS_NODE_H
