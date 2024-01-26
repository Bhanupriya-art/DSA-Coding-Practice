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
int Get(struct array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
return -1;
}
void set(struct array *arr,int index,int x){
    if(index>=0 && index<arr->length)
        arr->A[index]=x;
}
int Max(struct array arr){
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
return max;
}

int Min(struct array arr){
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
return min;
}

int Sum(struct array arr){
    int i,total=0;
    for(i=0;i<arr.length;i++){
        total+=arr.A[i];
    }
return total;
}

float Avg(struct array arr){
    int i,total=0;
    for(i=0;i<arr.length;i++){
        total+=arr.A[i];
    }
return (float)total/arr.length;
}



int main(){
    struct array arr;
    int n, i;
    printf("Enter size of an array: ");
    scanf("%d",&arr.size);
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("Enter the no of elements: ");
    scanf("%d",&n);

    printf("Enter all elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;

    display(arr);

    int Getelement;
    cout<<"enter the index of the element that you want to get: ";
    cin>>Getelement;
    cout<<"the element of the index that you want to get is: ";
    cout<<Get(arr,Getelement);

    int setindex,setelement;
    cout<<"\nenter the index and the element that you want to set: ";
    cin>>setindex>>setelement;
    set(&arr,setindex,setelement);
    display(arr);

    cout<<"\nmaximun element in the array is: "<<Max(arr);

    cout<<"\nminimum element in the array is: "<<Min(arr);

    cout<<"\nsum of element in the array is: "<<Sum(arr);

    cout<<"\naverage of  element in the array is: "<<Avg(arr);
    
}