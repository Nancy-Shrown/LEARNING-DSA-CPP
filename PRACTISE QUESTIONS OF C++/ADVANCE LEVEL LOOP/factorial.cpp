#include<iostream>
using namespace std;
 
int main()
{ 
    int n,fac=1; 
    cout<<"Enter any number : ";
    cin>>n;
    while(n>=1)
    {
        fac = fac * n;
        n= n-1;
    } 
    cout<<"Factorial : " <<fac; 
    return 0;
}