#include<iostream>
using namespace std;
struct array{
    int *A;
    int size;
    int length;
};
void display(struct array arr){
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
    printf("\n");
}
//iterative version
int BinarySearch(struct array arr ,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
//recursive version
int RBinarySearch(struct array arr,    int l , int h ,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            return RBinarySearch(arr,l,mid-1,key);
        else
            return RBinarySearch(arr,mid+1,h,key);
    }
    return -1;
}
int main(){
    struct array arr;
    int n, i;
    printf("Enter size of an array ");
    scanf("%d",&arr.size);
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter the no of elements ");
    scanf("%d",&n);

    printf("Enter all elements ");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;

    display(arr);

    int element;
    cout<<"enter the element you want to search: ";
    cin>>element;

    cout<<"we found the index: " << RBinarySearch(arr,0, arr.length-1 ,element);
    return 0;
}