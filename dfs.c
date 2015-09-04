#include<stdio.h>
int reached[10],g[10][10],n;
void dfs(int k)
{
    int i;
    printf("%d->",k);
    reached[k]=1;
    for(i=0;i<n;i++)
    {
        if(g[k][i]!=0 && reached[i]==0)
        dfs(i);
    }

}
int main()
{
    int v,i,j;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&g[i][j]);
    printf("enter starting vertex:");
    scanf("%d",&v);
    dfs(v);
    return 0;
}
