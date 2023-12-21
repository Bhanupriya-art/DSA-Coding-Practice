#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    //size of an array as input
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;

    //initialising an array
    int A[n]={2,3,4,5,6,5};
    // A[0]=1;
    // A[1]=2;
    // A[2]=3;

    //displaying an array
    // for(int i=0 ; i<10; i++)
    // {
    //     cout<<A[i]<<endl;
    // }
//other method  of accessing all these  element in an array
for (int x:A)
{
    cout <<x<<endl;
}
    // cout<<sizeof(A)<<endl;
    // cout<<A[8]<<endl;
    // printf("%d\n",A[2]);
    return 0;
}
