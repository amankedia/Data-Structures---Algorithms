#include<stdio.h>
#define mid(l) (l*l*l+2*l*l+2.2*l+0.4)
int main()
{
float a,b,y,r,z,w,q;
int i,n;
printf("\nEnter the number of iterations:");
scanf("%d",&n);
printf("\nEnter precision:");
scanf("%f",&q);
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
r=(a*z-b*y)/(z-y);
w=mid(r);
if(w*y<0)
{
b=r;
z=w;
}
else
{
a=r;
y=w;
}
}

printf("\nX:%f Y:%f",r,w);
return 0;
}
