#include<stdio.h>

void heapify(int a[],int i,int n)
{
	int l=2*i,r=2*i+1,min=i;
	if(l<=n && a[l]<a[min])
	min=l;
	if(r<=n && a[r]<a[min])
	min=r;
	if(min!=i)
	{
		int t=a[min];
		a[min]=a[i];
		a[i]=t;
		heapify(a,min,n);
	}
}

void buildheap(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	heapify(a,i,n);
}

int extractmin(int a[],int* n)
{
	int min=a[1];
	a[1]=a[*n];
	*n=*n-1;
	heapify(a,1,*n);
	return min;
}

void decreasekey(int a[],int i,int val)
{
	while(i>1 && a[i/2]>val)
	{
	  a[i]=a[i/2];
	  i=i/2;
	}
	a[i]=val;
}

void insert(int a[],int* n,int val)
{
	int i;
	*n=*n+1;
	a[*n]=val;
	decreasekey(a,*n,val);
	printf("Heap elements-");
	for(i=1;i<=*n;i++)
	printf("%d\t",a[i]);
}

int main()
{
	int a[20],n,i,c,val,f;
	printf("Enter number of elements-");
	scanf("%d",&n);
	printf("Enter elements-");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);	
	buildheap(a,n);
	printf("Heap elements-");
	for(i=1;i<=n;i++)
	printf("%d\t",a[i]);
	do
	{
		printf("Enter choice-\n1.Insert\n2.Extract Minimmum\n3.Find\n4.Exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: 
				printf("Enter new value-");
				scanf("%d",&val);
				insert(a,&n,val);
				break;
			case 2:
				printf("After Extraction-");
				printf("%d\n",extractmin(a,&n));
				break;
			case 3: 
				f=1;
				printf("Enter value-");
				scanf("%d",&val);
				for(i=1;i<=n;i++)
				if(a[i]==val)
				{
				printf("Element found at %d\n",i);
				f=0;
				}
				if(f)printf("Element not found\n");
				break;
			case 4:
				break;
			default:
				printf("Wrong Choice\n");
				break;
		}
	}while(c!=4);
	return 0;
}                                    
