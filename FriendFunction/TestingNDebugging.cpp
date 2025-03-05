#include<iostream>

using namespace std;

class MyClass{
    private:
          int hiddenvalue;
    public:
        MyClass(int v) : hiddenvalue(v){}

        //Friend function for testing
        friend bool testHiddenvalue(const MyClass& obj, int expected);
};

bool testHiddenvalue(const MyClass& obj, int expected)
{
    return obj.hiddenvalue == expected;
}

int main()
{
    MyClass obj(100);
    if(testHiddenvalue(obj,100)){
        cout<<"Test Passed " << endl;
    }
    else
    {
        cout <<"Test Failed " << endl;
    }
    return 0;
}
