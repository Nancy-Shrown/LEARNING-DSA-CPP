// program to find the product of two numbers using pointers.
#include <iostream>
using namespace std;

void product(int *p1, int *p2)
{
    int mul = *p1 * *p2;
    cout << "Product of " << *p1 <<" and "<< *p2 << " is " << mul<<endl;
}
int main()
{
    int a, b;
    cout << "Enter value of first number :";
    cin >> a;
    cout << "Enter value of second number :";
    cin >> b;
    product(&a,&b);
    return 0;
}