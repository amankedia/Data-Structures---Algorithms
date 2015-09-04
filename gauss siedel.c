#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float a[10][10],b[10],x[10],y[10];
   int i,j,k,n,m,sum=0,temp,s=0,r;
   printf("enter the order");
   scanf("%d",&n);
   printf("enter the coefficient matrix");
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     scanf("%f",&a[i][j]);
   }

   printf("enter the constants");
   for(i=0;i<n;i++)
   {
   scanf("%f",&b[i]);
   }

   for(i=0;i<n;i++)
   {
   sum=0;
   for(j=0;j<n;j++)
   {
   if(i!=j)
   sum=sum+fabs(a[i][j]);
   }
   if(fabs(a[i][i])<sum)
   {
     for(k=0;k<n;k++)
     {
     temp=a[i][k];r=b[i];
     a[i][k]=a[(i+1)%n][k];b[i]=b[(i+1)%n];
     a[(i+1)%n][k]=temp;b[(i+1)%n]=r;
     }
     i=((i+1)%n)-1;
   }
   }
   printf("enter the initial values");
   for(i=0;i<n;i++)
   {
      scanf("%f",&x[i]);
   }
   printf("enter the no. of iterations");
   scanf("%d",&m);
   while(m>0)
   {
   for(i=0;i<n;i++)
   {
    y[i]=b[i]/a[i][i];
     for(j=0;j<n;j++)
     {
      if(j!=i)
{
    y[i]=y[i]-((a[i][j]/a[i][i])*x[j]);
          }
          x[i]=y[i];
     }
     printf("x%d=%.3f\t",i+1,x[i]);
   }
   printf("\n\n");
   m--;
   }
}
