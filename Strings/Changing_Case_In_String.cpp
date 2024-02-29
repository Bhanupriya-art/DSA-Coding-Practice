#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void ChangeCase(char A[]){
    int i;
    for(i = 0; A[i]!='\0';i++){
        if(A[i] >= 65 && A[i] <= 90)
            A[i] += 32;
        else if(A[i] >= 97 && A[i] <= 122)
            A[i] -= 32;
    }
}

void ChangeToUpperCase(char A[]){
    int i;
    for(i = 0; A[i]!='\0';i++){
        if(A[i] >= 'a' && A[i] <= 'z')
            A[i] -= 32;
    }
}

void ChangeToLowerCase(char A[]){
    int i;
    for(i = 0; A[i]!='\0';i++){
        if(A[i] >= 'A' && A[i] <= 'Z')
            A[i] += 32;
    }
}

int main(){
    char A[MAX_SIZE];
    cout << "Enter the string: ";
    cin.getline(A,MAX_SIZE);
    cout << "Original String: " << A << endl;
    ChangeCase(A);
    cout << "Changed Case: " << A << endl;
}