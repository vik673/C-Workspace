#include<iostream>

using namespace std;




// Returning the current object
// This can be used to return the current object from a member function.
// which is useful for method chaining.

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