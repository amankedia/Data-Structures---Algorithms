#include<stdio.h>
#include<stdlib.h>
void initdis(int *p,int n)
{
int i;
for(i=1;i<=n;i++)
	p[i]=-1;
}

void weightedunion(int *p,int u,int v)
{
if(p[u]>p[v])
{
	p[v]+=p[u];
	p[u]=v;
}
else{
	p[u]+=p[v];
	p[v]=u;
}
}

int compressedfind(int *p,int v)
{
if(p[v]<0)
	return v;
p[v]=compressedfind(p,p[v]);
return p[v];
}

int main()
{
int n,c,p[50],u,v,l,i;
printf("Enter the no of elements u want:");
scanf("%d",&n);
initdis(p,n);

do{
printf("\nWhat do u want to do?\n1.For union\n2.For findinding root\n3.Exit\n");
scanf("%d",&c);
switch(c)
{
case 1:printf("Enter the nodes to perform the union:");
		scanf("%d%d",&u,&v);
		weightedunion(p,u,v);
		printf("\nThe array after union of %d and %d is:",u,v);
		for(i=1;i<=n;i++)
			printf("%d ",p[i]);
		printf("\n");
		break;
case 2:printf("\nEnter the node whose root is to be find:");
		scanf("%d",&u);
		l=compressedfind(p,u);
		printf("\nThe root of %d is:%d\n",u,l);
		break;
}
}while(c!=3);
return 0;
}
