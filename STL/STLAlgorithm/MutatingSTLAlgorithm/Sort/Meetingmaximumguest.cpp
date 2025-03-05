#include <iostream>
#include <algorithm>
using namespace std;

/*
Imagine we are invited to a full-day party along with several other guests. Given the list of guests along with their arrival and departure times, the task is to find out the maximum number of guests present at the party at any given time.

Example:

Input: arr[] = {900, 940}
dep[] = {1000, 1030}
Output: 2
Explanation: Both guests are present between 09:40 and 10:00

Input: arr[] = {800, 700, 600, 500}
dep[] = {840, 820, 830, 530}
Output: 3
Explanation: 3 guests are present between 08:00 and 08:20

Approach
The most efficient way to solve this problem involves sorting both the arrival and departure time arrays. The core idea is to consider all time points from the earliest arrival to the latest departure and, at each point, calculate the number of guests present. The maximum of these counts will be the answer.

Sort both arrival and departure arrays in ascending order.
Traverse through both sorted arrays simultaneously:
If an arrival happens before a departure, increase the guest count.
If a departure happens before or at the same time as an arrival, decrease the guest count.
Keep track of the maximum guest count.
*/


int maxGuests(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 1, j = 0, res = 1, curr = 1;

    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {   curr++; i++;}
        else
        { curr--; j++; }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[] = {900, 600, 700};
    int dep[] = {1000, 800, 730};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxGuests(arr, dep, n);
    return 0;
}