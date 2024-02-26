#include <iostream>
using namespace std;

void MissingElement(int A[],int n){
    int i;
    int lower = A[0];
    int higher = A[n];
    int diff = lower- 0;
    for(i = 0; i < n; i++){
        if(A[i]-i!=diff){
            cout << "The missing element is: "<< i + diff << endl;
            break;
        }
    }
}
int main(){
    int i,size,n;
    cout << "Enter the size of the array: ";
    cin>>size;
    cout << "Enter the total number of elements present in an array: ";
    cin>>n;
    if(n>size){
        cout<<"\nThe entered number of elements is greater than the size of the array.\n";
    }else{
        int A[n];
        cout << "Enter the elements of the array: ";
        for(i=0;i<n;i++) {
            cin >> A[i];
        }
        MissingElement(A,n);
    }
}