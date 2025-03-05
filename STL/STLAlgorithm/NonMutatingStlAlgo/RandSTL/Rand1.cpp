
/*
rand() function is defined inside <cstdlib> header fille.

rand()

It does not take any arguments and returns a pseudo-random integer between 0 and RAND_MAX. The minimum value of RAND_MAX as per the standard is 32767.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
        cout << rand() << " ";
    return 0;
}