//This is only applicable for small letters
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void Duplicate(char A[]){
    int i;
    long int H = 0 , x = 0;
    for(i = 0; A[i]!='\0'; i++){
        x = 1;
        x = x << (A[i] - 97);
        if((x & H) > 0){
            cout << A[i] << " is duplicate." << endl;
        }else{
            H = x | H;
        }
    }
}

int main(){
    char A[MAX_SIZE];
    cout << "Enter the string: ";
    cin.getline(A,MAX_SIZE);
    Duplicate(A);
}