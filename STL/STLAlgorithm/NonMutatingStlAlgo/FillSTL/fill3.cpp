#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    fill(arr, arr + 4, 5);
    for (int x : arr)
        cout << x << " ";
    return 0;
}