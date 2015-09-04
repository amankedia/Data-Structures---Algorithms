#include<stdio.h>
#include<math.h>
int main()
{
int a[20],b[20],l,r,n,mid,e,i;
printf("\nHow many elements do u want to enter:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
printf("\nEnter the element to be found:");
scanf("%d",&e);
l=0;
r=n-1;
for(i=0;i<=n/2;i++)
{
mid=(l+r)/2;
if(a[mid]==e)
{
printf("\nElement %d found at position %d:",e,mid);
break;
}
else if(a[mid]>e)
r=mid-1;
else
l=mid+1;
}
return 0;
}
