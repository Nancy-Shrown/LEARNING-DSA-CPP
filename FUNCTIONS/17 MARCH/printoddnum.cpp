/*  Given two numbers a and b, write a
function to print all odd numbers between them.   */

#include <iostream>
using namespace std;

void oddNum(int x,int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }
    return ;
}
int main()
{
    int a, b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    oddNum(a,b);
    return 0;
}