
/*
Problem: Given an array of N integers and a value K. The task is to return a list of integers from the given array whose value is less than K.

Examples:
Input: arr[] = {17, 10, 20, 13, 7, 9} , K = 15
Output: List = [10, 13, 7, 9]

Input: arr[] = {10, 5, 8, 9, 1, 2} , K = 7
Output: List = [5, 1, 2]

Solution: The idea is to use Vector in C++ STL, for creating the output list. We have used Vector to create the output list because Vectors in C++ are implemented using dynamic arrays and can be expanded at runtime.
Create a Vector to store the output.
Traverse the input array.
Push elements with values less than K in the Vector.
Return the Vector.
*/

// C++ Program to return a List of integer
// with values less than K

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Function to return a list of integers from 
// an array with values less than K
vector<int> fun(int arr[], int n, int k)
{   
    // Create a vector for the output list
    vector<int> V;
    
    // Traverse the array
    for(int i = 0; i < n; i++)
    {   
        // Store elements in the output list
        // whose value is less than K
        if (arr[i] < k) 
            V.push_back(arr[i]);
    }
    
    // return the output list
    return V;
}

// Driver Code
int main()
{
    // Input
    int arr[] = {17, 10, 20, 13, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    
    // Traverse and print elements of 
    // returned list
    for(auto x:fun(arr, n, k))
        cout<<x<<" ";
    
    return 0;
}