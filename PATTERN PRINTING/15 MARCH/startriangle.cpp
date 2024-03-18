#include<iostream>
using namespace std;
/*print
         *
         **
         ***
         ****
*/
int main()
{
    int i,j,n;
    cout<<"Enter number :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}