#include<iostream>
#include<vector>

using namespace std;

/*
next() function returns the iterator that is a specified number of positions ahead of the given
 iterator or if we do not provide a number then it returns one next position to the iterator.

prev() function returns the iterator that is a specified number of positions behind the given iterator
or if we do not provide a number then it returns one previous position to the iterator.

*/
int main()
{
    vector<int> v = {10, 20,30,40,50};
    vector<int>::iterator i = v.begin();


    i= next(i);
    cout << (*i) <<" ";

    i = next(i,2);
    cout << (*i) <<" ";

    i = prev(i);
    cout << (*i) <<" ";

    return 0;
}