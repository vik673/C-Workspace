#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxVal(int arr[], int n, int K) {
    sort(arr,arr + n, greater<int>());
    int res = 0;
    for (int i = 0; i < K; i++)
        res += arr[i];
    return res;
}

int main()
{
    int arr[] = {3, 7, 2, 5, 12, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 3;
    cout << getMaxVal(arr, n, K);
    return 0;
}
/*
Given an array of items where each element represents the value of a different item. The thief can pick exactly K items, and the task is to determine the maximum value the thief can collect.

Example:

Input: arr[] = {3, 7, 2, 5, 12, 30} K = 3
Output: 49

Input: arr[] = {8, 10, 2, 50, 80, 20} K = 4
Output: 160
*/