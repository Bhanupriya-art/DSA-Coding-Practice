#include <iostream>
using namespace std;

void MaxAndMin(int A[], int n){
    int max = A[0];
    int min = A[0];
    for(int i = 1; i < n; i++){
        if(A[i] < min){
            min = A[i];
        }else if(A[i] > max){
            max = A[i];
        }
    }
    cout << "Minimun Element in the array is: "<<min<<endl;
    cout << "Maximum Element in the array is: "<<max;
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
        MaxAndMin(arr,n);
    }
}