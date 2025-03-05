/*
Erase Function 
The erase function can remove one or all instances of a specific element. If you pass a key, it will remove all
occurrences of that key.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(40);

    ms.erase(10); // Removes all instances of 10

    for (auto x : ms) {
        cout << x << " ";
    }

    return 0;
}