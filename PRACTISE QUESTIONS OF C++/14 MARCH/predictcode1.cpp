#include <iostream>
using namespace std;

int main()
{
    while ('a' < 'b') //comparing ASCII value
        cout << "malayalam is a palindrome" << endl;
    return 0;
}

/*output
   infinite loop of "malayalam is a palindrome"
 */