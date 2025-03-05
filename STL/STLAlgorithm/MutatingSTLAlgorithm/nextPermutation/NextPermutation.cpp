#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 5, 4, 3};

    next_permutation(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";
    return 0;
}

/*
The next_permutation() algorithm follows these steps:

Traverse from the right to find the first element (let's call it x) that is not in decreasing order.
Find the smallest greater element than x in the right subarray and mark it as y.
Swap x and y.
Reverse the right subsequence to make it the next smallest permutation.
For example, consider the sequence {1, 2, 5, 4, 3} above program:

Identify x = 2 (since 5 > 2 but 4 < 5).
Find y = 3 (smallest element greater than 2).
Swap x and y, resulting in {1, 3, 5, 4, 2}.
Reverse {5, 4, 2} to get {1, 3, 2, 4, 5}.
Time Complexity
Let's find the time complexity of each operation specified in the above internal working:

Finding x: O(n)
Finding y: O(n), but can be optimized to O(log n) using binary search.
Swapping: O(1)
Reversing the right subsequence: O(n)
Thus, the total complexity is O(n).
*/