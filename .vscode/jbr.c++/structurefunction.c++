#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;

};
 int area (struct  Rectangle r);
{
 return r.length*r.breadth;   
 
}
 
  int parimeter (struct Rectangle r);
  {
    int p;
    p=2*(r.length*r.breadth);
    return p;

  }
  int main ()
  {
    Rectangle r={0,0};
    printf("Enetr  length and breadth");
    cin>>r.length>>r.breadth;
    int a=area(r);
    int pari=parimeter(r);
     printf("Area=%d\nperimeter=%d\n",a,pari);
     return 0;
  }