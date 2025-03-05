#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string s = "geeks";
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}

/*
The function works using a two-pointer approach. It starts from the leftmost and rightmost elements. 
It swaps them while moving both pointers towards centre. 
This leads to the time complexity of O(n) and space complexity of O(1) as it does in place swapping.
*/