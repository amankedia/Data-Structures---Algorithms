#include<stdio.h>
#include<stdlib.h>

 typedef struct node
 {
 	 int coeff,pow;
 	 struct node *next;
 }node;

 void multiply(node *,node *,int,int);
 void display(node *);

int main()
{
	  int i,n,m;
	  node *head,*p,*q,*head1,*x,*y;
	  head=(node*)malloc(sizeof(node));
	  head1=(node*)malloc(sizeof(node));
	  printf("\n Enter the coefficients of the heads!\n");
	  scanf("%d",&head->coeff);
	  scanf("%d",&head1->coeff);
	  printf("\n Enter the power of the heads!\n");
	  scanf("%d",&head->pow);
	  scanf("%d",&head1->pow);
	  head->next=NULL;
	  head1->next=NULL;
	  p=head;
	  x=head1;
	  printf("\n Enter the total no. of terms!\n");
	  scanf("%d",&n);
	  printf("\n Enter the total no. of terms in 2nd plist!\n");
	 scanf("%d",&m);
	 for(i=1;i<n;i++)
	{
		q=(node*)malloc(sizeof(node));
		printf("\n Enter the coefficients and power of each term!\n");
		scanf("%d",&q->coeff);
		scanf("%d",&q->pow);
		q->next=NULL;
		p->next=q;
		p=q;
	 }
   display(head);
   for(i=1;i<m;i++)
  {
		y=(node*)malloc(sizeof(node));
		 printf("\n Enter the coefficient and power of each term!\n");
		scanf("%d",&y->coeff);
		 scanf("%d",&y->pow);
		 y->next=NULL;
		 x->next=y;
		x=y;
   }
   display(head1);
   multiply(head,head1,n,m);
 }

void multiply(node *q,node *y,int n,int m)
{
	 node *p,*x,*temp,*prslt=NULL,*plast=NULL,*r,*s,*temp1,*plast1=NULL,*prslt1=NULL;
	int i,j,newcoeff,newpow,newcoeff1,newpow1,flag=1;
	 p=q;
	x=y;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=m;j++)
  {   newcoeff=p->coeff*x->coeff;
      newpow=p->pow+x->pow;
      x=x->next;
      temp=(node*)malloc(sizeof(node));
      temp->coeff=newcoeff;
      temp->pow=newpow;
      temp->next=NULL;
      if(prslt==NULL)
      {
      prslt=temp;
      plast=temp;
      }
      else
     {
      plast->next=temp;
      plast=temp;
      }
  }
      x=y;
      p=p->next;
}
    printf("\nprslt");
      display(prslt);
   s=prslt;
   while(s!=NULL)
   {
       flag=1;

      temp1=(node*)malloc(sizeof(node));
      temp1->coeff=s->coeff;
      temp1->pow=s->pow;
      temp1->next=NULL;
      if(prslt1==NULL)
      {
          prslt1=temp1;
          plast1=prslt1;
      }
      else
      {
          for(r=prslt1;r!=NULL;r=r->next)
          {
              if(r->pow==s->pow)
              {
                  r->coeff=r->coeff+s->coeff;
                  flag=0;
              }
          }
          if(flag==1)
          {
              plast1->next=temp1;
            plast1=temp1;
            }

        }
    s=s->next;
    }
    printf("\nprslt1");
    display(prslt1);
   }
   void display(node *p)
   {
     node *q;
     q=p;
     while(q!=NULL)
     {
      printf("%dx^%d ",q->coeff,q->pow);
      q=q->next;
      }
     }
