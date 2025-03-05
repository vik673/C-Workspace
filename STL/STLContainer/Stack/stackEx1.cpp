#include <iostream>
#include <stack>
using namespace std;

/*
The functions associated with stack are:

push(g): The push function adds an element ‘g’ passed as parameter to it at the top of the stack.
pop(): The pop() function deletes the topmost element of the stack.
top(): This function returns a reference to the topmost element of the stack.
size(): The size() function returns the size of the stack, i.e.,
 the number of elements present in the Stack.
 
empty(): This function is used to check whether the stack is empty.
 If the stack is empty it will return True otherwise it will return False.
*/

int main() {
    stack<int> s;
    s.push(10); // Insert 10 at the top
    s.push(20); // Insert 20 at the top
    s.push(30); // Insert 30 at the top

    cout << "Stack size: " << s.size() << endl; 
    cout << "Top element: " << s.top() << endl; 

    s.pop(); // Remove the top element (30)
    cout << "Top after pop: " << s.top() << endl; 

    return 0;
}