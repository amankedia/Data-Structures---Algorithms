#include<stdio.h>
#include<stdlib.h>
int a[20],n;
typedef struct job
{
int id;
int profit;
int deadline;
}job;
int jobCmp(const void* arg1, const void* arg2)
{
job* j1 = (job*)arg1;
job* j2 = (job*)arg2;
return (j2->profit - j1->profit);
}
min(int a,int b)
{   if(a>b)
return b;
else
    return a;
}
CFind(int i)
{     if (a[i] < 0)
return i;
a[i] = CFind(a[i]);
return a[i];
 }
 Wunion(int i,int j)
{       if(a[i]>a[j])
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
initDisjointSet(int b)
{
int i;
for(i=0;i<=b;i++)
a[i]=-1;
}
JobSchedule(job jobs[])
{
int f[50],l,ji[50],m,b,q,k,i;
qsort(jobs,n,sizeof(job),jobCmp);
b = min(n,4);
initDisjointSet(b);
k = 0;
for (i = 0 ;i<= b;i++)
f[i] = i;
for (i = 0 ;i<= (n-1);i++)
    {
        q = CFind(min(5, jobs[i].deadline));
        if (f[q] != 0)
        {
            ji[k++] = jobs[i].id;
            m = CFind(f[q] - 1);
            Wunion(m, q);
            f[q] = f[m];
        }

    }
    for(l=0;l<b;l++)
                printf("%d\t",ji[l]);
}
void main()
{
int i;
struct job j[60];
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&j[i].id);
        scanf("%d",&j[i].profit);
        scanf("%d",&j[i].deadline);
    }
JobSchedule(j);
}
