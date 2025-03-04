#include<iostream>

using namespace std;

class MyClass{
    private:
      mutable int counter;
    public:
     MyClass() : counter(0) {}

     void increment() const{
        counter++;
     }

     int getCounter() const 
     {
        return counter;
     }
};

int main()
{
    const MyClass obj;
    obj. increment();
    cout << "Counter: " << obj.getCounter() << endl; 
    return 0;
}