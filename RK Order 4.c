#include<stdio.h>
#include<math.h>
#define f(x,y) (1+(y*y))
int main()
{
float x0,y0,h,k,k1,k2,n,b,l,p,k4,k3;
int i,r;
printf("\nEnter the value of x0:");
scanf("%f",&x0);
printf("\nEnter the value of y0:");
scanf("%f",&y0);
printf("\nEnter the value of h:");
scanf("%f",&h);
printf("\nEnter the last point:");
scanf("%f",&n);
b=(n-x0)/h;
r=(int)b;
printf("%d\n",r);
for(i=1;i<=r;i++,x0=x0+h)
{
k1=h*f(x0,y0);
l=x0+h/2;p=y0+k1/2;
k2=h*f(l,p);
l=x0+h/2;p=y0+k2/2;
k3=h*f(l,p);
l=x0+h;p=y0+k3;
k4=h*f(l,p);
k=(k1+2*k2+2*k3+k4)/6;
y0=y0+k;
}
printf("\nx:%f\ty:%f",x0,y0);
return 0;
}
