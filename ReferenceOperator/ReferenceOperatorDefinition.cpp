//A Reference is the nickname for the variable
///It must be initialized when declared and can not be registered to refer to another varibale.

//Syntax:- Type& ref = esxisting_variable;

int x= 10;
int& ref = x; // ref is a reference to x

ref = 20; // Modifies x throughref
cout <<  x; // output: 20