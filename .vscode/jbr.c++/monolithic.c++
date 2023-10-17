#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
    int length=0,breadth=0;
    printf("Enter Lenght and Breadth");
    cin>>length>>breadth;
    int area=length*breadth;
    int peri=2*(length+breadth);;
    printf("Area=%d\nperimeter=%d\n",area,peri);
    return 0;



}