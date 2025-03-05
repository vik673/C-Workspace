#include<iostream>

using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
    public:
       void sound() override{
        cout << "Bark" << endl;
       }
};

int main()
{
    Animal *a = new Dog();
    a->sound();
    return 0;
}