#include <iostream>
#include<stdio.h>
using namespace std;
// call by value will change  teh value of formal not for the actual 
// int add(int a, int  b)//normal variable means formal
// {
//     a++;
//     cout<<a;
//     return 0;
// }
// int main(){
//     int num1 = 10, num2 = 15,sum;
//     sum=add(num1,num2); // actual variable
//     cout<<endl<<num1;
//     return 0;
// }


//  call by addess use * will change actual  than that taken in the formal mreans first actual changre than mv to formal
// void swap(int *x, int *y)//formal variable
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int num1=10,num2=15;
//     swap(&num1,&num2); // actual variable
//     cout<<"First Number "<<num1<<endl;
//     cout<<"Second Number "<<num2<<endl;
//     return 0;
// }

//call by reference use & will modify in formal than actual  modify 
void swap(int &x, int &y)//formal variable
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int num1=10,num2=15;
    swap(num1,num2); // actual variable
    cout<<"First Number "<<num1<<endl;
    cout<<"Second Number "<<num2<<endl;
    return 0;
}