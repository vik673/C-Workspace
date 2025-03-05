#include<iostream>
#include<stack>

using namespace std;

/*
Stack Traversal
We cannot access stack elements randomly as they are not stored at contigous memory locations. 
Hence, we cannot use loops or iterators to traverse stacks.

However, in some cases, if we want to remove a few elements from stack or empty a stack we can do that 
by using some built-in functions we discussed above.

The idea is:

While, stack is not empty, i.e., there are some elements in stack.
Print the top element.
Pop the top element.
Repeat the above 2 steps until stack is not empty.
*/


int main()
{
   
    stack<int> stack;
    
    // The push function inserts elements
    // at the top of Stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    // After above operations, stack will 
    // look like:
    //     ******    
    //     * 30 *  <- Stack TOP
    //     * 20 *
    //     * 10 *
    //     ******
    
    // While stack is not empty
    while(!stack.empty())
    {
        // Print top element
        cout<<stack.top()<<" ";
        
        // Pop top element
        stack.pop();
    }
    
    return 0;
}

/*
All of the above five functions we discussed works in constant time complexity.

push()    -----
pop()     -----  \
top()     -----    ---  O(1) Time Complexity.
size()    -----  /
empty()   -----
Container Adaptor: In C++ STL, container adaptor is a term used for containers that can be built upon other containers.
That is, they can be implemented using other containers already available in C++ STL.

The stack is a container adaptor and can be implemented using any other container which supports below operations:

Inserting elements to the end.
Deleting elements from the end.
Returning size of the container.
Returning element from the end.
Checking if the container is empty.
*/