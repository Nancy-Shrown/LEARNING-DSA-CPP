#include <iostream>
using namespace std;

int main()
 {
    int i,n,s=3;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1;i<=n;i++) 
    {
        cout <<s<<" ";
        s = s * 4;
    }
    return 0;
}