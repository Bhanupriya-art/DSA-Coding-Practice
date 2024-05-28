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

void Insert(struct Node *p, int index, int x){
    struct Node *t;
    int i;
    if (index < 0 || index > Length(p))
        return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if (index == 0){
        t->next = first;
        first = t;
    }
    else{
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}


int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    Insert(first, 0, 2);
    printf("Length is %d\n", Length(first));
    Display(first);
    return 0;
}