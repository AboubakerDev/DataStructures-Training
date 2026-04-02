#include <iostream>
#include "clsQueueLine.h"
#include "clsDate.h"
using namespace std;

int main() {
    clsQueueLine queue("A", 5); // Prefix "A", average serve time 5 minutes

    cout << "=== Issuing tickets ===\n";
    queue.IssueTicket();
    queue.IssueTicket();
    queue.IssueTicket();

    queue.PrintInfo();
    queue.PrintTicketsLineRTL();
    queue.PrintTicketsLineLTR();
    queue.PrintAllTickets();

    cout << "\n=== Serving next client ===\n";
    queue.ServeNextClient();
    queue.PrintInfo();
    queue.PrintTicketsLineRTL();
    queue.PrintTicketsLineLTR();

    cout << "\n=== Next client ===\n";
    cout << "Next: " << queue.WhoIsNext() << endl;

    cout << "\n=== Issue more tickets ===\n";
    queue.IssueTicket();
    queue.IssueTicket();
    queue.PrintAllTickets();

    return 0;
}