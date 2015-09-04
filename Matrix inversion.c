#include<stdio.h>
#include<math.h>
float determinant(float a[10][10],int n)
{
float det=1,p;
int j,i,k;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i<j)
{
p=-(a[j][i]/a[i][i]);
for(k=0;k<n;k++)
{
a[j][k]=a[j][k]+p*a[i][k];
}
}
}}
for(i=0;i<n;i++)
det=det*a[i][i];
return det;
}
float inversion(float a[10][10],int i,int j,int n)
{
int k,w,p=0,q=0;
float b[10][10],de;
for(k=0;k<n;k++)
{
if(k==i)
continue;
else
{
for(w=0;w<n;w++)
{
if(w==j)
continue;
else
{
b[p][q]=a[k][w];
q++;
}
}
}
p++;
q=0;
}
de=determinant(b,n-1)*pow(-1,i+j);
return de;
}
int main()
{
int i,j,r,c;
float a[10][10],b[10][10],tr[10][10],inv[10][10],det=1;
printf("\nEnter the no of rows:");
scanf("%d",&r);
printf("\nEnter the no of columns:");
scanf("%d",&c);
printf("\nEnter the matrix:");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%f",&a[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
tr[i][j]=inversion(a,i,j,r);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
inv[j][i]=tr[i][j];
det=determinant(a,r);
if(det==0)
printf("\nSingular Matrix");
else
{
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
printf("%f\t",inv[i][j]/det);
}}
return 0;
}
