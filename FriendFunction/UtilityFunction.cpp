#include<iostream>

using namespace std;

// Utility function
// A function needs to work closely with a class but does not logically belong
// as a member function. Declaring such a friend allows it to access the 
// class's private members.

class Box
{
    private:
        int length, width, height;
    public:
        Box(int l, int b, int h) : length(l), width(b), height(h){}

        //Calculate the the volume of the Box
        friend int calculateVolume(const Box& b);
};

int calculateVolume(const Box& box)
{
   return box.length * box.width * box.height;
}

int main()
{
    Box box(1,2,3);
    cout << "Total volume of the Box " << calculateVolume(box) << endl;
    return 0;
}



