#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int WordCount(char A[]){
    int i, word = 0;
    for(i = 0; A[i]!='\0';i++){
        if(A[i] == ' ' && A[i-1] != ' ')
            word++;
    }
    return word+1;
}

int main(){
    char A[MAX_SIZE];
    cout << "Enter the string: ";
    cin.getline(A,MAX_SIZE);
    cout << "Number of words: " << WordCount(A) << endl;
}