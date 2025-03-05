#include<iostream>

using namespace std;

class Point
{
    public:
      int x, y;

      Point(int x, int y): x(x), y(y){}

      //Copy constructor
      Point(const Point &p)
      {
        x= p.x;
        y= p.y;
      }

      void display()
      {
        cout << "X: " << x << ", Y: " << y << endl;
      }
};

int main()
{
    Point p1(10,20);
    Point p2 = p1;

    p1.display();
    p2.display();

    return 0;
}