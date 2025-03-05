#include<iostream>
#include<cstring>

using namespace std;
// In Shallow copy, the pointer is copied, not the data it points to.
// Both objects share the same memory.

class Shallow
{
    public:
        char* buffer;
        
        // constructor 
        Shallow(const char* s)
        {
            buffer = new char[strlen(s) + 1];
            strcpy(buffer, s);
        }

        //default copy constructor (shallow copy)
        Shallow(const Shallow& other) : buffer(other.buffer){}

        //destructor (causes issues with shallow copy
        ~Shallow()
        {
            delete[] buffer;
        }
};

int main()
{
    Shallow obj1("Hello");
    Shallow obj2 = obj1; // Shallow Copy

    // Both objects point to the same memory
    cout << "obj1.buffer " << obj1.buffer << endl;
    cout << "obj2.buffer " << obj2.buffer << endl;

    // Modify obj1's buffer(affects obj2)
    obj1.buffer[0] = 'X';
    cout << "After modificatio:" << endl;
    cout << "obj1.buffer: " << obj1.buffer << endl;
    cout << "obj2,buffer: " << obj2.buffer << endl;

    // Destructors cause double-free error(crash)
    return 0;
}