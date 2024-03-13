#include<iostream>
using namespace std;
 
int main()
{ 
    int i,n; 
    cout<<"Enter a number : ";
    cin>>n;
    for(i = 4; i <= n; i += 3)
    { 
        cout<<i<<" "; 
    } 
    return 0;
}