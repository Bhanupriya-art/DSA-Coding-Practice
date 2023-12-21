#include <iostream>
#include<stdio.h>
using namespace std;
int add(int a, int  b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int num1 = 10, num2 = 15,sum;
    sum=add(num1,num2);
    // printf("sum is %d",sum);//c
    cout<<"sum is"<<sum;//c++ lang
    return 0;
}