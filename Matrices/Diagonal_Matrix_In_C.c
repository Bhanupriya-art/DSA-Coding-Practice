#include <stdio.h>
#include <stdlib.h>

struct Matrix{
    int *A;
    int n;
};

void Set(struct Matrix *m, int i, int j, int x){
    if(i==j){
        m->A[i-1]=x;
    }
}

int Get(struct Matrix m, int i, int j){
    if(i==j){
        return m.A[i-1];
    }
    else{
        return 0;
    }
}

void Display(struct Matrix m){
    int i, j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
                printf("%d ", m.A[i]);
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
    int  n,i,j, x;
    printf("Enter Dimension: ");
    scanf("%d",&m.n);
    m.A = (int *)malloc(n*sizeof(int));
    printf("Enter all elements of dimension: ");
    for(i= 1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }
    printf("\nDiagonal Matrix is: \n");
    Display(m);
    return 0;
} 