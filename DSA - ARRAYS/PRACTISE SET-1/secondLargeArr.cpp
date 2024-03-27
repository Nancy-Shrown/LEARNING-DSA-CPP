/*Find the second largest element in the given Array.*/
#include <iostream>
using namespace std;

int main() 
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = 0, secondLargest = -1;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[max])
            max = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[max]) 
        {
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;

    if (secondLargest == -1)
        cout << "Second largest didn't exit\n";
    else
        cout << "Second largest : " << arr[secondLargest];
    return 0;
}