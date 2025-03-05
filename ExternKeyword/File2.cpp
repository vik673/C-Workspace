#include<iostream>

using namespace std;

extern int globalVar;

void display()
{
    cout << "Global variable: " << globalVar << endl;
}

// Sharing Global variable across file
// Suppose you have a global variable defined in one source file, 
// you want to access it in another source file.
// You can use extern to declare the variable in the second file. 

int main()
{
    // Output : Global variable :42
    display();
    return 0;
}