#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;

    cout<<"Sum = "<<(c=a+b)<<endl;
    cout<<"Subtract = "<<(c=a-b)<<endl;
    cout<<"Multiply = "<<(c=a*b)<<endl;
    cout<<"Divide = "<<(c=a/b)<<endl;

    return 0;
}