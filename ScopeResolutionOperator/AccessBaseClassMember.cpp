#include<iostream>

using namespace std;

class Base 
{
    public:
      void display()
      {
        cout << "Base class display function" << endl;
      }
};

// 1. using the scope resolution operator.
// You can directly call the base class's member function or access its data
// member using the base class name and scope resolution operator.

// 2. using this pointer Casting
// You can cast the this pointer to the base class type.

class Derived : public Base{
  public:
      void display()
      {
        cout << "Derived class display function" << endl;
      }
    void callBaseDisplay()
    {
        Base::display();
    }
};

int main()
{
    Derived obj;
    obj.display();
    obj.callBaseDisplay();
    return 0;
}