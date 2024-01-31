#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace  std;

struct array{
    int *A;
    int size;
    int length;
};
void display(struct array arr){
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
    printf("\n");
}

struct array* merge(struct array *arr1,struct array *arr2,struct array *arr3 ){
    int i , j,k;    
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    return arr3;
}

struct array* Union(struct array *arr1,struct array *arr2,struct array *arr3 ){
    int i , j,k;    
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++]=arr2->A[j++];
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    return arr3;
}

struct array* Intersection(struct array *arr1,struct array *arr2,struct array *arr3 ){
    int i , j,k;    
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    return arr3;
}

struct array* difference(struct array *arr1,struct array *arr2,struct array *arr3 ){
    int i , j,k;    
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    arr3->length = k;
    return arr3;
}

int main(){
    array arr1,arr2,arr3;
    int n, i;
    printf("Enter size of an array 1: ");
    scanf("%d",&arr1.size);
    arr1.A=new int[arr1.size];
    arr1.length=0;

    printf("Enter the no of elements of array1 : ");
    scanf("%d",&n);

    printf("Enter all elements of array 1:  ");
    for(i=0;i<n;i++)
        scanf("%d",&arr1.A[i]);
    arr1.length=n;
    cout<<"elements of array 1 are: ";
    display(arr1);

    printf("Enter size of an array 2: ");
    scanf("%d",&arr2.size);
    arr2.A=new int[arr2.size];
    arr2.length=0;

    printf("Enter the no of elements of array2 : ");
    scanf("%d",&n);

    printf("Enter all elements of array 2:  ");
    for(i=0;i<n;i++)
        scanf("%d",&arr2.A[i]);
    arr2.length=n;
    cout<<"elements of array2 are: ";
    display(arr2);


    arr3.A=new int[arr3.size];
    arr3.size=arr1.size+arr2.size;

    Union(&arr1,&arr2,&arr3);
    cout<<"elements of array3 after union operation are: ";
    display(arr3);

    Intersection(&arr1,&arr2,&arr3);
    cout<<"elements of array3 after intersaction operation are: ";
    display(arr3);

    difference(&arr1,&arr2,&arr3);
    cout<<"elements of array3 after difference of A-B is: ";
    display(arr3);

    return 0;

}