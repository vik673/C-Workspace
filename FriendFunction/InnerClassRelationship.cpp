#include<iostream>

using namespace std;

// two classes may need to share the private data. Delare the one calss as a friend 
// so that other class allows to access the data.

class A{
    private:
       int secret;
    public:
     A(int s) : secret(s){}

        //Declare class B as a friend
        friend class B;
};

class B 
{
   public:
      void showSecret(const A& a)
      {
        cout << "Secret of the data is " << a.secret << endl;
      }
};

int main()
{
    A a(42); 
    B b;
    b.showSecret(a);
    return 0;
}


