//factorial program  
#include<iostream>
using namespace std;
int main ()
{
   int i,fact=1,n; 
   cout<<"enter the number:  ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   cout<<"factorial of given number is :- "<<n<<"is"<<fact;
   return 0;
}