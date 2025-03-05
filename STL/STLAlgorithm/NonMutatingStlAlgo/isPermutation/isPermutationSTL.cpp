#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*

is_permutation(first1, last1, first2);

Parameters:

first1: Iterator to the beginning of the first range.
last1: Iterator to the end of the first range.
first2: Iterator to the beginning of the second range.
Return Value:

If two containers have identical elements but in different orders, it returns true.
Else it returns false.
*/

int main()
{
    vector<int> v1 = {10, 20, 30, 5};
    vector<int> v2 = {20, 10, 5, 30};

    if (is_permutation(v1.begin(), v1.end(), v2.begin()))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}