//write a code for selection sort in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}
