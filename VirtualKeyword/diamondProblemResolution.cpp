#include<iostream>

using namespace std;

// Key points
// 1. Single instance of the Base Class
// virtual inheritance ensures that only one instance of the base class
// exits in the derived class(0), even if the base class is inherited through multiple paths.

// 2. Avoiding Ambiguity
// Without virtual inheritance, Accessing members of the common
// base class(A) from the derived class(D) would be ambiguous because 
// there would be multiple copies of A.

// 3. Usage in Complex Hierarchies
// Virtual inheritance is typically used in complex
// Class hierarchies involving multiple inheritance, where the 
// "Diamond Problem" aries.

class Animal
{
    public:
    void eat(){
        cout << "Animal is eating" << endl;
    }
};

class Memal : virtual public Animal{};
class Bird : virtual public Animal{};

class Bat : public Memal, public Bird{};

int main()
{
    Bat bat;
    bat.eat();
    return 0;
}

