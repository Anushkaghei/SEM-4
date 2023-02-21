#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of coins: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the weights of coins: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1=0,sum2=0,sum3=0;
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
            sum1+=a[i];
        }
        else if(i%3==1)
        {
            sum2+=a[i];
        }
        else
        {
            sum3+=a[i];
        }
    }
    if(sum1>sum2&&sum1>sum3)
    {
        printf("The fake coin is in the first set");
    }
    else if(sum2>sum1&&sum2>sum3)
    {
        printf("The fake coin is in the second set");
    }
    else
    {
        printf("The fake coin is in the third set");
    }
    return 0;
}
