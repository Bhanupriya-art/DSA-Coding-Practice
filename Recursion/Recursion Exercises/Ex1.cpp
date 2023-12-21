#include<iostream>
using namespace std;

int fun(int n){
    static int i = 1;
    if(n>=5){
        return n;
    }else{
        n=n+i;
        i++;
        return fun(n);
    }
}
int main(){
    int r;
    r=fun(1);
    cout<<r<<endl;
    return 0;
}

//output : 7
