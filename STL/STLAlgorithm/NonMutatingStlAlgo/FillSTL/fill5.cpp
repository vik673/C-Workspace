#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s = "geeks";
    fill(s.begin(), s.end(), 'g');
    cout << s;
    return 0;
}