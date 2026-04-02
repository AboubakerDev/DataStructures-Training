#include <iostream>
#include "clsMyStackArr.h"
using namespace std;

int main() {
    clsMyStackArr<int> stack;

    cout << "=== Pushing elements: 10, 20, 30 ===\n";
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.Print(); // 30 20 10

    cout << "=== Top element ===\n";
    cout << stack.Top() << endl; // 30

    cout << "=== Bottom element ===\n";
    cout << stack.Bottom() << endl; // 10

    cout << "=== Size of stack ===\n";
    cout << "Size: " << stack.Size() << endl; // 3

    cout << "=== Check if empty ===\n";
    cout << (stack.IsEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

    cout << "=== Access items by index ===\n";
    for (int i = 0; i < stack.Size(); i++)
        cout << "Item at index " << i << ": " << stack.GetItem(i) << endl;

    cout << "=== Reverse stack ===\n";
    stack.Reverse();
    stack.Print(); // 10 20 30

    cout << "=== Update item at index 1 to 25 ===\n";
    stack.UpdateItem(1, 25);
    stack.Print(); // 10 25 30

    cout << "=== Insert after index 0: 15 ===\n";
    stack.InsertAfter(0, 15);
    stack.Print(); // 10 15 25 30

    cout << "=== Clear stack ===\n";
    stack.Clear();
    stack.Print(); // (empty)
    cout << "Size after clear: " << stack.Size() << endl;

    return 0;
}