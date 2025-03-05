#include <iostream>
#include <algorithm>
using namespace std;
/*
The Fractional Knapsack Problem is a classical optimization problem in which we aim to maximize the total value that can be carried in a bag of fixed capacity. Unlike the 0/1 Knapsack Problem, where an item must be taken entirely or left out, the fractional knapsack problem allows for partial selection of items

Problem Statement
We are given N items, each having a weight and a value, and a knapsack (bag) with a given capacity (W). Our goal is to maximize the total value that can be carried in the knapsack. We are allowed to take fractions of items, meaning we can pick only a part of an item if necessary.

Approach
Imagine a bag (knapsack) with a capacity of 70 kg, and several items available that are to be filled in this bag to maximize the value:

A simple approach might be to try different combinations of items, but a more efficient method exists using a greedy strategy. According to greedy approach, one should greedily pick the current best value without worrying about its effects in future.

Picking elements solely on the basis of weights and values may not lead to maximum knapsack value every time. But if we prioritize items based on their value-to-weight ratio, we get the maximum per weight value. So, the steps for greedy solution should be:

Compute the ratio for each item:

*/
bool myCmp(pair<int, int> a, pair<int, int> b) {
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2;
}

double fKnapS(int W, pair<int, int> arr[], int n) {
    sort(arr, arr + n, myCmp);
    double res = 0.0;

    for (int i = 0; i < n; i++) {
        if (arr[i].second <= W) {
            res += arr[i].first;
            W -= arr[i].second;
        }
        else
        {
            res += arr[i].first * ((double)W / arr[i].second);
            break;
        }
    }
    return res;
}

int main() {
    int W = 50;
    pair<int, int> arr[] = { {120, 30}, {100, 20}, {60, 10} };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << fKnapS(W, arr, n);
    return 0;
}