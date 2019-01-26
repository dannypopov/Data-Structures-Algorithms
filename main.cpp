#include <iostream>
#include "LinkedList/LinkedList.h"

int main()
{
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.print();
    list.remove(4);
    list.print();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}