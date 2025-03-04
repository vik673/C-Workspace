#include<iostream>

using namespace std;

// A member function declared as
// const can not modify the object's state
// (i.e it cannot modify non-mutable data members.)

class MyClass
{
    private:
    int value;
    public:
    MyClass (int v):value(v) {}
    int getValue() const {
        //const member unction 
        // value = 10;  // error : can not modify data members in a const unction
        return value;
    }
};

int main()
{
    MyClass obj(5);
    cout << "value: " << obj.getValue() << endl;
    return 0;
}
