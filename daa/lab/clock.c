#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(long int *a, long int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(long int a[], long int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void insertion(long int a[], long int n)
{
    long int j, key;
    for (long int i = 0; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[i];
            j -= 1;
        }
        a[j + 1] = key;
    }
}

// selection sort
void selection(long int a[], long int n)
{
    long int min;
    for (long int i = 0; i < n - 1; i++)
    {
        min = i;
        for (long int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[min], &a[i]);
    }
}

int main()
{
    long int n = 50000;
    int it = 0;
    double t1[10], t2[10], t3[10];

    printf("A_size, Bubble, Insertion, Selection\n");
    while (n <= 500000)
    {
        long int a[n], b[n], c[n];
        for (long int i = 0; i < n; i++)
        {
            a[i] = rand();
            b[i] = a[i];
            c[i] = a[i];
        }
        clock_t start, end;
        double time_taken;
        start = clock();
        bubble(a, n);

        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        t1[it] = time_taken;
        start = clock();
        insertion(b, n);

        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        t2[it] = time_taken;
        start = clock();
        selection(c, n);

        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
        t3[it] = time_taken;

        printf("%li\n %li\n %li\n %li\n", n, t1[it], t2[it], t3[it]);

        n += 10000;
        it++;
    }
    return 0;
}