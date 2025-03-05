#include <algorithm>
#include <iostream>
using namespace std;

/*
n reverse() function call, arr is the address of the first element (10). 
arr + 5 points beyond the last element (50). reverse(arr, arr + 5) swaps elements from both ends.
*/
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    reverse(arr, arr + 5);
    for (int x : arr)
        cout << x << " ";
    return 0;
}