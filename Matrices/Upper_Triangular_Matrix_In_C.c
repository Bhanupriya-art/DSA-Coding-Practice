#include<stdio.h>
#include<stdlib.h>

struct Matrix{
    int *A;
    int n;
};
//Row major Formula
void Set(struct Matrix *m, int i, int j, int x){
    if(i<=j){
        m->A[m->n*(i-1)+(i-2)*(i-1)/2 + j - i] = x;
    }
}
int Get(struct Matrix m ,int i, int j){
    if(i<=j){
        return m.A[m.n*(i-1)+(i-2)*(i-1)/2 + j - i];
    }
    else  return 0; 
}

void Display(struct Matrix m ){
    int i,j;
    for(i = 1; i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i<=j){
                printf("%d ", m.A[m.n*(i-1)+(i-2)*(i-1)/2 + j - i]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

//Column Major Method
void SetColumn(struct Matrix *m, int i, int j, int x){
    if(i<=j){
        m->A[j*(j-1)/2 + i - 1] = x;
    }
}
int GetCloumn(struct Matrix m ,int i, int j){
    if(i<=j){
        return m.A[j*(j-1)/2 + i - 1];
    }
    else  return 0; 
}

void DisplayColumn(struct Matrix m ){
    int i,j;
    for(i = 1; i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i<=j){
                printf("%d ", m.A[j*(j-1)/2 + i - 1]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    struct Matrix m;
    int x;
    printf("Enter Dimension of Upper Triangular Matrix: ");
    scanf("%d",&m.n);
    m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));

    printf("Enter all elements: ");
    for(int i = 1;i<=m.n;i++){
        for(int j = 1;j<=m.n;j++){
            scanf("%d",&x);
            SetColumn(&m,i,j,x);
        }
    }
    printf("\nUpper Triangular Matrix is: \n");
    DisplayColumn(m);
    return 0;
}