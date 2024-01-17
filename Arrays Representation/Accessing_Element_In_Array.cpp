#include <iostream>
using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    cout << A[2] << endl;
    cout << 2[A] << endl;
    cout << *(A+2) << endl;

    //Addresses of array
    for(int i = 0; i < 5; i++){
        cout << &A[i] << endl;
    }
}
