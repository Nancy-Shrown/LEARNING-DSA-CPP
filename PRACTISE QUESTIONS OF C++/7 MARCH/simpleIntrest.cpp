#include<iostream>
using namespace std;

int main()
{
    float p,r,t,SI;

    cout << "Principal = ";
    cin>> p;
    cout << "Rate = " ;
    cin>> r;
    cout << "Time = " ;
    cin>> t;

	SI = (p* r* t) / 100;
	cout << "Simple Interest = " << SI;

	return 0;
}
