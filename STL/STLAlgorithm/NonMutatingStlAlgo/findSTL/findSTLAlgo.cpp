#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*

find(begin, end, value);

Parameters:

begin: The beginning iterator of the container.
end: The ending iterator of the container.
value: The value to search for.
Return Value:

The function performs a linear search and compares each element in the range [begin, end) with the given value. If it finds a match, 
it returns an iterator pointing to the matching element. If not, it returns the end iterator, indicating that the element was not found.

*/
int main()
{
    vector<int> v = {5, 10, 7, 10, 20};
    auto it = find(v.begin(), v.end(), 10);
    if(it == v.end())
        cout << " Not Found";
    else
       cout << "Found " << (it-v.begin());
    return 0;
}