#include <iostream>
using namespace std;



void Duplicate(int A[], int n){
    int i;
    for(i = 0; i < n; i++){
        int count = 1;
        if(A[i] != -1){
            for(int j = i +1; j < n; j++){
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
        Duplicate(arr,n);
    }    
}