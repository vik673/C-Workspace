#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int, int> p1(10,20);
    pair<int, string> p2(10, "GeeksForGeeks");
    cout << p1.first << " " << p1.second << endl;
    cout << p1.first << " " << p1.second << endl;

    return 0;
}