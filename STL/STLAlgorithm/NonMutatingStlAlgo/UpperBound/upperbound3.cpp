#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int x = 20;
    vector<int> v = {10, 20, 20, 20, 30, 40};
    
    auto it = upper_bound(v.begin(), v.end(), x);
    
    if (it != v.begin() && *(it - 1) == x)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}