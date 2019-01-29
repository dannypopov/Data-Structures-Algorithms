#include "LinkedList/SinglyLinkedList/LinkedList.h"

void testLinkedList();

void testEmptyLinkedList();

int main()
{

    testLinkedList();
    testEmptyLinkedList();
    return 0;
}

void testLinkedList()
{
    LinkedList linkedList1;
    linkedList1.addToHead(1);
    linkedList1.addToHead(2);
    linkedList1.addToHead(3);
    linkedList1.addToHead(4);
    linkedList1.addToHead(5);
    linkedList1.addToHead(6);

    LinkedList linkedList2;
    linkedList2.addToTail(1);
    linkedList2.addToTail(2);
    linkedList2.addToTail(3);
    linkedList2.addToTail(4);
    linkedList2.addToTail(5);
    linkedList2.addToTail(6);

    std::cout << "LinkedList One: ";
    linkedList1.print();
    std::cout << "LinkedList Two: ";
    linkedList2.print();

    std::cout << std::endl;
    linkedList1.deleteHead();
    linkedList2.deleteTail();


    std::cout << "LinkedList One After Head Deletion: ";
    linkedList1.print();
    std::cout << "LinkedList Two After Tail Deletion: ";
    linkedList2.print();

    std::cout << std::endl;

    linkedList1.deleteNode(3);
    linkedList2.deleteNode(3);

    std::cout << "LinkedList One After Deletion of Node with Value `3`: ";
    linkedList1.print();
    std::cout << "LinkedList Two After Deletion of Node with Value `3`: ";
    linkedList2.print();

    std::cout << std::endl;
}

//Expected behaviour is to print "Nothing to delete" 3x
void testEmptyLinkedList()
{
    LinkedList l;
    l.deleteNode(15);
    l.deleteTail();
    l.deleteHead();
}
