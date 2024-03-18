#include<iostream>
using namespace std;

/*print
         *****
         *****
         *****
         *****
*/

int main()
{
    int i,j,m,n;
    cout<<"enter number of rows";
    cin>>m;
    cout<<"enter number of columns";
    cin>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}