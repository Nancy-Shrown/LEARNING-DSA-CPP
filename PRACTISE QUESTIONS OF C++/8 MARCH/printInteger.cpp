#include<iostream>
using namespace std;

int main()
{ 
    int N;
    cout<<"Enter a number:";
    cin>> N;
   if (N < 0) 
	{ 
		N = (-1) * N; 
	} 
	cout << " " << N; 

	return 0; 

}