#include<iostream>
using namespace std;

int main()
{
    float l,b,area,perimeter;
    cout<<"Enter length: ";
    cin>> l;
    cout<<"Enter breadth: ";
    cin>> b;

    area=l*b;
    perimeter=2*(l+b);
    
    if (area > perimeter)
    {
        cout << "Area is larger than perimeter" << endl;
    }
    else if (area < perimeter )
    {
        cout << "Perimeter is larger than Area" << endl;
    }
    else
    {
        cout << "Area is equals to perimeter of rectangle" << endl;
    }
    return 0;

}