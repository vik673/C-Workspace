/*
Given an array of integers, the task is to create a function that takes the array as an argument and prints the array in increasing order along with its original index before sorting.

Example:

Input: arr[] = {20, 40, 30, 10}
Output: 10 3
20 0
30 2
40 1
Explanation: After sorting, we print elements of the array along with their original indexes before sorting.

Input: arr[] = {100, 50, 20}
Output: 20 2
50 1
100 0
Explanation: After sorting, we print elements of the array along with their original indexes before sorting.

Approach
To do this, we can create a function to take arrays as arguments with array size and create a vector of pairs to store each element along with the index. The first value of the pair is the array element, and the second value of the pair is the element's index.

Then we can use the sort function to sort a vector of pairs which by default sorts the vector of pairs on the first element of the pair in increasing order.
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSortedWithIndex(int arr[], int n)
{
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
        v.push_back({arr[i], i});
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}

int main()
{
    int arr[] = {20, 10, 5, 40};
    printSortedWithIndex(arr, 4);
    return 0;
}