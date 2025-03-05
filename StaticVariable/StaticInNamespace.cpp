#include<iostream>

namespace MynaNamespace{
    static int x =10;
     static void display(){
        std::cout << "x = "<< x << std::endl;
     }
}

int main()
{
    MynaNamespace::display();
    return 0;
}