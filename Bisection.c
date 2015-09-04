#include<stdio.h>
#define mid(l) (3*l*l*l+5*l-40)
int main()
{
float a,b,y,r,z,w;
int i,n;
printf("\nEnter the number of iterations:");
scanf("%d",&n);
printf("\nEnter a:");
scanf("%f",&a);
printf("\nEnter b:");
scanf("%f",&b);
y=mid(a);
z=mid(b);
printf("\nThe value of f(%f) is:%f",a,y);
printf("\nThe value of f(%f) is:%f",b,z);
for(i=1;i<=n;i++)
{
r=(a+b)/2;
w=mid(r);
if(w*y>0)
a=r;
else
b=r;
}
printf("\nX:%f Y:%f",r,w);
return 0;
}
