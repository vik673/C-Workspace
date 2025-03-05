#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/*
accumulate(start, end, initial_value, binary_function);

Parameters:

start: Iterator to the first element of the range.
end: Iterator to the element one after the last element of the range.
initial_value: Initial value to start the accumulation with.
binary_function: An optional function pointer that provides the binary operation to perform. By default, addition is used to get the sum.
*/

int main()
{
    vector<int> v = {10, 20, 30};
    int init_res = 0;
    cout << accumulate(v.begin(), v.end(), init_res);
    return 0;
}

