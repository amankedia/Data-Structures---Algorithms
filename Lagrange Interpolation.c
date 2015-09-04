#include<stdio.h>
#include<math.h>
int main()
{
int i,n,j;
float x[10],y[10],h,p=1,sum=0,o;
printf("\nEnter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the value of x%d:",i+1);
scanf("%f",&x[i]);
printf("\nEnter the value of y%d:",i+1);
scanf("%f",&y[i]);
}
printf("\nEnter the value of x:");
scanf("%f",&o);
for(i=0;i<n;i++)
{
    p=1,h=1;
    for(j=0;j<n;j++)
    {
    if(i!=j)
    {
        p=p*(o-x[j]);
        h=h*(x[i]-x[j]);
        }
    }
    sum=sum+(p*y[i])/h;
}
printf("%f",sum);
return 0;
}
