 
/* Print the odd Number Triangle pattern

1 
1 3 
1 3 5 
1 3 5 7
           */

#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number :";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
       int number = 1;
        for (j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number+=2;
        }
        cout<<endl;
    }
    return 0;
}