#include<iostream>
using namespace std;

int main()
{
   float s1,s2,s3,s4,s5,total,percentage;


   cout<<"Enter marks of English :"<<endl;
   cin>>s1;
   cout<<"Enter marks of Hindi :"<<endl;
   cin>>s2;
   cout<<"Enter marks of Maths :"<<endl;
   cin>>s3;
   cout<<"Enter marks of IT :" <<endl;
   cin>>s4;
   cout<<"Enter marks of Science :"<<endl;
   cin>>s5;

   total=s1+s2+s3+s4+s5;
   percentage= (total/5)*100;
   cout<<"percentage :"<< percentage<<"%";
   
    return 0;
}