#include<stdio.h>
#include<iostream>
using namespace std;
 struct Rectangle
 {
    /* data */
    int lenght;
    int breadth;

 };
  int main ()
    {
 //  struct Rectangle r;
   // struct Rectangle r1={10,15};
  //  r.breadth=15;
  //  r.lenght=10;
   //cout<<r.lenght<<endl;
   //cout<<r.breadth<<endl;
   // Rectangle *p=&r;
   // cout<<p->lenght<<endl;
   // cout<<p->breadth<<endl;/**/
Rectangle *p;
//p=(struct Rectangle *) malloc(sizeof(struct Rectangle)); // use in  c lang;
p=new Rectangle; // use in c++ lang;
p->lenght=107554787;
p->breadth=10987;
 cout<<p->lenght<<endl;
  cout<<p->breadth<<endl;
    return 0;
    }
