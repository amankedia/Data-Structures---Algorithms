#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
float f,x[10],y[10],sum=0,p=0,l=0,h,q=0,r;
printf("\n enter the value of h:");
scanf("%f",&h);
printf("\nenter the no. of terms:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the value of x%d",i+1);
scanf("%f",&x[i]);
printf("\nenter the value of y%d",i+1);
scanf("%f",&y[i]);
}
for(i=1;i<n-1;++i)
sum=sum+y[i];
sum=sum*2;
sum=sum+y[0]+y[n-1];
r=h/2;
sum=sum*r;
printf("\ntrapezoidal term%f",sum);
sum=0;
for(i=2;i<n-1;i=i+2)
l=l+y[i];
l=l*2;
printf("\nl:%f",l);
for(i=1;i<n;i=i+2)
q=q+y[i];
q=q*4;
printf("\nq%f",q);
sum=((y[0]+y[n-1]+q+l)*h)/3;
printf("\nsimpson's term:%f",sum);
getch();
}
