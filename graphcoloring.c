#include<stdio.h>
int x[20],g[20][20],n,m;
void display()
{
    int i,j;
    static int c=0;
    printf("%d\n",++c);
    for(i=1;i<=n;i++)
    {
            printf("%d->%d\t",i,x[i]);
    }
    printf("\n");
}
void nextcolor(int k,int g[20][20])
{
    do
    {
        int j;

        x[k]=(x[k]+1)%(m+1);
        if(x[k]==0)
            return;
        for(j=1;j<=n;j++)
            if(g[j][k]!=0&&(x[k]==x[j]))
                break;
        if(j==n+1)
            return;
    }while(1);
}
mcolor(int k,int g[20][20])
{
    do
    {
        nextcolor(k,g);
        if(x[k]==0)
            return;
        if(k==n)
            display();
        else
            mcolor(k+1,g);
    }while(1);
}
int main()
{
    printf("Enter the no.of vertices:");
    scanf("%d",&n);
    printf("Enter the no.of colors:");
    scanf("%d",&m);
    int i,j;
    printf("Enter the matrix\n");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    scanf("%d",&g[i][j]);

    mcolor(1,g);
    return 0;
}
