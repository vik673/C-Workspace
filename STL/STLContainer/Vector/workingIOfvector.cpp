
/*
Vectors in C++ are dynamic arrays that automatically adjust their size when you add elements. Unlike fixed-size arrays, vectors manage memory internally, making them efficient.

A vector internally uses a dynamically allocated array stored in the heap memory. This array grows or shrinks as needed. Vectors are stored in contiguous locations, so they have the advantage of cache friendliness and random access.

Internal Working
When you create a vector, the compiler pre-allocates a small memory block (called capacity). For example, an empty vector might start with a capacity of 0, 1, or 10 elements, depending on the compiler. When your current allocated space is full, the compiler allocates a new space with double the size of the current space. Existing elements are copied to the new space and when copied successfully it deletes the previous old space.

For example, assume that when you create a vector compiler creates 1 element capacity, when it is full compiler creates a new space with double size and copies a element into new space then deletes the previous space.

It depends on compiler to compiler, on what size initially pre-allocated space for n elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    cout << v.size() << " " << v.capacity() << " ";
    return 0;
}

/*
Average Time Complexity of push_back()
Average time complexity of push_back() is O(1). Copying elements during reallocation takes O(n) time, 
it happens only when you insert an element into vector but current space is full.

Let assume, we have a vector with capacity and size is (n = 4). When we insert 5th element into the vector
it takes O(n) because vector capacity is full and new double size of space allocated.

Average time for inserting (n+1) elements = (O(1) + O(1) + O(1) + O(1) + O(1) + O(n))/n+1
= (O(n) + O(n))/ O(n)
= 2O(n)/O(n)
= O(1)
*/