
# Data Structures Training Projects in C++

This repository contains **8 training projects** implemented in **C++** to practice **Data Structures** concepts such as linked lists, stacks, queues, dynamic arrays, undo/redo functionality, and ticket management.  

All projects are **self-contained** and include **main.cpp** examples to test all functionalities.  

## Repository Structure

/DataStructuresProjects
│

├─ Project1_DoublyLinkedList/
│ ├─ clsDblLinkedList.h
│ └─ main.cpp
│

├─ Project2_QueueUsingLinkedList/
│ ├─ clsMyQueue.h
│ └─ main.cpp
│

├─ Project3_StackUsingLinkedList/
│ ├─ clsMyStack.h
│ └─ main.cpp
│

├─ Project4_DynamicArray/
│ ├─ clsDynamicArray.h
│ └─ main.cpp
│

├─ Project5_QueueUsingDynamicArray/
│ ├─ clsMyQueueArr.h
│ └─ main.cpp
│

├─ Project6_StackUsingDynamicArray/
│ ├─ clsMyStackArr.h
│ └─ main.cpp
│

├─ Project7_MyStringWithUndoRedo/
│ ├─ clsMyString.h
│ └─ main.cpp
│

└─ Project8_QueueLineSystem/
├─ clsQueueLine.h
├─ clsDate.h
└─ main.cpp


---

## Projects Overview

### 1. Doubly Linked List
- **File:** `clsDblLinkedList.h`
- Implements a **generic doubly linked list** with insert, delete, update, reverse, search, and clear operations.
- **Main focus:** Pointers, linked list operations.

### 2. Queue Using Doubly Linked List
- **File:** `clsMyQueue.h`
- Implements a **queue (FIFO)** using the doubly linked list from Project 1.
- **Main focus:** Queue operations.

### 3. Stack Using Doubly Linked List
- **File:** `clsMyStack.h`
- Implements a **stack (LIFO)** using the queue from Project 2 via inheritance.
- **Main focus:** Stack operations.

### 4. Dynamic Array
- **File:** `clsDynamicArray.h`
- Implements a **dynamic array** with resize, reverse, insert, delete, and clear operations.
- **Main focus:** Array manipulation and memory management.

### 5. Queue Using Dynamic Array
- **File:** `clsMyQueueArr.h`
- Implements a **queue (FIFO)** using the dynamic array from Project 4.
- **Main focus:** Queue operations using arrays.

### 6. Stack Using Dynamic Array
- **File:** `clsMyStackArr.h`
- Implements a **stack (LIFO)** using the queue from Project 5 via inheritance.
- **Main focus:** Stack operations using arrays.

### 7. MyString with Undo/Redo
- **File:** `clsMyString.h`
- Implements a **string class** with **Undo/Redo functionality** using stacks.
- **Main focus:** Stack usage, property-style access, managing history.

### 8. Queue Line System
- **Files:** `clsQueueLine.h`, `clsDate.h`
- Implements a **ticket management system** with queue and stack operations.
- Tracks issued tickets, served clients, and expected service time.
- **Main focus:** Queues, stacks, real-world application.

---

## How to Use

1. Clone the repository:

```bash
git clone https://github.com/AboubakerDev/DataStructuresProjects.git

Open the project folder of interest (e.g., Project1_DoublyLinkedList) in Visual Studio or your preferred C++ IDE.
Include the header files in your main.cpp if needed and run the provided main.cpp to test all features.
Author
Developed as training projects to practice Data Structures in C++.
All projects were implemented from scratch with detailed examples and testing functions.
License

This repository is free for learning and personal use.
