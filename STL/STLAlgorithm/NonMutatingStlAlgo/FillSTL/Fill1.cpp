#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
fill(first, last, value);

Parameters:

first: Iterator pointing to the beginning of the range.
last: Iterator pointing beyond the last element.
value: The value to be assigned to each element in the range.
*/

int main()
{
    vector<int> v = {10, 20, 30, 40};
    fill(v.begin(), v.end(), 5);
    for (int x : v)
        cout << x << " ";
    return 0;
}

