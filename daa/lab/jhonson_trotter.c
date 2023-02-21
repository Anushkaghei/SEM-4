//johnson trotter algorithm
#include<stdio.h>
#include<stdlib.h>
int a[10],dir[10];
void print_permutation(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("how many times");
}
int largest_mobile(int n)
{
    int i,large=0;
    for(i=0;i<n;i++)
    {
        if(dir[a[i]-1]==0&&a[i]>large)
        {
            large=a[i];
        }
        else if(dir[a[i]-1]==1&&a[i]>large)
        {
            large=a[i];
        }
    }
    if(large==0)
    {
        return 0;
    }
    else
    {
        return large-1;
    }
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void change_direction(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(dir[i]==0)
        {
            dir[i]=1;
        }
        else
        {
            dir[i]=0;
        }
    }
}
void johnson_trotter(int n)
{
    int i,large;
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
        dir[i]=0;
    }
    print_permutation(n);
    while(1)
    {
        large=largest_mobile(n);
        if(large==0)
        {
            break;
        }
        if(dir[large]==0)
        {
            swap(&a[large],&a[large+1]);
        }
        else
        {
            swap(&a[large],&a[large-1]);
        }
        change_direction(large);
        print_permutation(n);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    johnson_trotter(n);
    return 0;
}
