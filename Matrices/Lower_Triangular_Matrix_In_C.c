#include<stdio.h>
#include<stdlib.h>

struct Matrix{
    int *A;
    int n;
};

//Row Major Formula
void Set(struct Matrix *m, int i, int j, int x){
    if(i>=j){
        m->A[i*(i-1)/2+j-1] = x;
    }
}

int Get(struct Matrix m, int i, int j){
    if(i>=j){
        return m.A[i*(i-1)/2+j-1];
    }
    else return 0;
}

void Display(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                printf("%d ",m.A[i*(i-1)/2+j-1]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

//Column Major Formula
void SetColumn(struct Matrix *m, int i, int j, int x){
    if(i>=j){
        m->A[m->n*(j-1)+(j-2)*(j-1)/2 + i - j] = x;
    }
}

int GetColumn(struct Matrix m, int i, int j){
    if(i>=j){
        return m.A[m.n*(j-1)+(j-2)*(j-1)/2 + i - j];
    }
    else return 0;
}

void DisplayColumn(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                printf("%d ",m.A[m.n*(j-1)+(j-2)*(j-1)/2 + i - j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    int i,j,x;
    struct Matrix m;
    printf("Enter Dimension: ");
    scanf("%d",&m.n);
    m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));

    printf("Enter all elements of dimension: ");
    for(i= 1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            SetColumn(&m,i,j,x);
        }
    }
    printf("\nLower Triangular Matrix is: \n");
    DisplayColumn(m);
    return 0;
}