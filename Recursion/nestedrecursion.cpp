#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11));
}
int main(){
int r;
r=fun(30);
printf("%d\n",r);
return 0;
}