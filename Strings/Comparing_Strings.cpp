#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void Compare(char A[], char B[]){
    int i,j;
    for(i = 0,j=0; A[i] != '\0' && B[j] !='\0';i++,j++){
        if(A[i]!=B[j])
            break;
    }
    if(A[i]==B[j]) cout << "Both are Equal" <<endl;
    else if(A[i]<B[j]) cout << "A is smaller than B" <<endl;
    else cout << "A is greater than B" <<endl;
}
int main(){
    char A[MAX_SIZE], B[MAX_SIZE];
    cout << "Enter the string A: ";
    cin.getline(A,MAX_SIZE);
    cout << "Enter the string B: ";
    cin.getline(B,MAX_SIZE);
    Compare(A,B);
}