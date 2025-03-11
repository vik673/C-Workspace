#include<iostream>

using namespace std;
// A variable declared as const connot be modified after initialization
// it must be intializd at the time of declaration

const int x = 10;

// Const can be used with pointers to specify 
// whether the the pointer itself or the data it points to is constant.

// const int* ptr: pointer to a constant integer(value can not be changed).

//const int* const ptr: Constant pointer to a constant integer
// (neither the pointer nor the value can be changed).

int a =10;
const int* ptr1 = &a; // Pointer to the const integer
// *ptr =20  // Error: can not modify the value 
 
int* const ptr2 = &a; // Constant pointer to an integer
*ptr2 = 20; // Allowed: Value can be modified.
// ptr2 = nullptr; // Error : cannot modify the pointer

const int* const ptr3 = &a; // constant pointer to a constant integer
//*ptr = 30; // error : can not modify the value
//ptr3 = nullptr; // Error: can not modify the pointer.

/*
Note:-
Can not be modified after initialization.

Pointer:operator-
1. const int* : pointer to the const value.
2. int* const  constant pointer to value.
3. const int* const: Constant pointer to a constant value.

Const can be used as:
1. Function parameter:- Ensures the function does not modify the argumnet.
2. Member Function:- Can not modify the argumnet.
3. Return values:- prevents modification of the returned values.
4. Object:- Can not be modified: only const member function can be modified.
5. Mutable Data member:- Can be modified even in const objects or functions.
*/
