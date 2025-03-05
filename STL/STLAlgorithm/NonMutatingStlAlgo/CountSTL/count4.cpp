#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> l = {10, 5, 10, 7, 10, 20};
    cout << count(l.begin(), l.end(), 10);
    return 0;
}