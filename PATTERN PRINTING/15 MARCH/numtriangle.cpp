#include<iostream>
using namespace std;
/*print
         1
         12
         123
         1234
*/
int main()
{
   int i,j,n;
    cout<<"Enter number :";
    cin>>n;       
   for(i = 1;i <=n;i++)     
   {         
      for(j = 1;j<=i;j++)         
      {             
         cout << j;         
      }             
        cout<<endl;
    }
    return 0;
}