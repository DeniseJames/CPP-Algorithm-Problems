#ifndef NODE_H
#define NODE_H
#include <cstddef>  // To find NULL

// Node class to represent
// a node of the single linked list.

template <typename T>
class Node {
public:
    T data;
    Node* next;

    // Parameterized Constructor
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};
#endif // NODE_H