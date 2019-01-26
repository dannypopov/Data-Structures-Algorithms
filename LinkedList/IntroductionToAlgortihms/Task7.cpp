//
// Created by yordan.popov on 26.01.19.
//

/**
 * Explain how to implement doubly linked lists using only one pointer value x:np per
item instead of the usual two (next and prev). Assume that all pointer values can be
interpreted as k-bit integers, and define x:np to be x:np = x:next XOR x:prev,
the k-bit “exclusive-or” of x:next and x:prev. (The value NIL is represented by 0.)
Be sure to describe what information you need to access the head of the list. Show
how to implement the SEARCH , INSERT , and DELETE operations on such a list.
Also show how to reverse such a list in O(1)time.
**/