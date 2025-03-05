#include <iostream>
#include <algorithm>
using namespace std;

/*
sort(first, last, comp);

Parameters:

first: Starting address of the range.
last: Address of the element beyond the last element.
comp: Binary predicate function with custom comparison logic for user defined sorting.
By default, sort() function sort data in increasing order.
*/


int main()
{
    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    for (int x : arr)
        cout << x << " ";
        
    sort(arr, arr + n, greater<int>());
    cout << endl;
    for (int x : arr)
        cout << x << " ";
    return 0;
}

