#include<iostream>

using namespace std;

/*
Const can be used to specify that the return
value of a function should not be modified.
*/

const int getConstantValue()
{
    return 42;
}

int main()
{
    const int value = getConstantValue();
    // value = 10;
    // Error : Cannot modify a const variable
    return 0;
}
