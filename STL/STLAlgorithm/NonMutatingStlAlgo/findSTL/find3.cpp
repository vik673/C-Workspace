#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> l = {5, 10, 12, 8, 7, 3};
    auto it = find(l.begin(), l.end(), 7);
    if (it == l.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}