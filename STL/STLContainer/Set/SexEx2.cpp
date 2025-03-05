
/*
Problem statement:
In this problem, we need to design a data structure that efficiently supports the following operations:

bool search(x): Checks if x is present in the container.
void insert(x): Inserts x into the container.
void delete(x): Deletes x from the container.
int getFloor(x): Returns the largest value ≤ x present in the container.
int getCeiling(x): Returns the smallest value ≥ x present in the container.

Understanding the Operations
    Search (x): Returns true if x exists; otherwise, false.
    Insert (x): Adds x to the data structure.
    Delete (x): Removes x if it exists.
    Get Floor (x): Finds the largest value that is ≤ x.
    Get Ceiling (x): Finds the smallest value that is ≥ x.
    If no valid floor exists, return INT_MIN, and if no valid ceiling exists, return INT_MAX.

One simple way to implement this is by using a vector.

Implementation Details
    Search: Traverse the vector → O(n)
    Insert: Insert at the end → O(1)
    Delete: Remove the element and shift elements → O(n)
    Get Floor / Get Ceiling: Traverse the vector → O(n)

*/

#include <iostream>
#include <set>
using namespace std;

set<int> s;

// Insert operation
void insert(int x) {
    s.insert(x);
}

// Search operation
bool search(int x) {
    return (s.find(x) != s.end());
}

// Delete operation
void deleteElement(int x) {
    s.erase(x);
}

// Get Ceiling operation
int getCeiling(int x) {
    auto it = s.lower_bound(x);
    if (it == s.end())
        return INT_MAX;  // No ceiling found
    return *it;
}

// Get Floor operation
int getFloor(int x) {
    auto it = s.lower_bound(x);
    if (it == s.begin()) {
        if (*it == x) return x;
        return INT_MIN; // No floor found
    }
    if (it == s.end() || *it != x) --it;
    return *it;
}

int main() {
    insert(10);
    insert(20);
    insert(15);
    insert(5);
    insert(25);

    cout << search(15) << "\n"; // Output: 1
    deleteElement(15);
    cout << search(15) << "\n"; // Output: 0
    cout << getFloor(6) << "\n"; // Output: 5
    cout << getFloor(5) << "\n"; // Output: 5
    cout << getCeiling(6) << "\n"; // Output: 10
    cout << getCeiling(25) << "\n"; // Output: 25
    cout << getCeiling(100) << "\n"; // Output: INT_MAX
    cout << getFloor(1) << "\n"; // Output: INT_MIN

    return 0;
}