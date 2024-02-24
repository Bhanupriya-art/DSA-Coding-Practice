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

int Get(struct Array arr, int  index){
    if(index>=0 && index < arr.length){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index] = x;
    }
}

int Max(struct Array arr){
    int max = arr.A[0];
    int i;
    for(i = 1; i <arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int min = arr.A[0];
    int i;
    for(i = 1; i <arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int i,total = 0;
    for(i = 0; i < arr.length;i++){
        total += arr.A[i];
    }
    return total;
}
float Avg(struct Array arr){
    int i, total = 0;
    for(i = 0;i < arr.length;i++){
        total += arr.A[i];
    }
    return (float)total/arr.length;
}


int main(){
    //Disply Function
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

    //Get Function
    int GetElement;
    cout << "\nEnter the index of the element that you want to get: ";
    cin >> GetElement;
    cout << "The element present in the above entered index is: "<<Get(arr,GetElement);

    //Set Function
    int SetIndex, SetElement;
    cout << "\nEnter the index of the element that you want to set: ";
    cin>>SetIndex;
    cout << "fEnter which element you want to set at the above index: ";
    cin>>SetElement;
    Set(&arr,SetIndex,SetElement);
    display(arr);

    //Max function
    cout << "\nThe maximum element in the array is: "<<Max(arr);

    //Min function
    cout << "\nThe minimum element in the array is: "<<Min(arr);

    //Sum function
    cout << "\nThe sum of all the elements in the array is: "<<Sum(arr);

    //Avg function
    cout << "\nThe average of all the elements in the array is: "<<Avg(arr);

}
