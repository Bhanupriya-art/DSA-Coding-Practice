#include <iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }

}

struct Array* Merge(struct Array *arr1, struct Array *arr2,struct Array *arr3){
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    return arr3;
}

int main(){
    Array arr1,arr2,arr3;
    int n,i;
    cout << "Enter the size of the array 1: ";
    cin >> arr1.size;
    arr1.A = new int[arr1.size];
    arr1.length = 0;
    cout << "Enter the number of elements that should be present in the array 1: ";
    cin>>n;
    cout << "Enter the elements for an array 1: ";
    for(i=0;i<n;i++){
        cin>>arr1.A[i];
    }
    arr1.length = n;
    cout << "Elements of array 1 are: ";
    display(arr1);

    cout << "\nEnter the size of the array 2: ";
    cin >> arr2.size;
    arr2.A = new int[arr2.size];
    arr2.length = 0;
    cout << "Enter the number of elements that should be present in the array 2: ";
    cin>>n;
    cout << "Enter the elements for an array 2: ";
    for(i=0;i<n;i++){
        cin>>arr2.A[i];
    }
    arr2.length = n;
    cout << "Elements of array 2 are: ";
    display(arr2);
    cout << endl;
    arr3.A = new int[arr3.size];
    arr3.size = arr1.size + arr2.size;

    Merge(&arr1,&arr2,&arr3);
    cout << "Elements of array after merging are: ";
    display(arr3);
}
