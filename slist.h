#ifndef SLIST_H
#define SLIST_H

#include "node.h"
#include <iostream>

template<typename T> class slist
{
    Node<T>* head;
public:
	slist();
//	~slist();
    // Function to insert a
    // node at the end of the
    // linked list.
    void insertNode(T);

    // Function to print the
    // linked list.
    void printList();

    // Function to delete the
    // node at given position
    void deleteNode(int nodeOffset);

    // Function to determine if
    // element is in list
    bool is_in_list(Node<T>* head, T data);
private:

};

template<typename T>
slist<T>::slist()
{
   { head = NULL; }
}
//
//slist::~slist()
//{
//
//}

// Function to delete the
// node at given position

template<typename T>
bool slist<T>::is_in_list(Node<T>* head, T data) {
    Node* t = head;
    while (t != NULL) {
        if (t->data == data)
            return 0;
        t = t->next;
    }
    return 1;
}

template<typename T>
void slist<T>::deleteNode(int nodeOffset)
{
    Node<T>* temp1 = head, * temp2 = NULL;
    int ListLen = 0;

    if (head == NULL) {
        std::cout << "List empty." << std::endl;
        return;
    }

    // Find length of the linked-list.
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }

    // Check if the position to be
    // deleted is less than the length
    // of the linked list.
    if (ListLen < nodeOffset) {
        std::cout << "Index out of range"
            << std::endl;
        return;
    }

    // Declare temp1
    temp1 = head;

    // Deleting the head.
    if (nodeOffset == 1) {

        // Update head
        head = head->next;
        delete temp1;
        return;
    }

    // Traverse the list to
    // find the node to be deleted.
    while (nodeOffset-- > 1) {

        // Update temp2
        temp2 = temp1;

        // Update temp1
        temp1 = temp1->next;
    }

    // Change the next pointer
    // of the previous node.
    temp2->next = temp1->next;

    // Delete the node
    delete temp1;
}

// Function to insert a new node.
template<typename T>
void slist<T>::insertNode(T data)
{
    // Create the new Node.
    Node<T>* newNode = new Node<T>(data);

    // Assign to head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse till end of list
    Node<T>* temp = head;
    while (temp->next != NULL) {

        // Update temp
        temp = temp->next;
    }

    // Insert at the last.
    temp->next = newNode;
}

// Function to print the
// nodes of the linked list.
template<typename T>
void slist<T>::printList()
{
    Node<T>* temp = head;

    // Check for empty list.
    if (head == NULL) {
        std::cout << "List empty" << std::endl;
        return;
    }

    // Traverse the list.
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}
#endif //SLIST_H
