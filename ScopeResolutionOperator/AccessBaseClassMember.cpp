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