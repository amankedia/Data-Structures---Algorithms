#include<stdio.h>
#include<math.h>
#define f(x,y) ((1/(x*x))-(y/x))
int main()
{
float x0,y0,h,n,x1,y1,y1_0,r,s;
int j,count,flag;
printf("\nEnter the value of x0:");
scanf("%f",&x0);
printf("\nEnter the value of y0:");
scanf("%f",&y0);
printf("\nEnter the value of h:");
scanf("%f",&h);
printf("\nEnter the last point:");
scanf("%f",&n);
for(x1=x0+h,j=1;x1<=n+h;j++,x1=x1+h)
{
flag=0;count=0;
y1_0=y0+h*f(x0,y0);
printf("\ny%d_0:%f",j,y1_0);
do
{
count++;
r=f(x0,y0);
s=f(x1,y1_0);
y1=y0+(h*(r+s))/2;
printf("\ny%d_%d:%f",j,count,y1);
if(fabs(y1-y1_0)<0.00001)
{
printf("\ny%d:%f",j,y1);
flag=1;
}
y1_0=y1;
}while(flag!=1);
y0=y1;
}
return 0;
}
