/*
Problem Statement

We are given a number N, and we need to print the first N numbers in increasing order, ensuring that all 
the printed numbers only contain digits from the set {5, 6}.

Examples:

Input : n = 10
Output : 5, 6, 55, 56, 65, 66, 555,
         556, 565, 566

Input : n = 4
Output : 5, 6, 55, 56

Instead of checking all numbers, we can generate valid numbers directly using a queue.

Start with the smallest valid numbers: 5 and 6 (enqueue them).
Iterate N times:
    Dequeue the front element, print it.
    Generate the next numbers by appending 5 and 6 to the dequeued number.
    Enqueue the new numbers back into the queue.
Repeat until N numbers are printed.

This approach ensures that:
    Numbers are generated in sorted order.
    Handles large numbers as strings.
    Runs in O(N) time.

*/
#include <iostream>
#include <queue>
using namespace std;

void printFirstN(int n) {
    queue<string> q;
    
    // Step 1: Start with base numbers
    q.push("5");
    q.push("6");

    // Step 2: Generate and print N numbers
    for (int count = 0; count < n; count++) {
        string curr = q.front();
        q.pop();

        cout << curr << " ";

        // Generate next numbers by appending '5' and '6'
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main() {
    int n = 10;
    cout << "First " << n << " numbers: ";
    printFirstN(n);
    return 0;
}