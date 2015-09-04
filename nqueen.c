#include<stdio.h>
int n,x[20];
char a[20][20];
displayboard()
{
    static int c=0,i,j;
    printf("\nSol no:%d\n",++c);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%c\t",a[i][j]);
    printf("\n");
    }
    printf("\n");
}
int place(int k,int i)
{
    int j;
    for(j=0;j<k;j++)
        if(x[j]==i||(abs(x[j]-i)==abs(j-k)))
            return 0;
    return 1;
}
nqueens(int k)
{
    if(k==n)
        displayboard();
    else
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(place(k,i))
            {
                x[k]=i;
                a[k][i]='Q';
                nqueens(k+1);
                a[k][i]='.';
            }
        }
    }

}
int main()
{
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]='.';
    nqueens(0);
    return 0;
}
