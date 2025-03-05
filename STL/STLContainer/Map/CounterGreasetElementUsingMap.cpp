
/*
Efficient Solution using Map (O(n log n))

Approach:
    Use a map to store frequencies of elements.
    Traverse the map from right to left, maintaining cumulative frequencies.
    Use this cumulative frequency to determine the count of greater elements efficiently.
*/

#include <iostream>
#include <map>
using namespace std;

void countGreater(int arr[], int n) {
    map<int, int> m;
    
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    int cum_freq = 0;
   
    for (auto it = m.rbegin(); it != m.rend(); it++) {
        int freq = it->second;
        it->second = cum_freq;
        cum_freq += freq;
    }
    
    for (int i = 0; i < n; i++) {
        cout << m[arr[i]] << " ";
    }
}

int main() {
    int arr[] = {10, 5, 8, 20, 30, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    countGreater(arr, n);
    return 0;
}