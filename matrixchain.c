#include<stdio.h>
#include<stdlib.h>
#define Int_Max 999999999
int MatrixChainOrder(int s[20][20],int p[], int n)
{
    int m[n][n];
    int i,j,k,L,q;
    for(i=1;i<n;i++)
        m[i][i]=0;
    for(L=2;L<n;L++)//lenght of chain
    {
        for(i=1;i<=n-L+1;i++)
        {
            j=i+L-1;
            m[i][j]=Int_Max;
            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
    return m[1][n-1];
}
void print_order(int s[20][20],int i, int j)
{
if(i==j)
    printf("A[%d]",i);
else
{
    printf("(");
    print_order(s,i,s[i][j]);
    print_order(s,s[i][j]+1,j);
    printf(")");
}
}
int main()
{
int arr[50],i,n,size,j;
int s[20][20];
printf("Enter the dimensions:");
scanf("%d",&n);
for(i=0;i<=n;i++)
    scanf("%d",&arr[i]);
printf("Minimum number of multiplications is %d ", MatrixChainOrder(s,arr,n));
printf("\nThe Optimal order is:\t");
print_order(s,1,n-1);
for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            printf("%d ",s[i][j]);
        printf("\n");
    }

return 0;
}
