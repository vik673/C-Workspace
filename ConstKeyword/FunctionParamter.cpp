#include<iostream>

using namespace std;

/*
const can be used in function parameters to ensure that the
funtion does not modify the passed argument.
*/

void printValue(const int& value)
{
    //value = 10;
    //error: can not modify a const parameter
    cout << "value: " << value << endl; 
}

int main()
{
    int x=5;
    printValue(x);
    return 0;
}