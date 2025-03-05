#include<iostream>

using namespace std;

template<typename T>

struct Pair
{
    T x,y;
    Pair(T i,T j){ x = i; y = j;}
    T getFirst();
    T getSecond() { return y;}
};

template<typename T>
T Pair<T>::getFirst()
{
    return x;
}

int main()
{
    Pair<int> p1(10,30);
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}