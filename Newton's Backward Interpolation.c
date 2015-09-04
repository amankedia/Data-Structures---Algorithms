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
int i,n,j;
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
{
    for(j=0;j<n-i;j++)
        y[j][i]=y[j+1][i-1]-y[j][i-1];
}
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
    for(j=n-1;j>=n-1-i;j--)
    {
        p=p*(o-x[j]);
    }
    sum=sum+(p*y[n-2-i][i+1])/(pow(h,i+1)*fact(i+1));
}
sum=sum+y[n-1][0];
printf("%f",sum);
return 0;
}
