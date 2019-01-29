//
// Created by dnn 29.01.19.
//

#include "LinkedList.h"

LinkedList::LinkedList()
        : head(nullptr), tail(nullptr), size(0)
{}

LinkedList::~LinkedList()
{
    Node *curr = head;
    while (curr)
    {
        Node *forDeletion = curr;
        curr = curr->getNext();
        delete forDeletion;
    }
    head = tail = nullptr;
    size = 0;
}

bool LinkedList::isEmpty()
{
    return size == 0;
}

void LinkedList::addToHead(int newEl)
{
    Node *newElement = new Node(newEl, head);
    if (tail == nullptr)
    {
        tail = newElement;
    }
    head = newElement;
    ++size;
}

void LinkedList::addToTail(int newEl)
{
    Node *newElement = new Node(newEl, nullptr);
    if (tail)
    {
        tail->setNext(newElement);
        tail = newElement;
    } else
    {
        head = tail = newElement;
    }
    ++size;
}

int LinkedList::deleteHead()
{
    if (size == 0)
    {
        std::cerr << "Nothing to delete \n";
        return INT32_MIN;
    }
    if (head == tail)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        size = 0;
        return INT32_MIN;
    }
    int headValue = head->getData();
    Node *newHead = head->getNext();
    delete head;
    head = newHead;
    --size;
    return headValue;
}

int LinkedList::deleteTail()
{
    //case 0 elements
    if (size == 0)
    {
        std::cerr << "Nothing to delete \n";
        return INT32_MIN;
    }

    int tailValue = tail->getData();
    //if 1 element
    if (head == tail)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        size = 0;
    } else
    {
        Node *tmp = head;
        while (tmp)
        {
            if (tmp->getNext() == tail)
            {
                break;
            }
            tmp = tmp->getNext();
        }
        Node *forDeletion = tail;
        tail = tmp;
        tail->setNext(nullptr);
        delete forDeletion;
        size--;
    }
    return tailValue;
}

void LinkedList::deleteNode(int el)
{
    Node *curr = head;
    if (size == 0)
    {
        std::cerr << "Nothing to delete \n";
        return;
    }
    //case 1 1 node
    if (head == tail && head->getData() == el)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        size = 0;
        return;
    }
    //case 2 more than 1 node
    if (head->getData() == el)
    {
        Node *oldHead = head;
        head = head->getNext();
        delete oldHead;
        --size;
        return;
    }
    //case 3 traverse to get the element
    while (curr)
    {
        Node *currNext = curr->getNext();
        if (currNext && currNext->getData() == el)
        {
            break;
        }
        curr = curr->getNext();
    }

    //then fix pointers and delete
    if (curr != nullptr)
    {
        Node *forDeletion = curr->getNext();
        curr->setNext(forDeletion->getNext());
        delete forDeletion;
        --size;
    } else
    {
        std::cerr << "Sorry, no such element\n";
        return;
    }

}

bool LinkedList::contains(int el)
{
    Node *curr = head;
    while (curr)
    {
        if (curr->getData() == el)
        {
            return true;
        }
        curr = curr->getNext();
    }
    return false;
}

void LinkedList::print() const
{
    Node *curr = head;
    while (curr)
    {
        std::cout << curr->getData() << " ";
        curr = curr->getNext();
    }
    std::cout << std::endl;
}
