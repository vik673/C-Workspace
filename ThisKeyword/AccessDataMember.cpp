#include<iostream>

using namespace std;

// Accessing Members
// you can use this to access the data members and member function of the class.
// this->datamember
// this->memberFunction

class MyClass{
    private:
     int x;
     public: 
       void setX(int x)
       {
        this->x = x;
       }
       void print()
       {
        cout << "x value is : " << x << endl;
       }
};

int main()
{
    MyClass obj;
    obj.setX(10);
    obj.print();
    return 0;
}