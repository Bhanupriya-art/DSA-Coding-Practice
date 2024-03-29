#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int i;
    int j;
    int x;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *E;
};
void CreateSparse(struct Sparse *s)
{
    printf("Enter Dimension: ");
    scanf("%d %d", &s->m, &s->n);
    printf("Enter Number of Non-Zero Elements: ");
    scanf("%d", &s->num);
    s->E = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter Non-Zero Elements: ");
    for (int i = 0; i < s->num; i++)
    {
        scanf("%d%d%d", &s->E[i].i, &s->E[i].j, &s->E[i].x);
    }
}

struct Sparse *add(struct Sparse *s1, struct Sparse *s2)
{
    struct Sparse *sum;
    sum = (struct Sparse *)malloc(sizeof(struct Sparse));
    sum->E = (struct Element *)malloc((s1->num + s2->num) * sizeof(struct Element));
    int i = 0, j = 0, k = 0;
    while (i < s1->num && j < s2->num)
    {
        if (s1->E[i].i < s2->E[j].i)
        {
            sum->E[k++] = s1->E[i++];
        }
        else if (s1->E[i].i > s2->E[j].i)
        {
            sum->E[k++] = s2->E[j++];
        }
        else
        {
            if (s1->E[i].j < s2->E[j].j)
            {
                sum->E[k++] = s1->E[i++];
            }
            else if (s1->E[i].j > s2->E[j].j)
            {
                sum->E[k++] = s2->E[j++];
            }
            else
            {
                sum->E[k] = s1->E[i];
                sum->E[k++].x = s1->E[i++].x + s2->E[j++].x;
            }
        }
    }
    for (; i < s1->num; i++)
    {
        sum->E[k++] = s1->E[i];
    }
    for (; j < s2->num; j++)
    {
        sum->E[k++] = s2->E[j];
    }
    sum->m = s1->m;
    sum->n = s1->n;
    sum->num = k;
    return sum;
}

void Display(struct Sparse s)
{
    int i, j, k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.E[k].i && j == s.E[k].j)
            {
                printf("%d ", s.E[k++].x);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{

    struct Sparse s1, s2, *s3;
    CreateSparse(&s1);
    CreateSparse(&s2);

    s3 = add(&s1, &s2);
    printf("\nFirst Matrix is: \n");
    Display(s1);
    printf("\nSecond Matrix is: \n");
    Display(s2);
    printf("\nSum Matrix is: \n");
    Display(*s3);
    return 0;
}