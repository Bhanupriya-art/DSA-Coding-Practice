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

int Delete(struct Array *arr, int index){
    int x = 0;
    int i;
    if(index>=0 && index<=arr->length){
        x = arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
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

    int deleteelement;
    cout << "\nEnter the index of the element that should be deleted: ";
    cin >> deleteelement;

    cout << "The deleted element is: " << Delete(&arr,deleteelement) << endl;
    display(arr);
    delete [] arr.A;
}