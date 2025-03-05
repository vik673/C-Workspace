#include<iostream>

using namespace std;

// 1. Pointer to the current Object
// this is a pointer to the object for which member function is called.

// 2. Implicitly avaiable
// You do not need to declare this, it is implicitly available in non-static member function

// 3. Accessing Members
// you can use this to access the data members and member function of the class.
// this->datamember
// this->memberFunction

// 4. Returning the current object
// This can be used to return the current object from a member function.
// which is useful for method chaining.

// 
class MyClass
{
    private:
    int x, y;
    public:
    MyClass& setX(int x){
        this->x = x;
        return *this;
    }  
    MyClass& setY(int y){
        this->y = y;
        return *this;
    }  
    void print()
    {
        cout << "x = " << x << " y = " << y << endl; 
    }
};

int main()
{
    MyClass obj;
    obj.setX(10).setY(20).print();
    return 0;
}