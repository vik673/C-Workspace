#include<iostream>

using namespace std;

void incremnet(int* ptr)
{
    (*ptr)++; // modiy the value at given address
}

int main()
{
    int x = 5;
    incremnet(&x);
    cout << x;
}