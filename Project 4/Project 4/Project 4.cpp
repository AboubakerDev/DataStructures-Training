#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main() {
    clsDynamicArray<int> arr(5);

    cout << "=== Initial Array of size 5 ===\n";
    for (int i = 0; i < arr.Size(); i++)
        arr.SetItem(i, (i + 1) * 10);
    arr.PrintList(); // 10 20 30 40 50

    cout << "=== Insert at beginning: 5 ===\n";
    arr.InsertAtBeginning(5);
    arr.PrintList(); // 5 10 20 30 40 50

    cout << "=== Insert at end: 60 ===\n";
    arr.InsertAtEnd(60);
    arr.PrintList(); // 5 10 20 30 40 50 60

    cout << "=== Insert after index 2: 25 ===\n";
    arr.InsertAfter(2, 25);
    arr.PrintList(); // 5 10 20 25 30 40 50 60

    cout << "=== Delete first item ===\n";
    arr.DeleteFirstItem();
    arr.PrintList(); // 10 20 25 30 40 50 60

    cout << "=== Delete last item ===\n";
    arr.DeleteLastItem();
    arr.PrintList(); // 10 20 25 30 40 50

    cout << "=== Delete item at index 2 ===\n";
    arr.DeleteItemAt(2);
    arr.PrintList(); // 10 20 30 40 50

    cout << "=== Delete item by value 40 ===\n";
    arr.DeleteItem(40);
    arr.PrintList(); // 10 20 30 50

    cout << "=== Update item at index 1 to 15 ===\n";
    arr.SetItem(1, 15);
    arr.PrintList(); // 10 15 30 50

    cout << "=== Reverse array ===\n";
    arr.Reverse();
    arr.PrintList(); // 50 30 15 10

    cout << "=== Resize array to 6 ===\n";
    arr.Resize(6);
    arr.PrintList(); // 50 30 15 10 0 0

    cout << "=== Clear array ===\n";
    arr.Clear();
    arr.PrintList(); // (empty)
    cout << "Size after clear: " << arr.Size() << endl;

    return 0;
}