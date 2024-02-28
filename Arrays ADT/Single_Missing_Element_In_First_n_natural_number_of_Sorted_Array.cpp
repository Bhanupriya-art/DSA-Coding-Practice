//This code is only applicable if the array is sorted and the there is only single element missing. And for the sum of first n natural numbers
#include <iostream>
using namespace std;

void Missing(int n, int A[]){
    
    int i,s,sum=0;
    for(i = 0; i <n;i++){
        sum = sum + A[i];
    }
    n++;
    s = n*(n+1) / 2;
    cout <<"Missing Elemets: " <<  s - sum;
}
int main(){
    int i,size,n;
    cout << "Enter the size of the array: ";
    cin>>size;
    cout << "Enter the total number of elements present in an array: ";
    cin>>n;
    if(n>size){
        cout<<"\nThe entered number of elements is greater than the size of the array.\n";
    }
    else{
        int A[n];
        cout<<"Enter the elements of an array: ";
        for(i=0;i<n;i++){
            cin>>A[i];
        }
        Missing(n,A);
    }
}