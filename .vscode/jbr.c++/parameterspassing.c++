#include<stdio.h>
#include<iostream>
using namespace std;
 /*void swap (int x, int y) // call by value
 {
    int temp;
    temp =x;
    x=y;
    y=temp;

 }
 int main ()
 {
    int  a,b;
    a=10;
    b=20;
    swap(a,b);
   // printf(" %d,%d",a,b);
  cout<< "Swapped a, b: " << a << ", " << b << endl;
    return 0;
 }*/
 /* void swap (int*x, int*y) // call by address is using pointer.
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main ()
{
int a,b;
a=10;
b=20;
swap(&a,&b);
cout << "Swapped a, b: " << a << ", " << b << endl;
return 0;

}*/
void swap (int &x,int &y) // call by refrence // in call by refrence we have to add only & in formal parameters.And call by refrenc is use in c++ onlt.
{
   int temp;
   temp=x;
   x=y;
   y=temp;

}
int main ()
{
   int a,b;
   a=10;
   b=20;
   swap(a,b);
   cout<< "swapped a,b:"<<a<<"swapped a,b:"<<b<<endl;
   return 0;
}