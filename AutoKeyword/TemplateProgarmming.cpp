#include<iostream>>

using namespace std;

// In tempate programming, auto can simplify code by avoiding the need to explicitly speify types.

template<typename T, typename U>

auto add(T a, U b) -> decltype(a+b){
    return a+b;
}

int main()
{
    auto result1 = add(3,4.5);
    auto result2 = add(2.5,3);

    std::cout << "Result 1: " << result1 << std::endl; 
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}