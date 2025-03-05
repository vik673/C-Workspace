#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(40);

    auto it1 = ms.lower_bound(20);  // Points to the first occurrence of 20
    auto it2 = ms.upper_bound(20);  // Points to the first element greater than 20

    cout << *it1 << " " << *it2 << endl;

    return 0;
}