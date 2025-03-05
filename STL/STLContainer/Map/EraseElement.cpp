
/*
Erasing Elements:
m.erase(key): Removes the key-value pair.
m.erase(iterator): Removes the element at the given iterator position.
m.erase(start_iterator, end_iterator): Removes elements in the given range.
m.erase(5);  // Removes key 5
*/

#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;

    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 5, 50 });

    cout << "Initial size of map: " << mp.size() << "\n";

    auto it = mp.find(2);
    mp.erase(it);
    cout << "Size after erasing one element: " << mp.size() << "\n";
    mp.erase(5);
    cout << "Size after erasing second element: " << mp.size() << "\n";
    mp.erase(mp.begin(), mp.end());
    cout << "Final Size: " << mp.size() << "\n";
    return 0;
}
