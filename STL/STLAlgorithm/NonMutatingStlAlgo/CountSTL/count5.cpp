#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s = "geeksforgeeks";
    cout << count(s.begin(), s.end(), 'e');
    return 0;
}