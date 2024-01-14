#include<stdio.h>
void TOH(int n,char A, char B ,char C)
{
    if (n>0)
    {
        TOH(n-1,A,C,B);
        printf("(%c,%c)\n",A,C);
        TOH(n-1,B,A,C);
    }
}
int main(){
    TOH(3,'a','b','c');
    return 0;
}