//#include "LinkedList/SinglyLinkedList/LinkedList.h"
#include <iostream>
#include "LinkedList/DoublyLinkedList/DLinkedList.h"

void testLinkedList();

void testEmptyLinkedList();

int main()
{
    DLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    DLinkedList list2;
    list2.insert(1);
    list2.insert(2);
    list2.insert(3);
    list2.insert(4);

    list.print();
    list2.print();
    std::cout<<list.getSize()<< "  "<<list2.getSize()<<std::endl;
//    testLinkedList();
//    testEmptyLinkedList();
    return 0;
}
//
//void testLinkedList()
//{
//    LinkedList linkedList1;
//    linkedList1.addToHead(1);
//    linkedList1.addToHead(2);
//    linkedList1.addToHead(3);
//    linkedList1.addToHead(4);
//    linkedList1.addToHead(5);
//    linkedList1.addToHead(6);
//
//    LinkedList linkedList2;
//    linkedList2.addToTail(1);
//    linkedList2.addToTail(2);
//    linkedList2.addToTail(3);
//    linkedList2.addToTail(4);
//    linkedList2.addToTail(5);
//    linkedList2.addToTail(6);
//
//    std::cout << "DLinkedList One: ";
//    linkedList1.print();
//    std::cout << "DLinkedList Two: ";
//    linkedList2.print();
//
//    std::cout << std::endl;
//    linkedList1.deleteHead();
//    linkedList2.deleteTail();
//
//
//    std::cout << "DLinkedList One After Head Deletion: ";
//    linkedList1.print();
//    std::cout << "DLinkedList Two After Tail Deletion: ";
//    linkedList2.print();
//
//    std::cout << std::endl;
//
//    linkedList1.deleteNode(3);
//    linkedList2.deleteNode(3);
//
//    std::cout << "DLinkedList One After Deletion of Node with Value `3`: ";
//    linkedList1.print();
//    std::cout << "DLinkedList Two After Deletion of Node with Value `3`: ";
//    linkedList2.print();
//
//    std::cout << std::endl;
//}
//
////Expected behaviour is to print "Nothing to delete" 3x
//void testEmptyLinkedList()
//{
//    LinkedList l;
//    l.deleteNode(15);
//    l.deleteTail();
//    l.deleteHead();
//}
