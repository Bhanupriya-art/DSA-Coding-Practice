#include<iostream>
using namespace std;
int main()
{
    int a= 10;
    int &r=a;
    int b=30;
    r=b;
    cout<<a<<endl<<r<<endl;
}