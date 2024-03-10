#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is "<< name<<endl;

    //swap two variables//
    int a,b;
    cout<<"a:";
    cin>> a;
    cout<<"b:";
    cin>> b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"Value of a : "<< a<<endl;
    cout<<"Value of b : "<<b<<endl; 
    return 0;
}
