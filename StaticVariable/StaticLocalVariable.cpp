#include<iostream>

using namespace std;

// Static local variable inside member function behave similarily to static variable in the regular function.
// They retain their value between function call and are shared across the function all objects of the function.

class MyClass
{
    public:
    void counter(){
        static int count =0; // static local variable
        count++;
        cout << "Cout: " << count << endl;
    }
};

// Static Local variable count is shared across all the objects of the class.
// It retains its value between the function call.

int main()
{
    MyClass obj1,obj2;
    obj1.counter();
    obj2.counter();
    return 0;
}
