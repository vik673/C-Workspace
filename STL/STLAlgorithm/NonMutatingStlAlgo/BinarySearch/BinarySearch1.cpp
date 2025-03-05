#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Point { int x, y;
    Point(int i, int j) { x = i; y = j; }
};

bool myCmp(Point p1, Point p2) { return (p1.x < p2.x); }

int main()
{
    vector<Point> v = {{10, 5}, {2, 100}, {50, 90}};
    sort(v.begin(), v.end(), myCmp);
    Point p(2, 100);
    if (binary_search(v.begin(), v.end(), p, myCmp))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}