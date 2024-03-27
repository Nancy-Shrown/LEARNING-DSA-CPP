/*
Find the element x in the array . Take array and x as input.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    cout<<"Elements of array :"<<endl;
    for (int idx = 0; idx < 6; idx++)
    {
        cin>>arr[idx];
    }

    int x;
    cout << "Enter value of element x :";
    cin >>x;

    int result = 0;
    for (int idx = 0; idx < 6; idx++)
    {
        if (arr[idx] == x)
        {
            cout << "Element" <<x << "is present at index :" <<idx<<endl;
        }
        else
        continue;
    }
    return 0;
}