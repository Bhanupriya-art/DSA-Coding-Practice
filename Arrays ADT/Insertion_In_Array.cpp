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
    cout << endl;
}

void insert(struct Array *arr, int index, int x){
    if(index>=0 && index <= arr->length){
        int i;
        for(i=arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
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
    cout << "Elements of an array are: ";
    display(arr);

    cout << "Elements of an array after insertion is: ";
    int index,x;
    cout << "Enter the index at which you want to insert the element: ";
    cin >> index;
    cout << "Enter the element you want to insert: ";
    cin >> x;
    insert(&arr,index,x);
    display(arr);

}