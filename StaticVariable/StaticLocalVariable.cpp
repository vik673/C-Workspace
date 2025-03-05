#include<iostream>

using namespace std;

// Static local variable inside member function behae similarily to sstatic variable in the regular function.
// They retain their value between function calla and are shred across the function all objects of the function.

class MyClass
{
    public:
    void counter(){
        static int count =0; // static local variable
        count++;
        cout << "Cout: " << count << endl;
    }
};

int main()
{
    MyClass obj1,obj2;
    obj1.counter();
    obj2.counter();
    return 0;
}