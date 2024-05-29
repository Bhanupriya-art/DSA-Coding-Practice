#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int Length(struct Node *p){
    int len = 0;
    while (p){
        len++;
        p = p->next;
    }
    return len;
}

int Delete(struct  Node *p, int index){
    struct Node *q;
    int x = -1, i;
    if (index < 1 || index > Length(p))
        return -1;
    if (index == 1){
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else{
        for (i = 0; i < index - 1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }

}


int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    printf("Length is %d\n", Length(first));
    printf("Deleted Element is %d\n", Delete(first, 1));
    Display(first);
    return 0;
}