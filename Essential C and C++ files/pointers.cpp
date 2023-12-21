#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    // int a=10;
    // int *p;
    // p=&a;
    // poiners to some variable
    // cout<<a<<endl;
    // printf("using pointer %d %d ",p , &a);

    //now pointers to an array
    // int A[5]={2,4,6,8,10};// it will declare inside the stack
    // int *p;
    // p=A;// you area not using & when you are giving array name to poniter
    // p=&A[0];//when you want & don't use &A it will give error
    // cout<<&A[3]<<endl;
    //access all these element using pointers
    // for(int i=0;i<5;i++)
    // cout<<p[i]<<endl ;
    // return 0; 
    //using a pointer  we can creat an array in heap means array inside heap
    // int *p;
    // p=new int[5]; //c++ lamnguage method
    // // p=(int*)malloc(5*sizeof(int)); // clanguage method 
    // p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
    // for(int i=0;i<5;i++)
    // cout<<p[i]<<endl ;
    // delete[]p;//c++
    // free(p)//c language
    // return 0;
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
     cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
}