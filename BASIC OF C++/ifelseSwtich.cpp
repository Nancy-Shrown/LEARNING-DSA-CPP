#include<iostream>
using namespace std;

int main()
{

    int age;
    cout<<"Enter age:";
    cin>> age;
    if(age<12)
    {
        cout<<"child"<<endl;
    }
    else if(age>18)
    {
        cout<<"Adult"<<endl;
    }
    else
    {
        cout<<"Teenager"<<endl;
    }

    //switch statement
    int num;
    cout<<"Select cousre number:";
    cin>>num;
    switch(num)
    {
        case 1:
        {
            cout<<"C++";
            break;
        }
        case 2:
        {
            cout<<"Java";
            break;
        }
        case 3:
        {
            cout<<"Python";
            break;
        }
        default :
        {
            cout<<"Web Development";
        }

    }
    



    return 0;

}