#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

//Method 1
void Permutation(char A[], int k){
    static int B[MAX_SIZE] = {0};
    static char Res[MAX_SIZE];
    int i;
    if(A[k] == '\0'){
        Res[k] = '\0';
        cout <<"(" << Res << ")";
    }
    else{
        for(i = 0; A[i]!='\0';i++){
            if(B[i] == 0){
                Res[k] = A[i];
                B[i] = 1;
                Permutation(A, k+1);
                B[i] = 0;
            }
        }
    }
}

//Method 2
void swap(char &a, char &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void perm(char s[], int l, int h){
    int i;
    if(l == h){
        cout << "(" << s << ")";
    }
    else{
        for(i = l; i <= h; i++){
            swap(s[l], s[i]);
            perm(s, l+1, h);
            swap(s[l], s[i]);
        }
    }
}

int main(){
    char A[MAX_SIZE];
    cout << "Enter a string: ";
    cin >> A;
    Permutation(A, 0);
}