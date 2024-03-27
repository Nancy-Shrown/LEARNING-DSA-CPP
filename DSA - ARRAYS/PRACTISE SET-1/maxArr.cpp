/*Find the maximum value out of all the elementsin the array.*/
#include<iostream>
using namespace std;

int main()
{
    int array[]={25,12,99,45,95};
    int size=sizeof(array)/sizeof(array[0]);
    int max=array[0];

    for(int idx=0;idx<size;idx++)
    {
        if(array[idx]>max)
        {
            max=array[idx];
        }
    }
    cout<<"Maximum value = "<<max;
    return 0;
}