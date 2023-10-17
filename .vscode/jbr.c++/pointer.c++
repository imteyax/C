#include <stdio.h>
#include <iostream>
using namespace std;
//nt main()
//{
    /*int a=10;
    int *p;
    p=&a;
    cout<<a<<endl;
    printf("using pointer %d %d",*p,&a);
    int A[5]={1, 2, 3, 3, 6};
    int *P;
   p=A;
    for (int i = 0; i < 5; i++)
        cout <<p[i] << endl;*/
        int *p;
      //using in c lang // p=(int *) malloc (5* sizeof (int));
     /*/ p=new int[5];//using c++ lang
        p[0]=123; p[1]=67; p[2]=98; p[367];
        p[4]=98;
 for (int i=0; i<5; i++)
 cout<<p[i]<<endl;
 delete[] p;// use in c ++
 free(p);// usse in c*/
 struct Rectangle
 {
    /* data */
    int lenght;
    int breadth;

 };
 int main ()
{
    int *p1;
    int *p2;
    int *p3;
    int *p4;
    struct Rectangle  *p5;
    cout<<sizeof (p1)<<endl;
     cout<<sizeof (p)<<endl;

 cout<<sizeof (p2)<<endl;

 cout<<sizeof (p3)<<endl;

 cout<<sizeof (p4)<<endl;
  cout<<sizeof (p5)<<endl;
  return 0;



}
    //return 0;
//}