#include<iostream>

using namespace std;

// When a variable declared as static inside a function, it retains its value between the function call.
// The variable is initialized only once, and its lifetime extends until the program terminates.


void counter()
{
    static int counter =0;
    counter++;
    cout << "Counter value is : " << counter<< endl;
} 

int main()
{
    counter();
    counter();
    counter();
    return 0;
}




