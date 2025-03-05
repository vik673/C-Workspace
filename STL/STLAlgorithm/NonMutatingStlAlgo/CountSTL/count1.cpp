
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
count(start, end, value);

Parameters:

start: Iterator to the beginning of the range.
end: Iterator to the end of the range.
value: Value whose occurrences need to be counted.
*/
int main()
{
    vector<int> v = {30, 20, 5, 10, 6, 10, 10};
    cout << count(v.begin(), v.end(), 10);
    return 0;
}
