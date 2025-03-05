
/*
Problem Statement:
When tasked with reversing a string, the stack data structure proves to be highly useful. A stack follows the LIFO (Last In, First Out) principle, which means that the last item inserted into the stack is the first one to be removed. This behavior can be leveraged to reverse the order of characters in a string.

Input: string = "GeeksQuiz"
Output: "ziuQskeeG"

Input: string = "Welcome to GFG"
Output: "GFG ot emocleW"
Approach:
Simple Example:
Consider the string geeks. We need to reverse it using a stack.

Initial String: "geeks"
At this point, the stack is empty.
We start traversing the string, pushing each character into the stack one by one.
Stack after first traversal:
After pushing all characters (g, e, e, k, s), the stack contains: [g, e, e, k, s].
Second traversal:
Now, we pop the characters from the stack and place them in a new string, starting with 's', then 'k', then 'e', and so on.
Final Reversed String: "skeeG"
Here's the process illustrated visually:

Initially: str = "geeks"
After First Traversal (Pushed to Stack):
Stack: g -> e -> e -> k -> s
After Second Traversal (Popped from Stack):
str = "skeeG"
The reversed string is "skeeG".
*/

void reverse(string &str) {
    stack<char> s;
    // Push all characters of the string into the stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    
    // Pop from stack and assign to string
    for (int i = 0; i < str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
}