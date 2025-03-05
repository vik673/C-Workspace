#include<iostream>

using namespace std;
/*
We simply create a function myMax which accept two parameter of any data types and return maximum item of them. 
When we pass integer value to the myMax function, compiler create getMax function for integer type.
*/
template<typename T>
T myMax(T x, T y)
{
    return (x>y)?x:y;
}

int main()
{
    cout << myMax<int>(3,7) << endl;
    cout << myMax<char>('c','g')<< endl;
    return 0;
}