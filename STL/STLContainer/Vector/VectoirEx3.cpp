/*
Problem: Given two arrays roll_no[] and marks[] of the same size representing the roll numbers and marks scored by the students respectively. The task is to sort this data according to the increasing order of marks. That is, print the roll numbers along with the marks scored in the order of increasing marks.

Examples:
Input: roll_no[] = {17, 20, 15, 1, 5}, {80, 75, 93, 78, 84}
Output:
Roll No   Marks
20      75
1      78
17      80
5      84
15      93

Solution: Since for every student, we have information about both roll_no and marks.
So, we need to create a vector of pairs to store this detail. A pair will store detail 
about the roll number and marks of a single student and the vector will store a list of 
such pairs for every student.

The second thing is to sort this vector according to the second element of pairs, where second 
element is the marks. We can sort a vector of pairs according to the second element using a comparator 
function. We will learn this in detail in upcoming tracks.
*/

// Program to sort students data
// according to marks

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Comparator function to sort according to
// second element
bool sortbysec(const pair<int, int>& p1,
               const pair<int, int> p2)
{
    return p1.second < p2.second;
}

// Function to sort students data
// according to marks
void displaySorted(int roll_no[], int marks[], int n)
{
    // Create a vector of pair to
    // store students data
    vector<pair<int, int> > vp;

    // Traverse the arrays and store elements in vector
    for (int i = 0; i < n; i++) {
        vp.push_back(make_pair(roll_no[i], marks[i]));
    }

    // Sort the vector according to second element
    // using Comparator function
    sort(vp.begin(), vp.end(), sortbysec);

    // Print the sorted vector
    cout << "Roll No"
         << "   "
         << "Marks\n";
    for (int i = 0; i < vp.size(); i++) {
        cout << vp[i].first << "\t  " << vp[i].second << "\n";
    }
}

// Driver Code
int main()
{
    // Input
    int roll_no[] = { 17, 20, 15, 1, 5 };
    int marks[] = { 80, 75, 93, 78, 84 };
    int n = sizeof(roll_no) / sizeof(roll_no[0]);

    displaySorted(roll_no, marks, n);

    return 0;
}