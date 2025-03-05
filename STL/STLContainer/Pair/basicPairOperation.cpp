/*
make_pair()
make_pair() is a template function that allows us to create a pair from the values. 
This function is redundant in a later version of C++ because the same functionality 
is also provided by curly brackets.

p= make_pair(v1, v2);

where

p: Name of the pair.
v1 & v2: Values of the first and second element.
Comparison of Pairs
The relational and equality operators can be used for pair objects. Here is their behaviour:

Equal (==): Two pairs are equal if and only if both their corresponding first and second values are equal.
Not Equal (!=): Two pairs are not equal if either their first values or their second values (or both) are not equal.
Less Than (<): Pairs are compared lexicographically. First, the first values are compared. If the first value of the
first pair is less than the first value of the second pair, then the first pair is considered less than the second pair.
If the first values are the same, then the second values are compared, and the same logic applies.

Greater Than (>): Similar to the "less than" comparison, pairs are compared lexicographically.
The comparison happens
first on the first values, and if they are equal, the comparison moves on to the second values.
*/

#include <iostream>
using namespace std;

int main() 
{
    pair<int, int> p1(1, 12), p2(9, 12);
    cout << (p1 == p2) << " "
         << (p1 != p2) << " "
         << (p1 > p2) << " "
         << (p1 < p2) << endl;
    return 0;
}