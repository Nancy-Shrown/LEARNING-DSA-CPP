#include<iostream>
using namespace std;

int main()
{
     int i, j, n;

    cout<<"Enter number: ";
    cin>>n
    for(i=1; i<=(N * 2 - 1); i++)
    {
        if(i == N)
        {
            for(j=1; j<=(N * 2 - 1); j++)
            {
                cout<<"+";
            }
        }
        else
        {
            for(j=1; j<=N-1; j++)
            {
                cout<<" ";
            }
            cout<<"+";
        }

        cout<<endl;
    }
    return 0; 
}