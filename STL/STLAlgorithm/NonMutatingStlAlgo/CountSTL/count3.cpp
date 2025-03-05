#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {10, 5, 10, 7, 10, 20};
    cout << count(arr, arr + 6, 10);
    return 0;
}