#include <iostream>
using namespace std;

void PairSum(int A[], int k,int n){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(A[i] + A[j] == k){
            cout << "(" << A[i] << "," << A[j] << ")" << endl;
            i++;
            j--;
        }
        else if(A[i] + A[j] < k){
            i++;
        }
        else{
            j--;
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
        int k;
        cout << "Enter the value of k: ";
        cin >> k;
        int A[n];
        cout << "Enter the elements of the array: ";
        for(i=0;i<n;i++) {
            cin >> A[i];
        }
        cout << "The pairs are: " << endl;
        PairSum(A,k,n);
    }
}