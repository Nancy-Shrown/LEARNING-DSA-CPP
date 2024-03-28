/*Count the number of elements in given array greater than a given number x.*/
#include <iostream>
using namespace std;

int main() 
{
  int arr[]={1,4,5,6,3,69,47};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  int x;
  cout<<"Enter value of x :";
  cin>>x;
  
 int count=0;
  
  for(int i=0;i<n;i++)
  {  
    if(x<arr[i])
    {
      count++;
    }  
  }
  cout<<"Numbers greater than x :"<<count;
  return 0;
}