#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
//call by value
// void fun(struct Rectangle r)//in this line r is not same with the below r meand main fun r
// {
//     r.length=20;
//     cout<<"Length"<<r.length<<endl<<"breadth"<<r.breadth<<endl;
// }
// int main()
// {
//     struct Rectangle r={10,5};
//     fun(r);
//     printf("length %d \nBreadth %d\n",r.length,r.breadth);
// return 0;
// }

//call by address it will print 20 and 5 in both
// void fun(struct Rectangle *p)//in this line r is not same with the below r meand main fun r
// {
// p->length=20;
//     cout<<"Length"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
// }
// int main()
// {
//     struct Rectangle r={10,5};
//     fun(&r);
//     printf("length %d \nBreadth %d\n",r.length,r.breadth);
// return 0;
//}


//create a variable of type structure on heap inside a function and return its address
struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle; //c++ syntax
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));//c language
    p->length=15;
    p->breadth=7;
    return p;

}
int main(){
    struct Rectangle*ptr=fun();
    cout<<"Length"<<ptr->length<<endl<<"breadth"<<ptr->breadth<<endl;
    return 0;
}
