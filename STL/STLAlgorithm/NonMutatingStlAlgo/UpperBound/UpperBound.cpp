#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*
upper_bound(begin, end, value);

Parameters:

begin: The beginning iterator of the container.
end: The ending iterator of the container.
value: The value to search for.
Return Value:

Returns an iterator to the first element that is strictly greater than the specified value.
If no such element is found, it returns the iterator to the end of the range.

*/
int main()
{
    vector<int> v = {10, 20, 30, 20, 30, 40};
    auto it = upper_bound(v.begin(), v.end(), 20);
    cout << (*it) << endl;
    it = upper_bound(v.begin(), v.end(), 30);
    cout << (*it) << endl;
    return 0;
}