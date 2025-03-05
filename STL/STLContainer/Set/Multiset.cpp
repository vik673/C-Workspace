/*
In C++, the multiset is a container from the Standard Template Library (STL) that allows the storage of elements, 
much like a set. However, unlike a set, a multiset can store multiple occurrences of the same element.
 It automatically keeps the data sorted and supports a variety of useful operations.

Key Features of Multiset
Duplicates Allowed: Unlike a set, a multiset allows multiple instances of the same value.
Sorted Order: It maintains the elements in a sorted (non-decreasing) order. The sorting happens automatically.
Red-Black Tree: Internally, multiset uses a self-balancing binary search tree, like a red-black tree, ensuring
efficient search, insertion, and deletion operations with a time complexity of O(log n) for most operations.

*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(40);

    // Traverse and print elements
    for (auto x : ms) {
        cout << x << " ";
    }
    return 0;
}