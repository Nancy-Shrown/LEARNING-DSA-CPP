#include<iostream>
using namespace std;
/*Print pattern
 1
 1 2
 1 2 3
 1 2 3 4   
 */
int main()
{
    int n;
    cout<<"Enter number of rows :";
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        int count= 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}