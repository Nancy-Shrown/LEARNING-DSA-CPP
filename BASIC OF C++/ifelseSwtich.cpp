#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age:";
    cin>> age;
    if(age<12)
    cout<<"child";
    elseif(12<age<18)
    cout<<"Teenager";
    else(age>18)
    cout<<"Adult";
}