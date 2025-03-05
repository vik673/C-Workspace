#include<iostream>

using namespace std;

// Hint to the Complier
// The register keyword is a hint to the complier that the variable
// should be stored in a CPU register for faster access.
// However, the compiler is free to ignore this hint.

// Scope 
// Like other storage class specifiers(e.g. auto, static),
// register affects the storage duration and scope of the variable.

int main()
{
    // Hint to store 'counter' in a register
    register int counter;

    for(counter = 0; counter <10; counter++)
    {
        cout << counter << " ";
    }
   return 0;
}