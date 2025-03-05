#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 30, 40, 50};
    int x = 20;

    if (binary_search(arr, arr + 6, x) == true)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}