#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the adjacency matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int indegree[n];
    for(i=0;i<n;i++)
    {
        indegree[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            indegree[j]+=a[i][j];
        }
    }
    int count=0;
    while(count<n)
    {
        for(i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                printf("%d ",i+1);
                indegree[i]=-1;
                for(j=0;j<n;j++)
                {
                    if(a[i][j]==1)
                    {
                        indegree[j]--;
                    }
                }
                count++;
            }
        }
    }
    return 0;
}
