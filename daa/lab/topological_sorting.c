#include<stdio.h>
#include<stdlib.h>
int a[10][10],indegree[10],n;
void topological_sort()
{
    int i,u,v,count=0;
    int top=-1;
    int stack[10];
    for(i=1;i<=n;i++)
    {
        if(indegree[i]==0)
        {
            stack[++top]=i;
        }
    }
    while(top!=-1)
    {
        u=stack[top--];
        printf("%d ",u);
        for(v=1;v<=n;v++)
        {
            if(a[u][v]==1)
            {
                indegree[v]--;
                if(indegree[v]==0)
                {
                    stack[++top]=v;
                }
            }
        }
        count++;
    }
    if(count!=n)
    {
        printf("Topological sorting not possible");
    }
}
