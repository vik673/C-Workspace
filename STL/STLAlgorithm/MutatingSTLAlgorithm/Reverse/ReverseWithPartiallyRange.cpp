#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    reverse(v.begin() + 1, v.end());
    for (int x : v)
        cout << x << " ";
    return 0;
}
/*
The above program uses reverse to reverse a portion of the elements of a vector v with elements {10, 20, 30, 40, 50}. 
The reverse() function reverses the sub-range from the second element to the end using reverse(v.begin() + 1, v.end()).
Finally, the modified vector is iterated and the elements are printed, resulting in the output "10 50 40 30 20 ".
*/