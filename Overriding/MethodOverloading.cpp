#include<iostream>

using namespace std;

// Method Overloading is similar to the function overloading but within a class.
// You can have multiple methods with the same name but different parameters.

class Math
{
    public:
      int add(int a, int b)
      {
        return a+b;
      }

      double add(double a, double b)
      {
        return a+b;
      }
};

