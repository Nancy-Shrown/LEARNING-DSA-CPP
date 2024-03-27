/*
Calculate the sum of all the elements in the given array.
*/
#include<iostream>
using namespace std;

int main()
{
    int array[]= {56,25,26,19,59};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;

    for(int idx=0;idx<size;idx++)
    {
        sum= sum+array[idx];
    }
    cout<<"Sum of elements="<<sum;
    return 0;
}