#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    Rectangle r={10,5}; // c++ program inside c++ rm struct it is valid but in c it is valid 
    cout<<r.length<<endl;//for normal  use . operator
    cout<<r.breadth<<endl;
    Rectangle *p=&r;// if pointer than use ->
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}
//rectangle structure in heap
// struct Rectangle{
//     int length;
//     int breadth;
// };
// int main(){
//     struct Rectangle *p;
//     // p=new Rectangle;//c++code
//     p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
//     p->length=15;
//     p->breadth=7;

//     cout<<p->length<<endl;
//   cout<<p->breadth<<endl;
// return 0;

// }