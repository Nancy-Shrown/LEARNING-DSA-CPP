#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for (i = 1; i <= 100; i++)
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

 
 









