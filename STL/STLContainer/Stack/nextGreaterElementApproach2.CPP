#include <iostream>
#include <stack>
using namespace std;

/*
Approach 2: Optimized Stack Solution (O(n) Time Complexity)
We can solve this problem efficiently using a monotonic decreasing stack. The key idea is:

Traverse from right to left since we need to find the next greater element.
Use a stack to keep track of elements, ensuring that the next greater element for
 each number is efficiently determined.

While processing an element, we pop smaller elements from the stack.
The element at the top of the stack (after popping) is the next greater element.
Push the current element onto the stack to maintain the order.
Implementation
*/
void nextGreater(int arr[], int n) {
    stack<int> s;
    int output[n];

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop(); 
        }
        output[i] = s.empty() ? -1 : s.top(); // If stack is empty, assign -1
        s.push(arr[i]); 
    }
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
}

int main() {
    int arr[] = {5, 15, 10, 6, 12, 9, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreater(arr, n);
    return 0;
}
/*
Dry Run of Stack Solution
Consider arr[] = {5, 15, 10, 6, 12, 9, 18}:

Start from rightmost element (18):
   Stack: [18], Output: [-1]
Move to 9:
   Top of stack (18) > 9, so NGE of 9 = 18
   Stack: [18, 9], Output: [-1, 18]
Move to 12:
    Pop 9 (smaller than 12)
    NGE of 12 = 18
    Stack: [18, 12], Output: [-1, 18, 18]
Continue for all elements..
*/