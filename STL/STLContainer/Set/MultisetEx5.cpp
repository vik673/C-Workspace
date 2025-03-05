/*
Count Function
The count function returns the number of occurrences of a specific element in the multiset.
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

    cout << ms.count(10) << endl;  
    cout << ms.count(20) << endl; 
    cout << ms.count(40) << endl;  

    return 0;
}

/*
count(10) returns 2 because 10 appears twice in the multiset.
count(20) and count(40) return 1 because they each appear once.
*/