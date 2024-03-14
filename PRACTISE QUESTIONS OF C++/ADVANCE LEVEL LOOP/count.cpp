#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    int digit = 0;
    
    while(num>0)
    {
        digit++;
        num = num/10;
    }
    cout<<"No. of digits = "<< digit;

}
