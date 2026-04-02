#include <iostream>
#include "clsMyString.h"
using namespace std;

int main() {
    clsMyString str;

    cout << "=== Setting initial values ===\n";
    str.Value = "Hello";
    cout << "Current Value: " << str.Value << endl; // Hello

    str.Value = "Hello, World!";
    cout << "Current Value: " << str.Value << endl; // Hello, World!

    str.Value = "Data Structures";
    cout << "Current Value: " << str.Value << endl; // Data Structures

    cout << "\n=== Performing Undo ===\n";
    str.Undo();
    cout << "After Undo: " << str.Value << endl; // Hello, World!
    str.Undo();
    cout << "After Undo: " << str.Value << endl; // Hello

    cout << "\n=== Performing Redo ===\n";
    str.Redo();
    cout << "After Redo: " << str.Value << endl; // Hello, World!
    str.Redo();
    cout << "After Redo: " << str.Value << endl; // Data Structures

    cout << "\n=== Testing multiple changes ===\n";
    str.Value = "C++";
    cout << "Current Value: " << str.Value << endl; // C++
    str.Undo();
    cout << "After Undo: " << str.Value << endl; // Data Structures
    str.Redo();
    cout << "After Redo: " << str.Value << endl; // C++

    return 0;
}