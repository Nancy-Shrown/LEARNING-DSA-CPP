#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number:";
    cin>> num;

    if(num%5==0)
    {
        cout<<"divisble by 5"<<endl;
    }
    else
    {
        cout<<"not divisble by 5"<<endl;
    }
    return 0;
}