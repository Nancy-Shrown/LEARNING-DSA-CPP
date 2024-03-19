#include<iostream>
using namespace std;
/*print
         ****
         ***
         **
         *
*/
int main()
{
    int i,j,n;
    cout<<"Enter number :";
    cin>>n;
    for (i = n; i >= 1; --i) 
    {
		for ( j = 1; j <= i; ++j) 
        {
			cout << "* ";
		}
		cout << endl;
    }
    return 0;
}