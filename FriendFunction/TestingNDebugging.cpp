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

// The friend keywords allows external function or classes to access the private and protected
// members of a class.

// It is commonly used for:
// 1. operator overaloading
// 2. Utility function which need access to private data.
// 3. 