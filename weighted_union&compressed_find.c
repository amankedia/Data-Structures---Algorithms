#include<stdio.h>
weightedunion(int a[],int i,int j)
{
    if(a[i]>a[j])
    {
        a[j]+=a[i];
        a[i]=j;
    }
    else
    {
        a[i]+=a[j];
        a[j]=i;
    }
return;
}
int cfind(int a[],int v)
{
    if(a[v]<0)
        return v;
    a[v]=cfind(a,a[v]);
    return a[v];
}
void main()
{
int i,n,r,a[20],ch,k;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter choice:\n1.Root\n2.Child\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            a[i]=-1;
            for(k=0;k<n;k++)
        printf("%d\t",a[k]);
        printf("\n");
        }

        else if(ch==2)
        {
            printf("Enter root:");
            scanf("%d",&r);
            a[i]=r;
            a[r]-=1;
            for(k=0;k<n;k++)
        printf("%d\t",a[k]);
        printf("\n");
        }
    }
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    printf("Enter roots to be combined:");
    scanf("%d %d",&i,&r);
    weightedunion(a,i,r);
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
    printf("Enter elem to be searched:");
    scanf("%d",&i);
    printf("\n%d",cfind(a,i));

}
