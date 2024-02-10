#include <iostream>
using namespace std;

//Method 1

void PairSum(int A[], int n, int k){
    for( int i = 0; i < n- 1;i ++){
        for(int j = i + 1; j < n; j++){
            if(A[i] + A[j] == k){
                cout <<"(" << A[i] <<"," << A[j] << ") "<< endl;
            }
        }
    }
}

//Method 2 Using Hash

void PairSumWithHash(int A[], int H[], int n, int k){
    for(int i = 0; i < n; i++){
        if(H[k - A[i]] != 0 && k - A[i] > 0){
            cout << "(" << A[i] << "," << k - A[i] << ")" << endl;
        }
        H[A[i]]++;
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
        int H[1000] = {0};
        cout << "The pairs are: " << endl;
        PairSumWithHash(A,H,n,k);

    }
}