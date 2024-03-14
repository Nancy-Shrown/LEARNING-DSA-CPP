#include <iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    cout<<"Enter upper limt :";
    cin>>m;
    cout<<"Enter lower limt :";
    cin>>n;

    for (i = m; i <= n; i++)
    {
      for (j = 2; j <= i; j++) 
       { 
          if (i % j == 0)
          {
            break; 
          }
       }
      if
      (i==j) 
      {
        cout<<j<<endl; 
      } 
    }
    return 0;
}

 
 









