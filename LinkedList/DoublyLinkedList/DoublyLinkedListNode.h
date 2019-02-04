//
// Created by dNN on 04.02.19.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_DOUBLYLINKEDLISTNODE_H
#define DATA_STRUCTURES_ALGORITHMS_DOUBLYLINKEDLISTNODE_H


class DoublyLinkedListNode
{
private:
    int data;
    DoublyLinkedListNode *prev;
    DoublyLinkedListNode *next;
public:
    DoublyLinkedListNode(int data, DoublyLinkedListNode *prev = nullptr,
                         DoublyLinkedListNode *next = nullptr);

    int getData() const;

    DoublyLinkedListNode *getPrev() const;

    DoublyLinkedListNode *getNext() const;

    void setData(int data);

    void setPrev(DoublyLinkedListNode *prev);

    void setNext(DoublyLinkedListNode *next);
};


#endif //DATA_STRUCTURES_ALGORITHMS_DOUBLYLINKEDLISTNODE_H
