#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void ChangeToLowerCase(char A[], char B[]){
    int i;
    for(i = 0; A[i]!='\0';i++){
        if(A[i] >= 'A' && A[i] <= 'Z')
            A[i] += 32;
    }
    for(i = 0; B[i]!='\0';i++){
        if(B[i] >= 'A' && B[i] <= 'Z')
            B[i] += 32;
    }
}

void Anagram(char A[], char B[]){
    int i, H[26] = {0};
    for( i = 0; A[i]!='\0';i++){
        H[A[i] - 97] += 1;
    }
    for( i = 0; B[i]!='\0';i++){
        H[B[i] - 97] -= 1;
        if(H[B[i] - 97] < 0){
            cout << "Not an Anagram." << endl;
            break;
        }
    }
    if(B[i] == '\0'){ 
        cout << "It is an Anagram." << endl;
    }
}
int main(){
    char A[MAX_SIZE], B[MAX_SIZE];
    cout << "Enter the first string: ";
    cin.getline(A,MAX_SIZE);
    cout << "Enter the second string: ";
    cin.getline(B,MAX_SIZE);
    ChangeToLowerCase(A,B);
    Anagram(A,B);
}