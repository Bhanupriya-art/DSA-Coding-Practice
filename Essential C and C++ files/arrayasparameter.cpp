#include<iostream>
using namespace std;
//array as a parameter to a function
// void fun(int A[ ],int n){ // using  [] instead of *  sometime it will give compiler error so we have to use *
//     for(int i=0;i<n;i++)
//     cout<<A[i]<<endl;
// }
// int main(){
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     fun(A,n);
//     for (int x:A)
//     cout<<x<<" ";
//     return 0;
// }


// void fun(int *A,int n)  // using * instead of []  called by address means if we change in the formal it will change in the actual array
// {
//     // for(int i=0;i<n;i++)
//     // cout<<A[i]<<endl;
//     A[0]=15; // it will change first element to 15
// }
// int main(){
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     fun(A,n);
//     for (int x:A)
//     cout<<x<<" ";
//     return 0;
// }

// creating an array inside a function and returning ita address........ function returning an array
int * fun(int size) // use * square bracket will not support by latest compiler
{
    int *p;
    p=new int [size];// create an array using new fun
    for(int i=0;i<size;i++)
    p[i]=i+1; // initialise the array
    return p;
    }
int main(){
    int *ptr,sz=5;
    ptr=fun(sz);
    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;
    return 0;
}