#include <iostream>
#include <numeric>

using namespace std;

int myfun(int x, int y)
{
    return x * y;
}
int main()
{
    int init_res = 1;
    int arr[] = {10, 20, 30};
    cout << accumulate(arr, arr + 3, init_res, myfun);

    return 0;
}