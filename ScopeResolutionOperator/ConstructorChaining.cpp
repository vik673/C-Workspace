#include<iostream>

using namespace std;

// 1. Multiple Inheritance
// C++ supports multiple inheritance,
// where a class can inherit from multiple base class.
// in such cases, the term super would be ambiguous
// because it wouldn't be clear which base class is being refered to.

// 2. Explicit Control
// C++ encourages explicit control over which base class
// members are accessed, using the scope resolution
// operator(::) or casting.

class Base
{
    public:
      Base(int x)
      {
        cout << "Base class constructor: " << x << endl;
      }
};
 
class Derived : public Base
{
    public:
    Derived(int x, int y) : Base(x)
    {
        //call Base call contructor
        cout << "Derived class constructor: " << y << endl;
    }
};

int main()
{
    Derived obj(10,20);
    return 0;
}