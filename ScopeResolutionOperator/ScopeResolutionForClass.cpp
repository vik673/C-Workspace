#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count;
  public:
    void setData(void){
        cout << " Enter the Id" << endl;
        cin>>id;
        count++;
    }

    void getData(void)
    {
        cout<<"The Id of this employee is " << id << " and this is the employee number "<< count << endl;
   
    }

    static void getCount(void)
    {
        // static function can access only the static variable, static functions only.
      cout << " The valuie of count is " << count << endl;
    }


};
// decaration of the static variable is
// outside of the class.
int Employee :: count = 1000; // default value is zero

int main()
{
    Employee emp, emp1, emp2;
    // emp.id =5; can not do it because
    // id and count is private.
    // emp.cout = 10;
    emp.setData();
    emp.getData();
    Employee::getCount();

    emp1.setData();
    emp1.getData();
    Employee::getCount();

    emp2.setData();
    emp2.getData();
    Employee::getCount();

    return 0;
}

