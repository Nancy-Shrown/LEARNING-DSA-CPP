// program to find the sum of two numbers using pointers.
#include <iostream>
using namespace std;

void add(int *p1, int *p2)
{
    int sum = *p1 + *p2;
    cout << "Sum of " << *p1 <<" and "<< *p2 << " is " <<sum<<endl;
}
int main()
{
    int a, b;
    cout << "Enter value of first number :";
    cin >> a;
    cout << "Enter value of second number :";
    cin >> b;
    add(&a, &b);
    return 0;
}