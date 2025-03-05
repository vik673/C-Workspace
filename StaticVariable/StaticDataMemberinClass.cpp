#include<iostream>

using namespace std;

// When a data member of a class is declared as static, it is shared by all objects of the class.
// There is only one copy of the static member, regardless of how many objects of the calss are created.

class MyClass
{
    public:
       static int count;
       MyClass()
       {
        count++;
       }
};

int MyClass::count =0;

int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    cout << "Total object created " << MyClass::count << endl;
    return 0;
}

// Static data members are shared across all the objects of the class.
// They must be defined outside the class(in the global scope) using scope resolution operator.
// They can be accessible using the class name(e.g. MyClass::count).