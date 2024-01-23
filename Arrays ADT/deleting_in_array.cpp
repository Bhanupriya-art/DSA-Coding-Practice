#include<stdio.h>
#include<stdlib.h>
#include <iostream>
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

int Delete(struct array *arr , int index){
    int i;
    int x;
    if(index>=0 && index<=arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
return 0;
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

    int deleteElement;
    cout<<"Enter which element you want to delete: ";
    cin>> deleteElement;

    Delete(&arr,deleteElement);
    display(arr);
    return 0;
}