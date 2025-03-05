#include<iostream>

using namespace std;
// Function Overloading
// Function overloading with same name but diffferent parameters.
// The compiler dstinguish between them based 
// on the number and type of argumrnts.

void print(int i)
{
    cout <<"Integer: " << i << endl;
}

void print(double d)
{
    cout << "Double: " << d << endl;
}

void print(string s)
{
    cout <<"String: " << s<< endl;
}

int main()
{
    print(10);
    print(3.14);
    print("Hello");
    return 0;
}