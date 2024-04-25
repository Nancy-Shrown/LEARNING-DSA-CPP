#include<iostream>
using namespace std;

int main()
{
    int array[]={25,12,99,45,89};
    int size=sizeof(array)/sizeof(array[0]);

    int first=array[0],second=array[0];

    for(int idx=0;idx<size;idx++)
    {
        if(array[idx]>first)
        {
            first=array[idx];
        }
    }
     for(int idx=0;idx<size;idx++)
    {
        if(second<array[idx])
        {
            if(array[idx]!=first)
            {
                second=array[idx];
            }
        }
    }
    cout<<"SECOND LARGEST ELEMENT = "<<second;
    return 0;
}