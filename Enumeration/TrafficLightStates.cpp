#include<iostream>

using namespace std;

enum class TrafficLight
{
    red,
    Yellow,
    Green
};

int main()
{
    TrafficLight light = TrafficLight::Green;

    if(light==TrafficLight::Green)
    {
        cout << "Go!" << endl;
    }
    else if(light == TrafficLight::Yellow)
    {
        cout<<"Slow down1"<< endl;
    }
    else{
        cout << "Stop!" <<endl;
    }
    
    return 0;
}