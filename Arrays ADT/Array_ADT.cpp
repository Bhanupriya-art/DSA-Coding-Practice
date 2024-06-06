// C++ Language

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int array[size];

    int n , i;

    cout<<"enter the no of elments of an array: ";
    cin>>n;
    cout<<"enter the element of an array: ";
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"element of an array are: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}



//IN C LANGUAGE
#include<stdio.h>
#include<stdlib.h>
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
    return 0;
}
