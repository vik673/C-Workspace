#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    fill(v.begin() + 1, v.end() - 1, 5);
    for (int x : v)
        cout << x << " ";
    return 0;
}