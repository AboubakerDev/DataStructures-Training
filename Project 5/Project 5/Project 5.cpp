#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;

int main() {
    clsMyQueueArr<int> queue;

    cout << "=== Pushing elements: 10, 20, 30 ===\n";
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.Print(); // 10 20 30

    cout << "=== Popping element ===\n";
    queue.pop();
    queue.Print(); // 20 30

    cout << "=== Insert at front: 5 ===\n";
    queue.InsertAtFront(5);
    queue.Print(); // 5 20 30

    cout << "=== Insert at back: 40 ===\n";
    queue.InsertAtBack(40);
    queue.Print(); // 5 20 30 40

    cout << "=== Front and back elements ===\n";
    cout << "Front: " << queue.front() << endl; // 5
    cout << "Back: " << queue.back() << endl;   // 40

    cout << "=== Size of queue ===\n";
    cout << "Size: " << queue.Size() << endl; // 4

    cout << "=== Check if empty ===\n";
    cout << (queue.IsEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    cout << "=== Access items by index ===\n";
    for (int i = 0; i < queue.Size(); i++)
        cout << "Item at index " << i << ": " << queue.GetItem(i) << endl;

    cout << "=== Reverse queue ===\n";
    queue.Reverse();
    queue.Print(); // 40 30 20 5

    cout << "=== Update item at index 1 to 25 ===\n";
    queue.UpdateItem(1, 25);
    queue.Print(); // 40 25 20 5

    cout << "=== Insert after index 2: 15 ===\n";
    queue.InsertAfter(2, 15);
    queue.Print(); // 40 25 20 15 5

    cout << "=== Clear queue ===\n";
    queue.Clear();
    queue.Print(); // (empty)
    cout << "Size after clear: " << queue.Size() << endl;

    return 0;
}