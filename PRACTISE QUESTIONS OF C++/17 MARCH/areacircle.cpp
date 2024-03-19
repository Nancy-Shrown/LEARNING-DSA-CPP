
/*   Write a function that takes the radius of 
a circle as an argument and returns its area.   */

#include<iostream>
using namespace std;

void circleArea(float r)
{
    float pi = 3.14;
    cout<<"Area of Circle is "<<pi*r*r;
}
int main()
{
    float radius;
    cout<<"Enter radius of circle : ";
    cin>>radius;
    circleArea(radius);
    return 0;
}
