#include<iostream>

using namespace std;

class MyClass{
    public:
      // static data member
      static int count;
      MyClass() {
        count++;
      }
      // static data method
      static void showcount()
      {
        cout << "Total Objects: " << count<< endl;
      }
};

int MyClass::count = 0;

int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass::showcount(); // total object is 2.
    return 0;
}