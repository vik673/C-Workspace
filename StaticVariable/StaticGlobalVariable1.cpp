#include<iostream>

using namespace std;
// when a variable is declared as static in the global scope, It has internal linkage.
// this means the variable is only accessible within the file where it is declared, 
// and it can not be accessed from other files.
static int x = 10;

void display(){
    cout << "x = " << x << endl;
} 