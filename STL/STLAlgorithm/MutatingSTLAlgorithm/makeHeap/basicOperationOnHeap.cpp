
/*
Heaps provide the access to the largest or smallest element in the sequence in O(1) time.
So, insertion of elements and deletion of smallest/largest value should be done while maintaining
 the order of the elements.

C++ provides two functions push_heap() and pop_heap() for insertion and deletion on heaps 
created using make_heap() function.

Syntax
push_heap(first, last, comp);
pop_heap(first, last, comp);

When adding an element, we first insert it at the end of the container and then call push_heap() 
to maintain the heap property. The comparator should be the same that is provided to the make_heap() function.

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {15, 6, 7, 12, 30};
    make_heap(v.begin(), v.end(), greater<int>());
    cout << v.front() << endl;
    pop_heap(v.begin(), v.end(), greater<int>()); 
    cout << v.front() << endl;
    v[4] = 2;
    push_heap(v.begin(), v.end(), greater<int>()); 
    cout << v.front() << endl;
    return 0;
}

/*
In this program, a vector v is converted to a min-heap. 
The smallest element is printed and removed using pop_heap() and the new smallest is printed. 
A value is changed, and heap is reordered using push_heap().
*/