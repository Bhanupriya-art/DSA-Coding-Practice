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
void insert(struct array *arr , int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
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
    int index , x;
    cout<<"Enter at which index you want to insert and then which element you want to insert: ";
    cin>>index;
    cin>>x;
    insert(&arr , index , x);
    display(arr);
    
    return 0;
}