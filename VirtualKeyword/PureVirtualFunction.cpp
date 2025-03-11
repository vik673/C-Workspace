#include<iostream>

using namespace std;

// A pure virtual function is a virtual function with no implementation
// in the base class. It is declared using = 0.

// A class containing at least one pure virtual function is called an abstarct class,
// and it can not be instantiated. 

// Derived classes must override the pure virtual function to become concrete classes.

// It is abstract class
class Shape
{
    public:
        virtual void draw() = 0;
};

class Circle : public Shape{
    public: 
      void draw() override
      {
        cout << "Drawing a Circle" << endl;
      }
};

// Query: how to define interface in the c++?

int main()
{
    Shape *s = new Circle();
    s->draw();
    delete s;
    return 0;
}
