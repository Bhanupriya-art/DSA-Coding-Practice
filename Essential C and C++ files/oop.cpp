#include<iostream>
#include<stdio.h>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
void initialise(int l,int b)
{
    length=l;
    breadth=b;

}
int area()
{
    return length*breadth;
}
int perimeter()
{
    int p;
    p=2*(length+breadth);
    return p;
}
};
int main()
{
    Rectangle r;
    int l,b;
    printf("Enter Length and Breadth ");
    cin>>l>>b;
    r.initialise(l, b);
    int a=r.area();
    int peri=r.perimeter();
    printf("Area=%d\nPerimeter=%d\n",a , peri);
    return 0;
}
//objects -> writing the data member and all the member function together in a single place can define class and we can creat object so these are object object will have its properties and methos wring member function