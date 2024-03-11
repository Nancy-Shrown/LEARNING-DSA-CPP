#include<iostream>
using namespace std;

int main()
{
	int side1, side2, side3;
	
	cout <<"Enter Sides of a Triangle =  ";
    cin >> side1 >> side2 >> side3;
	
	if(side1 == side2 && side2 == side3)
  	{
  		cout << "This is an Equilateral Triangle";
  	}
  	else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
  		cout << "This is an Isosceles Triangle";
	}
  	else
    	cout << "This is an Scalene Triangle";
		
 	return 0;
}
