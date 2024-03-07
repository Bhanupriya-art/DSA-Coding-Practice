#include <iostream>
using namespace std;

int main(){
    char s[] = "welcome";
    int i;
    for( i = 0; s[i]!='\0';i++);
    cout <<"Length is: "<< i << endl;
}