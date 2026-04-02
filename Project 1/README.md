# Doubly Linked List in C++

This project implements a **generic doubly linked list (Doubly Linked List) in C++** using templates.  
It demonstrates the fundamental operations on a doubly linked list and can be used for training in **Data Structures**.

## Features

- Insert nodes at the **beginning**, **end**, or **after a specific node/index**.
- Delete nodes from the **beginning**, **end**, or **specific node**.
- Update node values by **index**.
- Get node values by **index**.
- Reverse the list.
- Clear the entire list.
- Check if the list is empty.
- Retrieve the current size of the list.
- Search for a node by value.

## Usage

1. Create an instance of the template class:
```cpp
clsDblLinkedList<int> list;

Use the methods to manipulate and test the list.
Run the provided main.cpp to see examples of all operations.


##Example
#include "clsDblLinkedList.h"

int main() {
    clsDblLinkedList<int> list;
    list.InsertAtBeginning(10);
    list.InsertAtEnd(20);
    list.InsertAfter(0, 15);
    list.PrintList(); // Output: 10 15 20
    return 0;
}
Author
Developed as a training project for practicing Data Structures in C++
