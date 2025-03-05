
/*
The multiset::equal_range() is a built-in function in C++ STL which returns an iterator of pairs.
The pair refers to the range that includes all the elements in the container which have a key equivalent to k.
The lower bound will be the element itself and the upper bound will point to the next element after key k.
If there are no elements matching key K, the range returned is of length 0 with both iterators pointing to the
first element which is greater than k according to the container’s internal comparison object (key_comp). 
If the key exceeds the maximum element in the set container, it returns an iterator pointing to the past 
the last element in the multiset container.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(20);
    ms.insert(20);
    ms.insert(40);

    auto range = ms.equal_range(20);

    cout << *(range.first) << " " << *(range.second) << endl;  

    return 0;
}