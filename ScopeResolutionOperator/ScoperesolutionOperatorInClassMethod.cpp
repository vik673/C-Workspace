#include <iostream>
using namespace std;


class Employee
{
    private:
         int a,b,c;
    public:
      int d,e;
      void setData(int a,int b,int c);// decalaration
      void getData(){
        cout << " The value of a is " << a << endl;
        cout << " The value of b is " << b << endl;
        cout << " The value of c is " << c << endl;
        cout << " The value of d is " << d << endl;
        cout << " The value of e is " << e << endl;
      }
};

void Employee :: setData(int a,int b,int c)
{
  this->a = a;
  this->b = b;
  this->c = c;
}

int main()
{
    Employee emp;
    emp.setData(1,2,3);
    emp.d=34;
    emp.e=5;
    emp.getData();
    return 0;
}

