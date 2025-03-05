#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
max_element(start, end);
min_element(start, end);

Parameters:

start: Iterator to the beginning of the range.
end: Iterator to the end of the range.
Return Value:

max_element returns iterator to the maximum element in the range.
min_element returns iterator to the minimum element in the range.
*/

int main()
{
    vector<int> v = {10, 5, 30, 40, 90, 8};
    auto it1 = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());
    cout << (*it1) << " " << (*it2) << endl;
    return 0;
}