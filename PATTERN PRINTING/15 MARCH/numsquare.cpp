#include<iostream>
using namespace std;

/*print
         1234
         1234
         1234
         1234
*/

int main()
{
    int i,j,n;
    cout<<"Enter number :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            cout<<"1234";
        }
        cout<<endl;
    }
    return 0;
}