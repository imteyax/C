#include<stdio.h>
#include<iostream>
using namespace std;
int add (int a, int b)
{
    int c;
    c=a+b;
    return (c);

}
int main ()
{
    int num1=10,num2=15,sum;
    //sum= num1+num2;
   // int x,y,z;
    //x=10;
 //   y=14;
   // z=add(x,y);
   sum=add(num1,num2); // function call 
   cout<<"sum is"<<sum;
   return 0;

}