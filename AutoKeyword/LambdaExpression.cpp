#include<iostream>

using namespace std;

// Lambda Expression often have complex or unnamed typpes. 
// Using auto makes, it easies to store and use lamda function.

int main()
{
    // lambda function to add two numbers.
    auto add = [](int a, int b){ return a+b;};

    std::cout << "Sum : " << add(3,4) << std::endl;
    return 0;
}