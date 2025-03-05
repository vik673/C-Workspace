#include<iostream>

using namespace std;

// When overloading certain operator(e.g. <<,>>,+,-),
// it is often necessary to access private members of the class.
// Declaring the overloaded operator function as afriend allows 
// it to access these members.

class Complex{
  private:
        double real, imag;
    public:
        Complex(double r =0, double i=0) : real(r), imag(i){ }

        // friend function to overload the << operator
        friend ostream& operator<<(ostream& out, const Complex& c);
};

ostream& operator<<(ostream& out, const Complex& c){
    out <<"("<< c.real << " + " <<c.imag<< "i)" << endl;
    return out; 
}

int main(){
    Complex c(3,4);
    cout << c;
    return 0;
}