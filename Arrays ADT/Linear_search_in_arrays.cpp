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

int linears(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int Linearsearch(struct Array arr, int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key==arr.A[i]){
            return i;
        }
    }
    return -1;
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

    int searchvariable;
    cout << "\nEnter the element that you want to search: ";
    cin >> searchvariable;

    cout << "The index of the search element is: ";
    cout << linears(&arr,searchvariable)<<endl;
    cout << "The index of the search element after searching again is: ";
    cout << linears(&arr,searchvariable);

}
