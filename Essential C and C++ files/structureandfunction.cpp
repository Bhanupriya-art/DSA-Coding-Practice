#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
void initialise(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;

}
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
int perimeter(Rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);
    return p;
}
int main(){
    Rectangle r={0,0};
    int l,b;
    printf("Enter Length and Breadth ");
    cin>>l>>b;
    initialise(&r, l, b);
    int a=area(r);
    int peri=perimeter(r);
    printf("Area=%d\nPerimeter=%d\n",a , peri);
    return 0;
}