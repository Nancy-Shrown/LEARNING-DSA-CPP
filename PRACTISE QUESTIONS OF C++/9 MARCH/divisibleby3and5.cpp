#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "Number is divsible by both 3 and 5" << endl;
    }
    else
    {
        cout << "Number is not divsible by neither 3 nor 5" << endl;
    }
    return 0;
}