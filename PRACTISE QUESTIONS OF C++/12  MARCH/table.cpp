#include <iostream>
using namespace std;

int main()
{
    int n,i,table;
    cout<<"Enter Number: ";
    cin>>n;
    for (i=1;i<=10;i++)
    {
        table = n*i;
        cout<<n<<" * "<<i<<" = "<<table<<endl;
    }
}