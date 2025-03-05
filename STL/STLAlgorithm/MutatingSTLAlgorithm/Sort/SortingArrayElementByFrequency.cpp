

/*
Given an array of integers, the task is to sort the elements based on their frequency.

Example:

Input: arr[] = {10, 5, 20, 10, 10, 5, 20}
Output: arr[] = {10, 10, 10, 5, 5, 20, 20}
Explanation: Frequency of 10 is 3, 5 and 20 is 2

Input: arr[] = {2, 1, 2, 1}
Output: arr[] = {2, 2, 1, 1}
Explanation: Frequency of 2 and 1 is 2, but 2 comes before 1 in original array.

In C++, unordered_map stores the key value pair and allows the fast access and insert operation. 
The idea is to store the frequency count in unordered_map, then create a vector of pairs from this map and 
sort it on the basis of the frequencies. Then reconstruct the original array by copying the elements from 
the sorted vector to array.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool myCmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

void sortByFreq(int arr[], int n) {
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), myCmp);
    int i = 0;
    for (auto x : v)
        for (int j = 0; j < x.second; j++)
            arr[i++] = x.first;
}

int main() {
    int arr[] = {10, 5, 20, 10, 10, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortByFreq(arr, n);
    for (int x : arr)
        cout << x << " ";
    return 0;
}

/*
Explanation:-
We traversed the given array arr and used an unordered map m to store each element's frequency.
m = {10: 3, 20: 2, 5: 2} // Order can be anything

The vector of pair v is created and all the pairs of map m are stored in it.

v = {10: 3, 5: 2, 20: 2}

Then, it is sorted using sort() function with myCmp() comparator. This comparator compares two pairs of vector v by their second value (not key).

v = {10: 3, 5: 2, 20: 2}

Now, the original array is updated by copying the first element (keys) the number of times of its frequency from the vector v to array arr.

arr = {10, 10, 10, 5, 5, 20, 20}
*/