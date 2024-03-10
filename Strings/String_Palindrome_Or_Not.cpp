#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void Reverse(char A[], char B[]){
    int i,j;
    for(i = 0; A[i]!='\0';i++);
    i = i-1;
    for(j = 0; i>= 0; i--,j++){
        B[j] = A[i];
    }
    B[j] = '\0';
}
void isPalindrome(){
    char A[MAX_SIZE], B[MAX_SIZE];
    cout << "Enter the string: ";
    cin.getline(A,MAX_SIZE);
    Reverse(A,B);
    int i,j;
    for(i = 0,j=0; A[i] != '\0' && B[j] !='\0';i++,j++){
        if(A[i]!=B[j])
            break;
    }
    if(A[i]==B[j]) cout << "Palindrome" <<endl;
    else cout << "Not a Palindrome" <<endl;
}
int main(){
    isPalindrome();
}
