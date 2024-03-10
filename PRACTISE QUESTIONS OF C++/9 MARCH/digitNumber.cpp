#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num >= 99 && num <= 1000)
    {
        cout << "Yes, it is a three digit number"<< endl;
    }
    else
    {
        cout << "No, it is not a three digit number" << endl;
    }

    return 0;
}