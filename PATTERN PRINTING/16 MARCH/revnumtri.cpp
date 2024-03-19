#include<iostream>
using namespace std;
/*print
         1234
         123
         12
         1
*/
int main()
{
   int i,j,n;
    cout<<"Enter number :";
    cin>>n;       
   for(i = n; i >= 1; --i)     
   {         
      for(j = 1;j<=i;++j)         
      {             
         cout << j;         
      }             
        cout<<endl;
    }
    return 0;
}