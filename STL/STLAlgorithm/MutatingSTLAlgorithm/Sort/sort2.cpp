#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {5, 7, 20, 10};
    sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    
    sort(v.begin(), v.end(), greater<int>());
    cout << endl;
    for (int x : v)
        cout << x << " ";
    return 0;
}