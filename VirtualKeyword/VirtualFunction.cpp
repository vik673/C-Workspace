#include <iostream>

// A virtual function is the member function of the base class
// that can be overridden in the derived class.

// When the function is virtual in the base class,
// the derived class can provide its own implmentation of the function.

// The correct function (base or derived) is determined at runtime based on the actual object type, not
// the type of pointer or reference type.
using namespace std;

class Base{
public:
      virtual void show(){
        cout<<"Base classs showFunction" << endl;
      }

};

class Derived : public Base{
public:
/*
void show() override{
        cout<<"derived calss showFunction" << endl;
      }
*/
      void show(){
        cout<<"derived class showFunction" << endl;
      }
};

// Question: this function is working 
// with and without override keyword.

int main()
{
  Base *b = new Derived();
  b->show();
  delete b;
  return 0;
}