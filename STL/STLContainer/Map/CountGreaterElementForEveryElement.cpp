/*

Problem Statement
Given an array, we need to count the number of elements greater than each element in the array.

Example:
Input:
arr[] = {10, 5, 8, 20, 30, 8}
Output:
2 5 3 1 0 3
Explanation:
10 → Greater elements are {20, 30} → Count = 2
5 → Greater elements are {10, 8, 20, 30, 8} → Count = 5
8 → Greater elements are {10, 20, 30} → Count = 3
20 → Greater elements are {30} → Count = 1
30 → No greater elements → Count = 0
8 → Greater elements are {10, 20, 30} → Count = 3
*/

#include <iostream>
using namespace std;

void countGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (j != i && arr[j] > arr[i]) {
                count++;
            }
        }
        cout << count << " ";
    }
}

int main() {
    int arr[] = {10, 5, 8, 20, 30, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    countGreater(arr, n);
    return 0;
}