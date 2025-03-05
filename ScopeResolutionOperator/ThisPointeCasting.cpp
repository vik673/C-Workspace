#include<iostream>

using namespace std;

class Base
{
   public:
      void display()
      {
        cout << "Base class display function " << endl;
      }
};

class Derived : public Base
{
    public:
    void display()
    {
        cout << "Derived class displayt function " << endl;
    }
    void callBaseDisplay()
    {
        //Cast "this" to Base* and call Base::display()
        static_cast<Base*>(this)->display();
    }
};

int main()
{
    Derived obj;
    obj.display();
    obj.callBaseDisplay();
    return 0;
}
