#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    reverse(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    return 0;
}
/*
The above program uses reverse to reverse the elements of a vector v with elements {10, 20, 30}. 
The reverse() function reverses it in-place using reverse(v.begin(), v.end()).
Finally, reversed vector is iterated and the elements are printed, resulting in the output "30 20 10 ".
*/