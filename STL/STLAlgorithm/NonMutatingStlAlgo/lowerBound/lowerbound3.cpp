#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40};
    auto it = lower_bound(arr, arr + 6, 20);
    cout << (*it) << endl;
    it = lower_bound(arr, arr + 6, 25);
    cout << (*it) << endl;
    return 0;
}