#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void VowelsCount(char A[]){
    int i, vcount = 0, ccount = 0;
    for(i = 0; A[i]!='\0';i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'o'
        || A[i] == 'i' || A[i] == 'u' || A[i] == 'A' ||
        A[i] == 'E' || A[i] == 'O' || A[i] == 'I' || A[i] == 'U'){
            vcount++;
        }
        else if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)){
            ccount++;
        }
    }
    cout << "Vowels: "<< vcount << endl;
    cout << "Consonents: "<< ccount << endl;
}

int main(){
    char A[MAX_SIZE];
    cout << "Enter the string: ";
    cin.getline(A,MAX_SIZE);
    VowelsCount(A);

}