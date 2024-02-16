#include <iostream>
using namespace std;

void CountingDuplicate(int A[],int n){
    int i,j;
    for(i = 0; i < n - 1; i++){
        if(A[i] == A[i+1]){
            j = i + 1;
            while(A[j] == A[i]){
                j++;
            }
            cout << A[i] << " is appearing " << j - i <<" times" << endl;
            i = j - 1;
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
        CountingDuplicate(arr,n);
    }    
}