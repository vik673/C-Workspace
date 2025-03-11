#include<iostream>

// Implicitly avaiable
// You do not need to declare this, it is implicitly available in non-static member function

class MyClass
{
    private:
    int value;
    public:
    MyClass(int v) : value(v){}
    MyClass& operator+=(const MyClass& other){
        this->value +=other.value;
    }
    void print()
    {
        std::cout << "Value = " << value << std::endl;
    }
};

int main()
{
    MyClass obj1(10),obj2(20);
    obj1+=obj2;
    obj1.print();
    return 0;
}