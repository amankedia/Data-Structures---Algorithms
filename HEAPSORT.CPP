#include<stdio.h>
#include<stdlib.h>
void heapify(int *a,int i,int n)
{
int l,large=i, r,t;
l=2*i+1;
r=2*i+2;
if(l<n && a[i]>a[l])
large=l;
if(r<n &&a[r]<a[large])
large=r;
if(large!=i)
{
    t=a[i];
    a[i]=a[large];
    a[large]=t;
    heapify(a,i,n);
}
}
void buidheap(int *a,int n)
{
int i;
for(i=(n-1)/2;i>=0;i--)
{
heapify(a,i,n);
}
}
void priorityqueue(int *a,int i,int n)
{
int big;
if(i>0)
{
    big=a[0];
    a[0]=a[n-1];
    n--;
    printf("%d\n",big);
    buidheap(a,n);
    priorityqueue(a,i-1,n);
}
else printf("%d",a[0]);
}
int main()
{
int i,a[20],n;
printf("enter the input elements");
scanf("%d",&n); for(i=0;i<n;i++){ scanf("%d",& a[i]);
}


buidheap(a,n);
printf("\n");
/*for(i=0;i<n;i++){
printf("%d", a[i]);
}*/
i=n-1;
priorityqueue(a,i,n);
return 0;
}
