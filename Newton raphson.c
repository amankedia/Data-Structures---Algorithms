#include<stdio.h>
#include<math.h>
#define func(o) (3*o*o*o-9*o*o+8)
#define func1(u) (9*u*u-18*x)
int main()
{
float x,p,y,z,l;
int i,n;
printf("\nEnter the initial value of n:");
scanf("%d",&n);
printf("\nEnter the initial value of x:");
scanf("%f",&x);
printf("\nEnter the precision of x:");
scanf("%f",&p);
i=0;
do
{
y=func(x);
z=func1(x);
l=x-(y/z);
if(fabs(x-l)<p)
{
    break;
}
x=l;
i=i+1;
}while(i<n);
printf("\n Root is:%f and f(%f) is:%f\n%d",l,l,func(l),i);
return 0;
}
