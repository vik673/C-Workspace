#include<iostream>

using namespace std;

// Constructor overloading alllows you to define multiple constructors for class,
// define multiple constructors for a class,
// each with a different set of parameter.

class Box
{
    public:
      int width, height, depth;

      Box()
      {
        width = height = depth = 0;
      }

      Box(int w, int h, int d)
      {
         width = w;
         height = h;
         depth = d;
      }

      Box(int size)
      {
        width = height = depth = size;
      }

      void display()
      {
        cout << "Width: " << width << ", Height " << height << ", Depth: " <<depth << endl;
      }
};

int main()
{
    Box b1;
    Box b2(10,20,30);
    Box b3(15);

    b1.display();
    b2.display();
    b3.display();
    return 0;
}