#include<iostream>
using namespace std;
int main(){
    int *p,*q;
    p=new int[5];
    q=new int[10];
    int i;
    p[0]=3;p[1]=11;p[2]=2;p[3]=7;p[4]=9;p[5]=3 ; //p[6]=11;p[7]=2;p[8]=7;p[9]=9; //compiler error in my vs

    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    delete[]p;
    p=q;
    q=NULL;

    for(i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
}
