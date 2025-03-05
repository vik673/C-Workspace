#include<iostream>

// If the ase class pointer is used to deelete a derived class object, 
// to delete a derived class object. and the base class destructor is not virtual,
// only the base calss class destructor will be called, leading to the potential memory leaks or undefined behavior.

// Declaring the destructor as virtual ensures that the derived class 
// destructor is called first, followed by the base class destructor.

using namespace std;

class Base{
public:
   virtual ~Base()
   {
    cout <<"Base class destructor" << endl;
   }
};

class Derived : public Base{
    public:
    ~Derived(){
        cout << "Derived class destructor" << endl;
    }
};

int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}

