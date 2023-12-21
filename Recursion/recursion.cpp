#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//example of tail recursion here shown how the function calls are piling up on a stack
// void fun(int n)
// {
//     if(n>0){
//         printf("%d",n);
//         fun(n-1);
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
//     return 0;
// }


// modify the same function into a head recursion 
void fun(int n)
{
    if(n>0){
     fun(n-1);
        printf("%d",n);
    }
}
int main(){
    int x=3;
    fun(x);
    return 0;
}

// we have seen calling phase as well as returning phase
