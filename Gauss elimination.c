#include<stdio.h>
#include<math.h>
int main()
{
int i,j,r,k,n;
float a[10][10],c[10],x[10],p;
printf("\nEnter the no of rows:");
scanf("%d",&n);
printf("\nEnter the matrix:");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%f",&a[i][j]);
printf("\nEnter the constants:");
for(i=0;i<n;i++)
scanf("%f",&c[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i<j)
{
p=-(a[j][i]/a[i][i]);
for(k=0;k<n;k++)
{
a[j][k]=a[j][k]+p*a[i][k];
}
c[j]=c[j]+p*c[i];
}
}}
for(i=0;i<n;i++)
{printf("\n");
    for(j=0;j<n;j++)
        printf("%f\t",a[i][j]);
}
printf("\n");
for(i=0;i<n;i++)
printf("%f\t",c[i]);
x[n-1]=c[n-1]/a[n-1][n-1];
printf("\nx%d:%f",n-1,x[n-1]);
for(k=0;k<n-1;k++)
{
i=n-k-2;
for(j=i+1;j<n;j++)
c[i]=c[i]-a[i][j]*x[j];
x[i]=c[i]/a[i][i];
printf("\nx%d:%f",i,x[i]);
}
return 0;
}
