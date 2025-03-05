#include<iostream>
#include<map>
#include<string>


using namespace std;

int main()
{
    std::map<std::string, int> population =
    {
        {"New yor", 8419000},
        {"Los Angeles", 3971000},
        {"chicago",2716000}
    };

    //without auto 
    std::map<std::string, int>::iterator it = population.begin();

    //with auto
    auto itAuto = population.begin();

    for(; itAuto != population.end(); ++itAuto)
    {
        std::cout << itAuto->first << ": " << itAuto->second << std::endl;
    }

    return 0;
}
