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

void isSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            cout << "\nArray is not sorted";
        }
    }
    cout << "\nArray is Sorted";
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

void Reverse(struct Array *arr){
    int i;
    for(i=arr->length-1;i>=0;i--){
        cout<<arr->A[i]<<" ";
    }
}

void shift(struct Array *arr){
    int i;
    for(i=0;i<arr->length;i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1] = 0;
}

int main(){
    Array arr;
    int ch;
    int i,x,index,n;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter the number of elements that should be present in the array: ";
    cin>>n;
    cout << "Enter the elements for an array: ";
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length = n;

    do
    {
    cout << "Menu\n";
    cout << "1. Display\n";
    cout << "2. Append\n";
    cout << "3. Search\n";
    cout << "4. Sorted or Not\n";
    cout << "5. Delete\n";
    cout << "6. Insert\n";
    cout << "7. Get\n";
    cout << "8. Set\n";
    cout << "9. Max\n";
    cout << "10. Min\n";
    cout << "11. Sum\n";
    cout << "12. Avg\n";
    cout << "13. Swap\n";
    cout << "14. Rearrange\n";
    cout << "15. Reverse\n";
    cout << "16. Shift\n";
    cout << "17. Exit\n";

    cout << "Enter your choice: ";
    cin >> ch;
    switch(ch){
        case 1: 
        cout << "Displaying of array is: ";
        display(arr);
        break;
        case 2:
        cout << "Enter the element you want to append: ";
        cin >> x;
        append(&arr,x);
        cout << "Elements of an array after appending is: ";
        display(arr);
        break;
        case 3:
        cout << "Enter the element you want to search: ";
        cin >> x;
        cout << "Element found at index: " << BinarySearch(arr,x);
        break;
        case 4:
        isSorted(arr);
        break;
        case 5:
        cout << "Enter the index you want to delete: ";
        cin >> index;
        cout << "Deleted element is: " << Delete(&arr,index);
        cout << "\nElements of an array after deletion is: ";
        display(arr);
        break;
        case 6:
        cout << "Enter the index at which you want to insert the element: ";
        cin >> index;
        cout << "Enter the element you want to insert: ";
        cin >> x;
        insert(&arr,index,x);
        cout << "Elements of an array after insertion is: ";
        display(arr);
        break;
        case 7:
        cout << "Enter the index you want to get: ";
        cin >> index;
        cout << "Element at index " << index << " is: " << Get(arr,index);
        break;
        case 8:
        cout << "Enter the index you want to set: ";
        cin >> index;
        cout << "Enter the element you want to set: ";
        cin >> x;
        Set(&arr,index,x);
        cout << "Elements of an array after setting is: ";
        display(arr);
        break;
        case 9:
        cout << "Maximum element in an array is: " << Max(arr);
        break;
        case 10:
        cout << "Minimum element in an array is: " << Min(arr);
        break;
        case 11:
        cout << "Sum of all the elements in an array is: " << Sum(arr);
        break;
        case 12:
        cout << "Average of all the elements in an array is: " << Avg(arr);
        break;
        case 13:
        cout << "Enter the index of first element you want to swap: ";
        cin >> index;
        cout << "Enter the index of second element you want to swap: ";
        cin >> x;
        swap(&arr.A[index],&arr.A[x]);
        cout << "Elements of an array after swapping is: ";
        display(arr);
        break;
        case 14:
        cout << "Elements of an array after rearranging is: ";
        Rearrange(&arr);
        display(arr);
        break;
        case 15:
        cout << "Elements of an array after reversing is: ";
        Reverse(&arr);
        break;
        case 16:
        cout << "Elements of an array after shifting is: ";
        shift(&arr);
        display(arr);
        break;
    }
    }while(ch<17);
    return 0;
}