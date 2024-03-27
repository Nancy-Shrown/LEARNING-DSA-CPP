/*Calculate the product of all the elements in the given array.*/
#include<iostream>
using namespace std;

int main()
{
    int array[]= {6,4,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    int product=0;

    for(int idx=0;idx<size;idx++)
    {
        product= product*array[idx];
    }
    cout<<"Product of elements="<<sum;
    return 0;
}