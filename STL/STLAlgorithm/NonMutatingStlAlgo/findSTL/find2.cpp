#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 10, 12, 8, 7, 33};
    
    int *ptr = find(arr, arr + 6, 7);
    if (ptr == arr + 6)
        cout << "Not Found";
    else
        cout << "Found at position " << (ptr - arr);
    return 0;
}