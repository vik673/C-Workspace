#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

/*
Given an array representing chocolate packet sizes and the number of children, the task is to distribute these packets to the children such that each child should receive at exact one packet, and the goal is to minimize the difference between the child receiving the most chocolates and the child receiving the least.

Example:

Input: arr[] = {7, 3, 4, 9, 12, 56} m = 3
Output: 2

Input: arr[] = {3, 4, 1, 9, 56, 7, 9, 12} m = 5
Output: 6

Approach:
To solve this problem efficiently, we can sort the array of chocolates. After sorting, the difference between the largest and smallest elements for any M consecutive packets is minimized. This is because, after sorting, the problem essentially becomes about choosing M consecutive packets.

After sorting, the goal is to find the smallest difference between the maximum and minimum chocolates within any subarray of length M.

*/

int minDiff(int arr[], int n, int m)
{
    if (m > n)
        return -1;
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for (int i = 1; i + m - 1 < n; i++)
        res = min(res, arr[i + m - 1] - arr[i]);
    return res;
}

int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    cout << minDiff(arr, n, m);
    return 0;
}

/*
Explanation
The first step is we sorted the array arr:

arr[] = {2, 3, 4, 7, 9, 12, 56};

After that, we took a subarray of size m = 3 and started comparing the differences between first and the last element of this window and they are the maximum and minimum elements. We do this till all the subarrays of size 3 are checked. The minimum of these differences is stored and returned.
*/