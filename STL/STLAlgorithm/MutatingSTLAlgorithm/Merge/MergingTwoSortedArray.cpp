#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[] = {10, 20, 30};  
    int arr2[] = {5, 15, 40, 80};  
    int arr3[7];
    
    merge(arr1, arr1 + 3, arr2, arr2 + 4, arr3);

    for (int x : arr3)
        cout << x << " ";
    return 0;
}
/*
Inernal time complexity:-
The merge() function works by traversing both of the sequences simultaneously, 
picking the smaller element and adding it to the third sequence. 
It continues this process until all elements from both input ranges have been copied.
This leads to the time complexity of: O(m + n),
where m and n are the number of elements in two sequences.
*/