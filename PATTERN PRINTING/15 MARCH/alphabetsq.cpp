#include<iostream>
using namespace std;

/*print
         ABCD
         ABCD
         ABCD
         ABCD
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
            cout<<"ABCD";
        }
        cout<<endl;
    }
    return 0;
}