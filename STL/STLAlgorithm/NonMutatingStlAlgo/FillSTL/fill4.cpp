#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40};
    fill(l.begin(), l.end(), 5);
    for (int x : l)
        cout << x << " ";
    return 0;
}