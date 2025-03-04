#include<iostream>

// A const object can not be modified after initialization.
//Only const member function can b called on a const object.

class MyClass
{
    public:
       void nonConstFunc(){}
       void consFunc() const {}
};

int main()
{
    const MyClass obj;
    // obj.nonConstFunc() // Error can not call non-const function  on a const object   
    obj.consFunc(); // Allowed : Can call const function
    return 0;
}
