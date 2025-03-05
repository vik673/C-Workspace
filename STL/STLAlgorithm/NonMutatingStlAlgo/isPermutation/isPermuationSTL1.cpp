#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 5, 20};
    vector<int> v2 = {20, 10, 5, 30, 5};

    if (is_permutation(v1.begin(), v1.end(), v2.begin()))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}