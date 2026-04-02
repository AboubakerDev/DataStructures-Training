# Dynamic Array in C++

This project implements a **generic dynamic array in C++**.  
It supports resizing, inserting, deleting, updating, reversing, and searching for elements.  
This project is designed for learning **Data Structures** and practicing array operations.

## Features

- Insert elements at the beginning, end, or a specific index.
- Delete elements by index or value.
- Update elements by index.
- Access elements by index.
- Reverse the array.
- Resize the array.
- Clear the entire array.
- Check if the array is empty.
- Get the current size of the array.
- Print all elements in order.

## Usage

1. Include `clsDynamicArray.h` in your project.
2. Create an instance of the dynamic array:
```cpp
clsDynamicArray<int> arr(5); // array of size 5

Use the provided methods to manipulate and test the array.
Run the provided main.cpp to see examples of all operations.
##Example
#include "clsDynamicArray.h"
int main() {
    clsDynamicArray<int> arr(3);
    arr.SetItem(0, 10);
    arr.SetItem(1, 20);
    arr.SetItem(2, 30);
    arr.PrintList(); // Output: 10 20 30
    return 0;
}
Author
Developed as a training project for practicing Data Structures in C++.
