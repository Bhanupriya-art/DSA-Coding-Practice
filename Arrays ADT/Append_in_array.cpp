//Append_in_array
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

void append(struct Array *arr,int x){
    if(arr->length<arr->size){ 
        arr->A[arr->length++] = x;
    }
    else{
        cout << "No space left in the array";
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

    cout << "Elements of an array after appending an element is: ";
    append(&arr,10);
    display(arr);
}
