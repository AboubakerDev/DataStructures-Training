# clsMyString with Undo/Redo

This project implements a **string class in C++ with Undo and Redo functionality** using `stack`.  
It demonstrates how to manage changes to a string and revert or reapply them.  
This project is designed for learning **Data Structures and Stack operations**.

## Features

- Set and get string value.
- Undo the last change.
- Redo a previously undone change.
- Tracks history using stacks (`Undo` and `Redo`).
- Property-style access using `__declspec(property)`.

## Usage

1. Include `clsMyString.h` in your project.
2. Create an instance of the string class:
```cpp


3.Set values and use Undo/Redo:
str.Value = "Hello"
str.Undo()
str.Redo()
4.Run the provided main.cpp to see examples of all operations.
Example
#include "clsMyString.h"
int main() {
    clsMyString str;
    str.Value = "Hello";
    str.Value = "Hello, World!";
    str.Undo();
    str.Redo();
    return 0;
}
Author
Developed as a training project for practicing Stacks and Undo/Redo functionality in C++.
