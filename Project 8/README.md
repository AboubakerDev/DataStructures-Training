# Queue Line System with Tickets in C++

This project implements a **Queue Line System with ticket issuance** in C++.  
It demonstrates using **queue and stack** for managing clients, their tickets, and service order.  
It is designed for learning **Data Structures and Queue operations**.

## Features

- Issue tickets with a prefix and sequential numbering.
- Track waiting clients and served clients.
- Display queue info (total tickets, waiting, served).
- Show tickets in **RTL** (latest to first) or **LTR** (first to latest) order.
- Print detailed ticket information including issue time and expected serve time.
- Serve the next client in line.

## Usage

1. Include `clsQueueLine.h` and `clsDate.h` in your project.
2. Create an instance of the queue line:
```cpp
clsQueueLine queue("A", 5); // Prefix "A", average serve time 5 minutes
Use the provided methods:
queue.IssueTicket();
queue.ServeNextClient();
queue.PrintInfo();
queue.PrintTicketsLineRTL();
queue.PrintTicketsLineLTR();
queue.PrintAllTickets();
Run the provided main.cpp to see examples of all operations.


##Example
#include "clsQueueLine.h"
int main() {
    clsQueueLine queue("A", 5);
    queue.IssueTicket();
    queue.IssueTicket();
    queue.ServeNextClient();
    queue.PrintAllTickets();
    return 0;
}
Author
Developed as a training project for practicing Queues, Stacks, and Ticket Management in C++.
