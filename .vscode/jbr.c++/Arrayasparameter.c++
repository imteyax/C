#include<stdio.h>
#include<iostream>
using namespace std;
//void fun (int *A, int n)// we can use this [] also.
//{
   // cout<<sizeof(A)/sizeof(int)<<endl;
  // for(int i=0;i<5;i++)
   //cout<<A[i]<<endl;
  /*/ A[2]=5550;
   A[0]=2133; // this is change call by address.
   A[1]=535726;
   A[3]=5636;
   A[4]=42634;
}
int main (){
    int A[ ]={3,5,7,8,9};
    int n=5;
    fun(A,n);
   // cout<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A)
    cout<<x<<" ";
    return 0;
}*/
int *fun(int size)
{
    int *p;
    p=new int [size];// we can write here malloc also.
    for (int i=0; i<size; i++)
    p[i]=i+1;
    return p;
}
int main (){
    int *ptr,size=100;
    ptr=fun(size);
    for (int i=0; i<size;i++)
    cout<<ptr[i]<<endl;
return 0;
}