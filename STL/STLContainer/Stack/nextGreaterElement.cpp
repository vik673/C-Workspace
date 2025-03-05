/*
Problem: Given an array, print the Next Greater Element(NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider next greater element as -1.

Example:

Input: arr[] = {4, 5, 2, 25}
Output:
Element       NGE
   4      -->   5
   5      -->   25
   2      -->   25
   25     -->   -1

Input: arr[] = {1, 2, 4, 8, 6, 10}
Output:
Element       NGE
   1      -->   2
   2      -->   4
   4      -->   8
   6      -->   10
   8      -->   10
   10     -->   -1
Observations
If the array is sorted in increasing order, the next element is always the next greater element.
If the array is sorted in decreasing order, then all elements have -1 as their NGE because no greater element exists on the right.
The last element always has -1 as its next greater element since there is nothing to its right.
Approach 1: Naïve Solution (O(n²) Time Complexity)
The brute-force approach involves using two nested loops:

For each element, we traverse its right-side elements to find the next greater element.
If we find a greater element, we break the loop and print it.
*/

#include <iostream>
using namespace std;

void nextGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                cout << arr[j] << " ";
                break; 
            }
        }
        if (j == n) { // No greater element found
            cout << -1 << " ";
        }
    }
}

int main() {
    int arr[] = {5, 15, 10, 6, 12, 9, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreater(arr, n);
    return 0;
}