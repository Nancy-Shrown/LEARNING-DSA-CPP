/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/
#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {78,20,98,30,56};
    int rollNo = marks[0];
    for (int idx = 0; idx < 5; idx++)
    {
        if (marks[idx] < 35)
        {
            rollNo = idx; 
        } 
    }  
    cout<<"Roll number of student having marks less than 35 is :"<<rollNo<<endl;    
    return 0;
}