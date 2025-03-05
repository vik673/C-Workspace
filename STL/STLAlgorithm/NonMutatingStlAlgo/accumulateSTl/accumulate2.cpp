#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    int init_res = 100;
    cout << accumulate(v.begin(), v.end(), init_res, minus<int>());
    return 0;
}