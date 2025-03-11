#include<iostream>
#include<vector>

// Complex type declaration
// when working with complex types, such as iterator or 
// template types, auto can make the code more readable.


int main()
{
    std::vector<int> numbers = {1,2,3,4,5};

    // without auto
    std::vector<int>::iterator it = numbers.begin();

    // with auto
    auto itAuto = numbers.begin();

    for(; itAuto != numbers.end(); ++itAuto)
    {
        std::cout << *itAuto << " ";
    }

    return 0;
}