#include <iostream>
using namespace std;

int main()
{
   
    int n,num = 0;
    cout << "Enter a positive integer :  ";
    cin >> n; 
    while (n != 0)
    {
        n= n/10;
        num++; 
    }

    cout <<"Number of digits in the entered number is " << num;

    return 0;
}