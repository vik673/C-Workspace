
/*
A multimap in C++ is a type of associative container that allows multiple keys to have the same value, 
unlike a normal map, which only allows unique keys.
Multimap is also implemented using Red-Black trees and hence the basic operations like search, insert,
 delete works in O(LogN) time for multimap as well.

Some Basic Functions associated with multimap:
 

Internally, multimap is implemented using a self-balancing red-black tree, ensuring that search, insert,
and delete operations take O(log n) time complexity.
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, int> mp; 
    mp.insert({10, 20});
    mp.insert({5, 50});
    mp.insert({10, 25}); // Duplicates are allowed


    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    return 0;
}