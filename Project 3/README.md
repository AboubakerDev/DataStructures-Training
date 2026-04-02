# Stack using Doubly Linked List in C++

This project implements a **generic Stack (LIFO) using a doubly linked list** in C++.  
It is built on top of the previously implemented `clsMyQueue` and `clsDblLinkedList` classes.  
This project is designed for learning **Data Structures** and practicing stack operations.

## Features

- Push elements onto the stack.
- Access the top and bottom elements.
- Access and update items by index.
- Insert after a specific index.
- Reverse the stack.
- Clear the entire stack.
- Check if the stack is empty.
- Get the current size of the stack.
- Print all elements in order.

## Usage

1. Include `clsMyStack.h`, `clsMyQueue.h`, and `clsDblLinkedList.h` in your project.
2. Create an instance of the stack:
```cpp
clsMyStack<int> stack;

Use the provided methods to manipulate and test the stack.
Run the provided main.cpp to see examples of all operations.
##Example
#include "clsMyStack.h"

int main() {
    clsMyStack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.Print(); // Output: 30 20 10
    return 0;
}
Author
Developed as a training project for practicing Data Structures in C++.
