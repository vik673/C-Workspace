#include<iostream>

using namespace std;

class MyClass
{
    public:
       void display()
       {
        cout << "Displaying Object" << endl;
       } 

       void callDisplay()
       {
        this->display();
       }
};

int main()
{
    MyClass obj;
    obj.callDisplay();
    return 0;
}