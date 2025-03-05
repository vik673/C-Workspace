#include<iostream>

using namespace std;

// store addresses of functions for callbacks or event handling

void greet()
{
    cout << "Hello"<< endl;
}

int main()
{
    void (*funcPtr)() = &greet;
    funcPtr(); // output : Hello
}