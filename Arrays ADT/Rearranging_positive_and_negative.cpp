#include <iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    cout << "The elements of an array: ";
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }

}
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Rearrange(struct Array *arr){
    int i,j;
    i = 0;
    j = arr->length-1;

    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}

int main(){
    Array arr;
    int n,i;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter the number of elements that should be present in the array: ";
    cin>>n;
    cout << "Enter the elements for an array: ";
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length = n;

    display(arr);
    cout << endl;

    Rearrange(&arr);
    display(arr);

}
