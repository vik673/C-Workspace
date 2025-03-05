/*
Problem Statement:
Given a string consisting of only the following six characters:

(, ), {, }, [, ]
Determine if the string is balanced. A string is balanced if:

Every opening bracket has a corresponding closing bracket of the same type.
The brackets are properly nested.

Stack-based Solution:
The stack data structure, which works on the LIFO principle, is perfect for this problem. Here’s how to solve it:

Push opening brackets onto the stack.
For each closing bracket, check if it matches the top of the stack.
If it does, pop the stack (remove the matched opening bracket).
If it doesn’t, return false.
After processing the string, if the stack is empty, the parentheses are balanced. If there’s anything left in the stack, return false.
Handling corner cases:
An empty string is considered balanced.
If a closing bracket appears before an opening bracket, return false.
After processing the string, the stack should be empty if all brackets have been matched and removed.
*/

#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

// Function to check if two brackets match
bool matching(char a, char b) {
    return ((a == '(' && b == ')') || 
            (a == '{' && b == '}') || 
            (a == '[' && b == ']'));
}


bool isBalanced(string str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
       
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            st.push(str[i]);
        }
       
        else {
            if (st.empty()) {
                return false;
            }
         
            else if (!matching(st.top(), str[i])) {
                return false;
            }
            // If the brackets match, pop the top element from the stack
            else {
                st.pop();
            }
        }
    }

    // If the stack is empty, the string is balanced
    return st.empty();
}

int main() {
    string bracSeq = "(())(())";
    cout << isBalanced(bracSeq); 
    return 0;
}

/*
Explanation of the Code
matching Function:
This function checks if two characters form a valid pair of opening and closing brackets.
For example, matching('(', ')') returns true, while matching('{', ')') returns false.
isBalanced Function:
A stack is used to keep track of opening brackets.
The function iterates through the string:
If an opening bracket is encountered, it is pushed onto the stack.
If a closing bracket is encountered:
If the stack is empty, the string is unbalanced.
If the top of the stack does not match the current closing bracket, the string is unbalanced.
If the brackets match, the top element is popped from the stack.
After processing the entire string, if the stack is empty, the string is balanced.
Why Use a Stack?
The stack is the most efficient data structure for this problem because:

It follows the LIFO principle, which aligns with the requirement that the last opened bracket must be closed first.
It allows us to easily check and remove the most recent opening bracket
 when a corresponding closing bracket is encountered.
*/