#include <iostream>
using namespace std;

int Max(int A[],int n){
    int max = A[0];
    for(int i = 1; i < n;i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    return max;
}

void Duplicate(int A[], int H[], int n){
    int max = Max(A,n);
    for(int i = 0; i < n;i++){
        H[A[i]]++;
    }
    for(int i = 0; i < max; i++){
        if(H[i] > 1){
            cout << i<<" is appearing " << H[i] << " times" << endl;
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
        int H[1000]={0};
        Duplicate(arr,H,n);
    }    
}