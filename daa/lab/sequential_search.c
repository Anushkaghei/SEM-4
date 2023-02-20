//sequntial search
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,search;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not found");
    }
    return 0;
}
