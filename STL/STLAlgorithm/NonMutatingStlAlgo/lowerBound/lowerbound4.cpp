#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40};
    auto it = lower_bound(arr, arr + 6, 20);
    if (it == (arr + 6) || (*it) != 20)
        cout << "Not Present";
    else
        cout << "Present";
    return 0;
}