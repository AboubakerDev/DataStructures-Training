# Queue using Dynamic Array in C++

This project implements a **generic Queue (FIFO) using a dynamic array** in C++.  
It demonstrates common queue operations and is designed for training in **Data Structures**.

## Features

- Push elements at the back of the queue.
- Pop elements from the front of the queue.
- Access front and back elements.
- Insert elements at the front or back.
- Access and update items by index.
- Insert after a specific index.
- Reverse the queue.
- Clear the entire queue.
- Check if the queue is empty.
- Get the current size of the queue.
- Print all elements in order.

## Usage

1. Create an instance of the queue:
```cpp
clsMyQueueArr<int> queue;

Use the provided methods to manipulate and test the queue.
Run the provided main.cpp to see examples of all operations.
##Example
#include "clsMyQueueArr.h"
int main() {
    clsMyQueueArr<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.Print(); // Output: 10 20 30
    return 0;
}
Author
Developed as a training project for practicing Data Structures in C++.
