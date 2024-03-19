#include <iostream>
using namespace std;
/*
PRINT FLOYD TRIANGLE PATTERN
1
2 3
4 5 6
7 8 9 10
*/

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
