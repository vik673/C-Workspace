#include<iostream>

using namespace std;

enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thusday,
    Friday,
    Saturday
};

int main()
{
    Day today = Wednesday;
    // Output : today is day number: 3
    cout << "Today is day number: " << today << endl;
    return 0;
}