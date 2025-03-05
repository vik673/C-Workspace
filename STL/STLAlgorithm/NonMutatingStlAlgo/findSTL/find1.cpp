#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {5, 10, 7, 10, 20};
    auto it = find(v.begin(), v.end(), 10);
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found at " << (it - v.begin());
    return 0;
}