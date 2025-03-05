#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 40};  
    vector<int> v2 = {5, 15, 30};  
    vector<int> v3(6);

    merge(v1.begin(), v1.end(), v2.begin(),
        v2.end(), v3.begin());

    for (int x : v3)
        cout << x << " ";
    return 0;
}

/*
The above program merges two sorted vectors, v1 and v2, into a third vector v3 using merge() function.
This function combines the elements from v1 and v2 in sorted order and stores the result in v3. 
The output will be 5 10 15 20 30 40

Note: The input sequences should be sorted in ascending order. When unsure, use sort() method
before using merge() to sort the input containers.
*/