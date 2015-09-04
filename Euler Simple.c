#include<stdio.h>
#include<math.h>
#define f(x,y) ((2-y*y)/(5*x))
int main()
{
float x0,y0,h,k,k1,k2,n,b,l,p,k4,k3;
int i,r,j;
printf("\nEnter the value of x0:");
scanf("%f",&x0);
printf("\nEnter the value of y0:");
scanf("%f",&y0);
printf("\nEnter the value of h:");
scanf("%f",&h);
printf("\nEnter the last point:");
scanf("%f",&n);
b=(n-x0)/h+1;
printf("%f\n",b);
r=(int)b;
printf("%d\n",r);
for(i=1;i<=r;i++)
{
    l=f(x0,y0);
    printf("%f\n",l);
y0=y0+h*f(x0,y0);
x0=x0+h;
printf("\nx:%f\ty:%f",x0,y0);
}

return 0;
}
