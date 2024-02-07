#include <iostream>
using namespace std;

void Duplicate(int A[], int n){
    int lastDuplicate = 0;
    int i;
    for(i = 0; i < n; i++){
        if(A[i] == A[i+1] && A[i] != lastDuplicate){
            cout << " " <<A[i];
            lastDuplicate = A[i];
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
        int arr[n];
        cout << "Enter the elements of the array: ";
        for(i = 0;i < n; i++){
            cin >> arr[i];
        }
        cout << "Duplicate elements are: ";
        Duplicate(arr,n);
    }    
}