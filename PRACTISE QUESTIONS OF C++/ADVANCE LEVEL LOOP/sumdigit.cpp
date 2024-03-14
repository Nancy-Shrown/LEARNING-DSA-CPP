#include<iostream>
using namespace std;

int main()
{
  int i, n, sum = 0;
  cout <<"Print sum of numbers till : ";
  cin >> n;

  for(i = 1; i <= n; i++) 
  {  
    sum += i; 
  }

  cout<< "Sum of numbers from 1 to " << n << " is : " << sum;

    return 0;
}
