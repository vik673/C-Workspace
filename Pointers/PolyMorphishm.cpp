#include<iostream>

using namespace std;

// Use Base Class pointer to access derived class object(runtime-pointer)

class Animal
{
 public:
 virtual void sound()
 {
    cout << "Generic Animal Sund" << endl;
 }
};

class Dog : public Animal{
    public:
    void sound() override{
        cout <<"Dog barks" << endl;
    }
};
int main()
{
    Animal* animal = new Dog();
    animal->sound(); // Output Dog barks
    return 0;
}