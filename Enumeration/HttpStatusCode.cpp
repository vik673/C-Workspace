#include<iostream>

using namespace std;

// You can explicity assign value to enum constants.

enum class HttpStatus
{
    Ok = 200,
    BadRequest = 400,
    Unauthorized = 410,
    NotFound = 404,
    InternalServerError = 500
};

int main()
{
    HttpStatus status = HttpStatus::NotFound;

    if(status == HttpStatus::NotFound)
    {
        cout << "Error: page not found!" << endl;
    }

    return 0;
}