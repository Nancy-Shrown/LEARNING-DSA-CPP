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
    int j,n;
    cout<<"Enter number :";
    cin>>n;
    for(char i=1;i<=n;i++)
    {
        char ch ='A';
        for(j=1;j<=n;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}