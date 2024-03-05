#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void Duplicate(char A[]){
    int i;
    for(i = 0; A[i]!='\0';i++){
        int count = 1;
        if(A[i] != -1){
            for(int j = i + 1; A[j]!='\0'; j++){
                if(A[i] == A[j]){
                    count++;
                    A[j] = -1;
                }
            }
            if(count > 1){
                cout << A[i] << " is appearing " << count << " times." << endl;
            }
        }
    }
}

int main(){
    char A[MAX_SIZE];
    cout << "Enter the string: ";
    cin.getline(A,MAX_SIZE);
    Duplicate(A);
}