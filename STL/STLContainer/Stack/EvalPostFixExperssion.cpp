
/*
Problem: Given a string of expression, evaluate the eqivalent Postfix expression for it.

Examples:
Input: "231*+9-"
Output: -4

Input: "570*+6-"
Output: -1



Approach:

Step 1: Create a Stack to store operands(values)


Step 2: Scan the given expression and do following for every scanned element.
If the element is a number, push it into the stack
If the element is an operator, pop operands for the operator from the stack. Evaluate the operator and push the result back to the stack.
Step 3: When the expression ends, the number in the stack is the final answer
*/
// Program to evaluate the
// postfix expression
#include <bits/stdc++.h>
using namespace std;

// Function to evaluate postfix
// expressions
int evaluatePostfix(string str)
{
    // Creating an empty stack
    stack<int> st;
    int n = str.length();

    // Traversing the string
    for (int i = 0; i < n; i++) {
        // Pushing elements into stack
        // if element is a number
        if (isdigit(str[i]))
            st.push(str[i] - '0');

        // Evaluation of the expression
        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char op = str[i];

            // Checking for the operators
            switch (op) {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}

// Drivers Method
int main()
{
    string str = "231*+9-";
    cout << evaluatePostfix(str) << endl;

    return 0;
}