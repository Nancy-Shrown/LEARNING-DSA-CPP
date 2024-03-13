#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter number: ";
    cin>>n;
    for (i = 100; i >= n; i -= 3)
    {
       cout<<i<<" ";
    }
   return 0;
}