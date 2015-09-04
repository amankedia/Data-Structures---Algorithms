#include<stdio.h>
#include<math.h>
int fact(int x)
{
    int l,t=1;
    for(l=1;l<=x;l++)
        t=t*l;
    return t;
}
int main()
{
int i,n,j,k;
float x[10],y[10][10],h,p=1,sum=0,o;
printf("\nEnter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the value of x%d:",i+1);
scanf("%f",&x[i]);
printf("\nEnter the value of y%d:",i+1);
scanf("%f",&y[i][0]);
}
for(i=1;i<n;i++)
{k=i;
    for(j=0;j<n-i;j++)
     {   y[j][i]=(y[j+1][i-1]-y[j][i-1])/(x[k]-x[k-i]);
     k++;
}}
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
        printf("%f\t",y[i][j]);
    printf("\n");
}
printf("\nEnter the value of x:");
scanf("%f",&o);
h=x[1]-x[0];
for(i=0;i<n-1;i++)
{
    p=1;
    for(j=0;j<=i;j++)
    {
        p=p*(o-x[j]);
    }
    sum=sum+(p*y[0][i+1]);
}
sum=sum+y[0][0];
printf("%f",sum);
return 0;
}
