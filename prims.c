#include<stdio.h>
int cost[10][10];
int findMin(int near[10],int n)
{
    int i, min=9999,j;
    for(i=1;i<=n;i++)
    {
        if(near[i]!=0 && cost[i][near[i]]<min)
        {
            min=cost[i][near[i]];
            j=i;
        }
    }
// printf("j=%d\n",j);
    if(min!=9999)
    return j;
    else return -1;
}
void main()
{
    int n,near[10],t[10][2],mincost=0;
    int i, j,temp=999999,k,l;
    printf("Enter the no. of nodes : ");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix: \n");//Enter the weight if an edge is present else enter 99999
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            printf("%d-%d : ",i,j);
            scanf("%d",&cost[i][j]);
            cost[j][i]=cost[i][j];
            if(cost[i][j]<temp)
            {
                temp=cost[i][j];   // finding the minimum weighted edge of the tree and storing the respective i and j
                k=i;
                l=j;
            }
        }
    }
    mincost=mincost+temp;
    for(i=1;i<=n;i++)
    {
        if(cost[i][k]<cost[i][l])
            near[i]=k;    // the near array is used to represent the nearest neighbour of the unselected nodes from the selected nodes
        else
            near[i]=l;
    }
    near[k]=0;
    near[l]=0;
    t[1][1]=k;
    t[1][2]=l;
    printf("Traversing edge : %d-%d\n",t[1][1],t[1][2]);
//as two vertices are already selected only n-2 more to be selected
    for(i=2;i<n;i++)
    {
        j=findMin(near,n);
        printf("\n%d:%d\n",i,j);
        if(j!=-1)
        {
        t[i][1]=j;
        t[i][2]=near[j];
        printf("Traversing edge : %d-%d\n",t[i][1],t[i][2]);
        mincost=mincost+cost[j][near[j]];
        near[j]=0;
        for(k=1;k<=n;k++)
        {
            if(near[k]!=0 && cost[k][near[k]]>cost[k][j])
            near[k]=j;
        }
        }
    else
        break;
    }
    printf("Minimum cost : %d",mincost);
}
