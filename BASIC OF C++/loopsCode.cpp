#include <iostream>
using namespace std;
 
int main()
{
    //For Loop
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
        cout << "Sum of first "<<n<<" number is: "<<sum<<endl;

    //While Loop
    int num;
    cout<<"Enter the Number: ";
    cin >> num;
    int total = 0;
    int j=1;
    while (j<=num) 
    {
        total =total+j;
        j++;
    }
    cout<<"Total of first "<<num<<" number is: "<<total<<endl;

    //Do-While Loop
    int k = 8;
    do
    {
        cout<<k;
        k++;
    }while(k<5);
}