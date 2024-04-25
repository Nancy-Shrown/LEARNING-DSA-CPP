#include <iostream>
using namespace std;
/*PRINT PATTERN
    1
    AB
    123
    ABCD
    12345
*/
int main()
{
    int i,j,n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
            cout<<ch;
            ch++;
            }
            else
            {
            cout<<j;
            }
        }
        cout<<endl;
    }
}