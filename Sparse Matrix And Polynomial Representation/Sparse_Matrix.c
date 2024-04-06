#include <stdio.h>
#include <stdlib.h>

struct Element{
    int i;
    int j;
    int x;
};
struct Sparse{
    int m;
    int n;
    int num;
    struct Element *E;
};
void CreateSparse(struct Sparse *s){
    printf("Enter Dimension: ");
    scanf("%d %d",&s->m,&s->n);
    printf("Enter Number of Non-Zero Elements: ");
    scanf("%d",&s->num);
    s->E = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter Non-Zero Elements: ");
    for(int i=0;i<s->num;i++){
        scanf("%d%d%d",&s->E[i].i,&s->E[i].j,&s->E[i].x);
    }
}

void Display(struct Sparse s){
    int i,j,k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(i==s.E[k].i && j==s.E[k].j){
                printf("%d ",s.E[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){

    struct Sparse s;
    CreateSparse(&s);

    printf("\nSparse Matrix is: \n");
    Display(s);
    return 0;
}