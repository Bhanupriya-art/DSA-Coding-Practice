#include<iostream>
using namespace std;

int Max(int A[],int n){
        int max = A[0];
        int i;
        for(i = 1; i < n;i++){
            if (A[i] > max)
                max = A[i];
        }
        return max;
}

int Min(int A[],int n){
        int min = A[0];
        int i;
        for(i=1;i<n;i++) {
            if (A[i] < min)
            min = A[i];
        }
        return min;    
}

void Missing(int A[],int H[],int n){
    int higher = Max(A,n);
    int lower = Min(A,n);
    
    for(int i = 0; i < n; i++){
        H[A[i]]++;
    }
    for(int i = lower; i <= higher; i++){
        if(H[i]==0){
            cout <<" "<<i;
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
        int H[1000] = {0};
        cout << "Missing numbers are : ";
        Missing(A,H,n);
    }
}