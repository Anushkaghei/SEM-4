#include<stdio.h>
#include<stdlib.h>
int a[10][10],visited[10],n;
void dfs(int v)
{
    int i;
    visited[v]=1;
    printf("%d ",v);
    for(i=1;i<=n;i++)
    {
        if(a[v][i]&&!visited[i])
        {
            dfs(i);
        }
    }
}
