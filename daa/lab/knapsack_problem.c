//knapsack problem
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int knapsack(int n,int w[],int v[],int W)
{
    int i,j;
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0||j==0)
            {
                k[i][j]=0;
            }
            else if(w[i-1]<=j)
            {
                k[i][j]=max(v[i-1]+k[i-1][j-w[i-1]],k[i-1][j]);
            }
            else
            {
                k[i][j]=k[i-1][j];
            }
        }
    }
    return k[n][W];
}
int main()
{
    int n,i,W;
    printf("Enter the number of items: ");
    scanf("%d",&n);
    int w[n],v[n];
    printf("Enter the weights of items: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    printf("Enter the values of items: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    printf("Enter the capacity of knapsack: ");
    scanf("%d",&W);
    printf("The maximum value of items that can be put in the knapsack is: %d",knapsack(n,w,v,W));
    return 0;
}
