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

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct array arr, int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key==arr.A[i])
        return i;
    }
    return -1;
}
int searchlinear(struct array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
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
    int searchvariable;
    cout<<"enter a element you want to search: ";
    cin>>searchvariable;

    cout<<"index of element that you have searched is: ";
    // cout<<linearsearch(arr,searchvariable);
    cout<<searchlinear(&arr,searchvariable)<<endl;
    cout<<"after searching the elements again the index is: ";
    cout<<searchlinear(&arr,searchvariable);


    return 0;
}