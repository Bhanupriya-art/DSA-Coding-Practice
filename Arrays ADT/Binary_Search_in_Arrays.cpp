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

//Iterative approach

int BinarySearch(struct Array arr, int key){
    int lower, mid, higher;
    lower = 0;
    higher = arr.length - 1;
    while(lower<=higher){
        mid=(lower+higher)/2;
        if(key==arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            higher = mid - 1;
        }else{
            lower= mid + 1;
        }
    }
    return -1;
}

//Recursive approach

int RbinSearch(struct Array arr, int l, int h, int key){
    int mid;
    if(l<=h){
        mid = (l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            return RbinSearch(arr,l,mid-1,key);
        }else{
            return RbinSearch(arr,mid+1,h,key);
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

    int element;
    cout << "\nEnter which element you want to search: ";
    cin>>element;

    cout<< "Element found at index: "<<RbinSearch(arr,0,arr.length-1,element);

}
