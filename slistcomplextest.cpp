#include "slist.h"
#include "complex.h"
#include <iostream>
using namespace std;

int main() {
    {
        // define a single linked list
        // of complex items called list
        slist<complex<int>> list;
        // make complex objects to add
        // to single linked list
        complex<int> c1(2, 3);
        cout << c1 << endl;
        complex<int> c2(27, -200);
        cout << c2 << endl;
        complex<int> c3(-20, 4);
        cout << c3 << endl;
        complex<int> c4(-18, -99);
        cout << c4 << endl;

        // Inserting nodes complex
        // elements onto the single linked list
        list.insertNode(c1);
        list.insertNode(c2);
        list.insertNode(c3);
        list.insertNode(c4);

        cout << "Elements of the list are: ";

        // Print the list
        list.printList();
        cout << endl;

        // Delete node at position 2.
        list.deleteNode(2);
        cout << "Elements of the list are: ";
        list.printList();
        cout << endl;
               

        // Inserting nodes
        list.insertNode(c1);
        list.insertNode(c2);
        list.insertNode(c3);
        list.insertNode(c4);

        cout << "Elements of the list are: ";

        // Print the list
        list.printList();
        std::cout << std::endl;

        // Delete node at position 2.
        int pos = 2;
        list.deleteNode(pos);

        cout << "Elements of the list are: ";
        list.printList();
        std::cout << std::endl;


        return 0;
    }
}