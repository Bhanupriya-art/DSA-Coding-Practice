#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

bool Valid(char A[]){
    int i;
    for(i = 0; A[i]!='\0';i++){
        if(!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122) && !(A[i] >= 48 && A[i] <= 57))
            return false;
    }
    return true;
}

int main(){
    char name[MAX_SIZE];
    cout << "Enter the string to check if it is valid or not: ";
    cin.getline(name,MAX_SIZE);
    if(Valid(name))
        cout << "Valid String" << endl;
    else
        cout << "Invalid String" << endl;
    
}