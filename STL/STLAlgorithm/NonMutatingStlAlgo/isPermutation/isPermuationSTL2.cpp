#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int v1[] = {30, 20, 10};
    int v2[] = {20, 10, 30};

    if (is_permutation(v1, v1+3, v2))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}