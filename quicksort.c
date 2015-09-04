#include<stdio.h>
void quicksort(int a[20],int c,int d);
int partition(int a[20],int d,int c);
int main()
{
int a[20],b[20],l,r,n,i;
printf("\nHow many elements do u want to enter:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
l=0;
r=n-1;
quicksort(a,l,r);
for(i=0;i<n;++i)
printf("\n\n %d",a[i]);
return 0;
}
void quicksort(int a[20],int l,int r)
{
int p;
if (l<r)
{
p=partition(a,l,r);
quicksort(a,l,p-1);
quicksort(a,p+1,r);
}
}
int partition(int a[20],int l,int r)
{
int pivot=a[r],i=l-1,j,temp;
for(j=l;j<=r-1;j++)
{
if(a[j]<=pivot)
{
i=i+1;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
temp=a[i+1];
a[i+1]=a[r];
a[r]=temp;
return i+1;
}
