#include<iostream>

using namespace std;

// Operator overloading allows you to redefine 
// the behaviour of operators for i=user-defined types.

class Complex{
    public:
      int real, imag;
      Complex(int r=0,int i=0) : real(r), imag(i) {}

      Complex operator + (Complex const &obj)
      {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
      }

      void display()
      {
        cout << real<< " + " << imag << "i" << endl;
      }
};

int main()
{
    Complex c1(3,4), c2(1,2);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}