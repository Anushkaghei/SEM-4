#include <stdio.h>

int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int findContentKids(int* d, int dSize, int* c, int cSize)
{
    int a = 0;
    qsort(d, dSize, sizeof(int), compare);
    qsort(c, cSize, sizeof(int), compare);
    int j = 0, k = 0;
    while (j < dSize && k < cSize)
    {
        if (c[k] >= d[j])
        {
            a++;
            j++;
            k++;
        }
        else
        {
            k++;
        }
    }
    return a;
}

int main()
{
    int n, m, i, j;
    int demand[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
       scanf("%d", &demand[i]);
    }
    int chocolate[100];
    scanf("%d", &m);
    for (j = 1; j <= m; j++)
    {
       scanf("%d", &chocolate[j]);
    }
    printf("%d",findContentKids(demand,n,chocolate,m));
    return 0;
}
