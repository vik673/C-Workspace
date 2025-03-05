
/*
Merging Two Sorted Arrays In-Place

One of the applications of make_heap() function is that it can be used to merge two sorted arrays in place.

Given two sorted arrays, we need to merge them without extra space. The goal is:

The first array should contain the smallest elements.
The second array should contain the remaining largest elements.
Example:

Input: a[] = {3, 20, 40}
b[] = {2, 10, 12}
Output: a[] = {2, 3, 10}
b[] = {12, 20, 40}

Input: a[] = {30, 40}
b[] = {2, 8, 9, 10}
Output: a[] = {2, 8}
b[] = {9, 10, 30, 40}

Approach
Convert the second array into a min heap.
Iterate over the first array:
If an element in the first array is greater than the root of the min heap, swap them.
Re-heapify the second array using pop_heap and push_heap.
Finally, sort the second array using sort_heap.
*/

#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int m, int n) {
    make_heap(b, b + n, greater<int>());
    for (int i = 0; i < m; i++) {
        if (a[i] > b[0]) {
            pop_heap(b, b + n, greater<int>()); 
            swap(a[i], b[n - 1]); 
            push_heap(b, b + n, greater<int>());  
        }
    }
    sort(b, b + n);
}

int main()
{
    int a[] = {3, 20, 40};
    int b[] = {2, 10, 12};
    
    merge(a, b, 3, 3);
    
    for (int x : a)
        cout << x << " ";
    cout << endl;
    for (int x : b)
        cout << x << " ";
    return 0;
}

/*
Time complexity:
Let m be the number of elements in array a[] and n be the number of elements in b[]

Creating Heap: O(n)
Traversing m elements: O(m)
Heap operations: O(log n)
Sorting: O(n log n)
Total complexity: O((m + n) log n)


*/