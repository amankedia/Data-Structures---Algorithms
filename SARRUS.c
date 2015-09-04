#include<stdio.h>
#include<math.h>
int main()
{
int i,j,r,c,n;
float a[10][10],b[10][10],tr[10][10],inv[10][10],det=1,p,s;
printf("\nEnter the no of rows:");
scanf("%d",&n);
printf("\nEnter the no of columns:");
scanf("%d",&c);
printf("\nEnter the matrix:");
for(i=0;i<n;i++)
for(j=0;j<c;j++)
scanf("%f",&a[i][j]);
for(j=0;j<n;j++)
{
p=p+(a[0][j]*a[1][(j+1)%n]*a[2][(j+2)%n]);
s=s+(a[0][n-j-1]*a[1][(n-j+1)%3]*a[2][(n-j)%3]);
}
det=p-s;
printf("%f",det);
return 0;
}
