#include <iostream>
using namespace std;

int main()
 {
    int m,n,i,j;
    Scanner prime= new Scanner(System.in); 
 m= prime.nextInt(); 
 n= prime.nextInt();
  for (i = m; i <= n; i++)
  { for (j = 2; j <= i; j++) 
  { if (i % j == 0)
   { break; } } if
    (i==j) 
    { System.out.println(j); } } 

    while (j <= 10) {
        cout << j << endl;
        j = j + 1;
    }
    return 0;
}

 
 









