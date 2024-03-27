/*Find the minimum value out of all the elements in the array.*/
#include<iostream>
using namespace std;

int main()
{
    int array[]={25,12,99,45,95};
    int size=sizeof(array)/sizeof(array[0]);
    int min=array[0];

    for(int idx=0;idx<size;idx++)
    {
        if(array[idx]<min)
        {
            min=array[idx];
        }
    }
    cout<<"Minimum value = "<<min;
    return 0;
}