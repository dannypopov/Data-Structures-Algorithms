//
// Created by dan.ny on 26.01.19.
//

#ifndef DATA_STRUCTURES_ALGORITHMS_NODE_H
#define DATA_STRUCTURES_ALGORITHMS_NODE_H


class Node
{
private:
    int m_data;
    Node *m_next;
    Node *m_previous;

public:
    Node(int m_data, Node *m_next = nullptr, Node *m_previous = nullptr);

    int getData() const;

    Node *getNext() const;

    Node *getPrevious() const;

    void setData(int m_data);

    void setNext(Node *m_next);

    void setPrevious(Node *m_previous);
};


#endif //DATA_STRUCTURES_ALGORITHMS_NODE_H
