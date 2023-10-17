#include<stdio.h>
#include<iostream>
using namespace std;
 struct  Rectangle 
 {
    
    int lenght;
    int breadth;

 };
 //void fun(struct Rectangle r)// call by value.
  /*void fun(struct Rectangle *p)// call by address.
 {
   // r.lenght=20;
    // both are call by value.
    //r.breadth=30;
    p->lenght=30;
    p->breadth=10;
    //cout<<r.lenght<<endl<<r.breadth<<endl;// calll by value
  cout<<"Lenght"<<p->lenght<<endl<<"Breadth"<<p->breadth<<endl;// call by address.
 }
  int main (){
struct Rectangle r={10,5};
fun(&r);// call by adderss.
//fun (r); call by value.
printf("lenght %d\n breadth%d\n",r.lenght,r.breadth);
return 0;

  }*/
  struct  Rectangle *fun()
  {
    struct Rectangle *p;
    p=new Rectangle; // use in c++ lang.
   // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); // use in xc lang.
p->lenght=154;
p->breadth=654;
return p;

  }
  int main (){
    struct Rectangle *ptr=fun();
    cout<<"Lenght"<<ptr->lenght<<endl<<"Breadth"<<ptr->breadth<<endl;
return 0;
  }
  
  
 