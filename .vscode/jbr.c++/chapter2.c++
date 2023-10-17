#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter size";
    cin>>n;
    int A[n];
    A[0]=3;
    for (int X:A){
        cout<<X<<endl;
    }
    return 0;
}