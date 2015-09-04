#include<stdio.h>

typedef struct edge
{
    int u;
    int v;
    int cost;
}edge;
int a[20],nv,ne;
wunion(int i,int j)
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
cfind(int i)
{
    if (a[i] < 0)
        return i;
    a[i] = cfind(a[i]);
    return a[i];
 }
initdisset(int k)
{
    int i;
    for(i=0;i<=k;i++)
        a[i]=-1;
}
int edgcmp(const void* arg1, const void* arg2)
{
edge* j1 = (edge*)arg1;
edge* j2 = (edge*)arg2;
return (j1->cost - j2->cost);
}
/*int edgcmp(const void* arg1,const void* arg2)
{
    egde* j1=(edge*)arg1;
    edge* j2=(edge*)arg2;
    return (j1->cost - j2->cost);
}*/
Kruskal(edge edges[])
{
    int i,k=0,x,y;
    edge MST[50];
    initdisset(nv);
    qsort(edges,ne,sizeof(edge),edgcmp);
    for(i=0;i<ne;i++)
    {
        x=cfind(edges[i].u);
        y=cfind(edges[i].v);
        if(x!=y)
        {
            MST[k].u=edges[i].u;
            MST[k++].v=edges[i].v;
            if(++k==nv-1)
            break;
            wunion(x,y);
        }
    }
    for(i=0;i<k-1;i+=2)
        printf("\n%d\t%d",MST[i].u,MST[i].v);
}
void main()
{
    edge edges[50];
    int i;
    edge *ptr=edges;
    printf("No. of vertices:");
    scanf("%d",&nv);
    printf("No. of edges:");
    scanf("%d",&ne);
    for(i=0;i<ne;i++)
    {
        scanf("%d",&edges[i].u);
        scanf("%d",&edges[i].v);
        scanf("%d",&edges[i].cost);
    }

    Kruskal(edges);
}
