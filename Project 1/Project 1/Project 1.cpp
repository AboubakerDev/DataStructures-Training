#include "clsDblLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    clsDblLinkedList<int> list;

    cout << "=== Inserting at the beginning: 10, 20, 30 ===\n";
    list.InsertAtBeginning(10);
    list.InsertAtBeginning(20);
    list.InsertAtBeginning(30);
    list.PrintList(); // 30 20 10

    cout << "=== Inserting at the end: 40, 50 ===\n";
    list.InsertAtEnd(40);
    list.InsertAtEnd(50);
    list.PrintList(); // 30 20 10 40 50

    cout << "=== Inserting after index 2: 25 ===\n";
    list.InsertAfter(2, 25);
    list.PrintList(); // 30 20 10 25 40 50

    cout << "=== Deleting first node ===\n";
    list.DeleteFirstNode();
    list.PrintList(); // 20 10 25 40 50

    cout << "=== Deleting last node ===\n";
    list.DeleteLastNode();
    list.PrintList(); // 20 10 25 40

    cout << "=== Updating item at index 1 to 15 ===\n";
    list.UpdateItem(1, 15);
    list.PrintList(); // 20 15 25 40

    cout << "=== Reversing the list ===\n";
    list.Reverse();
    list.PrintList(); // 40 25 15 20

    cout << "=== Getting size of the list ===\n";
    cout << "Size: " << list.Size() << endl;

    cout << "=== Checking if list is empty ===\n";
    cout << (list.IsEmpty() ? "List is empty" : "List is not empty") << endl;

    cout << "=== Accessing items by index ===\n";
    for (int i = 0; i < list.Size(); i++) {
        cout << "Item at index " << i << ": " << list.GetItem(i) << endl;
    }

    cout << "=== Clearing the list ===\n";
    list.Clear();
    cout << "Size after clearing: " << list.Size() << endl;
    cout << (list.IsEmpty() ? "List is empty" : "List is not empty") << endl;

    return 0;
}