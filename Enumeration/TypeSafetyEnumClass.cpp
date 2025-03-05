#include<iostream>

using namespace std;

enum class Color
{
    Red,
    Green,
    Blue
};

int main()
{
    Color color = Color::Red;

    // Uncommenting the following line will cause a compilation error
    // int coloValue = color; 
    // Error : No implicit conversion from Color to int

    int colorValue = static_cast<int>(color);
    // Explicit conversion
    cout << "Color value: " << colorValue << endl;

    return 0; 
}