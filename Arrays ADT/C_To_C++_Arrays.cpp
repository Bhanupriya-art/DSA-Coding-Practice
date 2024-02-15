#include <iostream>
using namespace std;

class Array{
    private:
    int *A;
    int size;
    int length;

    public:
    Array(){
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz){
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array(){
        delete []A;
    }

void display(){
    int i;
    for(i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout << endl;
}

void append(int x){
    if(length<size){ 
        A[length++] = x;
    }
    else{
        cout << "No space left in the array";
    }
}

int BinarySearch(int key){
    int lower, mid, higher;
    lower = 0;
    higher = length - 1;
    while(lower<=higher){
        mid=(lower+higher)/2;
        if(key==A[mid]){
            return mid;
        }else if(key<A[mid]){
            higher = mid - 1;
        }else{
            lower= mid + 1;
        }
    }
    return -1;
}

void isSorted(){
    int i;
    for(i=0;i<length-1;i++){
        if(A[i]>A[i+1]){
            cout << "\nArray is not sorted";
        }
    }
    cout << "\nArray is Sorted";
}

int Delete( int index){
    int x = 0;
    int i;
    if(index>=0 && index<=length){
        x = A[index];
        for(i=index;i<length-1;i++){
            A[i] = A[i+1];
        }
        length--;
        return x;
    }
    return 0;
}

void insert( int index, int x){
    if(index>=0 && index <= length){
        int i;
        for(i=length;i>index;i--){
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}

int Get( int  index){
    if(index>=0 && index < length){
        return A[index];
    }
    return -1;
}

void Set(int index, int x){
    if(index>=0 && index<length){
        A[index] = x;
    }
}

int Max(){
    int max = A[0];
    int i;
    for(i = 1; i <length;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}

int Min(){
    int min = A[0];
    int i;
    for(i = 1; i <length;i++){
        if(A[i]<min){
            min = A[i];
        }
    }
    return min;
}

int Sum(){
    int i,total = 0;
    for(i = 0; i < length;i++){
        total += A[i];
    }
    return total;
}
float Avg(){
    int i, total = 0;
    for(i = 0;i < length;i++){
        total += A[i];
    }
    return (float)total/length;
}

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Rearrange(){
    int i,j;
    i = 0;
    j = length-1;

    while(i<j){
        while(A[i]<0)i++;
        while(A[j]>=0)j--;
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }
}

void Reverse(){
    int i;
    for(i=length-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
}

void shift(){
    int i;
    for(i=0;i<length;i++){
        A[i] = A[i+1];
    }
    A[length-1] = 0;
}

};

int main(){
    int ch;
    int i,x,index,n,size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Array arr(size);
    cout << "Enter the number of elements that should be present in the array: ";
    cin>>n;
    cout << "Enter the elements for an array: ";
    for(i=0;i<n;i++){
        cin >> x;
        arr.append(x);
    }
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
        arr.display();
        break;
        case 2:
        cout << "Enter the element you want to append: ";
        cin >> x;
        arr.append(x);
        cout << "Elements of an array after appending is: ";
        arr.display();
        break;
        case 3:
        cout << "Enter the element you want to search: ";
        cin >> x;
        cout << "Element found at index: " << arr.BinarySearch(x);
        break;
        case 4:
        arr.isSorted();
        break;
        case 5:
        cout << "Enter the index you want to delete: ";
        cin >> index;
        cout << "Deleted element is: " << arr.Delete(index);
        cout << "\nElements of an array after deletion is: ";
        arr.display();
        break;
        case 6:
        cout << "Enter the index at which you want to insert the element: ";
        cin >> index;
        cout << "Enter the element you want to insert: ";
        cin >> x;
        arr.insert(index,x);
        cout << "Elements of an array after insertion is: ";
        arr.display();
        break;
        case 7:
        cout << "Enter the index you want to get: ";
        cin >> index;
        cout << "Element at index " << index << " is: " << arr.Get(index);
        break;
        case 8:
        cout << "Enter the index you want to set: ";
        cin >> index;
        cout << "Enter the element you want to set: ";
        cin >> x;
        arr.Set(index,x);
        cout << "Elements of an array after setting is: ";
        arr.display();
        break;
        case 9:
        cout << "Maximum element in an array is: " <<arr. Max();
        break;
        case 10:
        cout << "Minimum element in an array is: " << arr.Min();
        break;
        case 11:
        cout << "Sum of all the elements in an array is: " << arr.Sum();
        break;
        case 12:
        cout << "Average of all the elements in an array is: " << arr.Avg();
        break;
        case 13:
        cout << "Enter the index of first element you want to swap: ";
        cin >> index;
        cout << "Enter the index of second element you want to swap: ";
        cin >> x;
        arr.swap(&index,&x);
        cout << "Elements of an array after swapping is: ";
        arr.display();
        break;
        case 14:
        cout << "Elements of an array after rearranging is: ";
        arr.Rearrange();
        arr.display();
        break;
        case 15:
        cout << "Elements of an array after reversing is: ";
        arr.Reverse();
        break;
        case 16:
        cout << "Elements of an array after shifting is: ";
        arr.shift();
        arr.display();
        break;
    }
    }while(ch<17);
    return 0;
}