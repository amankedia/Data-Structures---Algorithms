#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node *lft,*rt;
}node;
void create(node *x)
{
    int c;
    printf("Enter Data: ");
    scanf("%d",&x->data);
    x->lft=NULL;
    x->rt=NULL;
    printf("If There Is A Left Node Of %d Press 1: ",x->data);
    scanf("%d",&c);
    if(c==1)    {x->lft=(node *)malloc(sizeof(node)); create(x->lft);}
    printf("If There Is A Right Node Of %d Press 1: ",x->data);
    scanf("%d",&c);
    if(c==1)    {x->rt=(node *)malloc(sizeof(node)); create(x->rt);}
}
void inorder(node *x)
{
    if(x!=NULL)
    {
        inorder(x->lft);
        printf("%d  ",x->data);
        inorder(x->rt);
    }
}
void preorder(node *x)
{
    if(x!=NULL)
    {
        printf("%d  ",x->data);
        preorder(x->lft);
        preorder(x->rt);
    }
}
void postorder(node *x)
{
    if(x!=NULL)
    {
        postorder(x->lft);
        postorder(x->rt);
        printf("%d  ",x->data);
    }
}
int main()
{
    node *hd;
    int c;
    printf("Enter Data For Root Node: ");
    hd=(node *)malloc(sizeof(node));
    scanf("%d",&hd->data);
    hd->lft=NULL;
    hd->rt=NULL;
    printf("If There Is A Left Node Of %d Press 1: ",hd->data);
    scanf("%d",&c);
    if(c==1)    {hd->lft=(node *)malloc(sizeof(node)); create(hd->lft);}
    printf("If There Is A Right Node Of %d Press 1: ",hd->data);
    scanf("%d",&c);
    if(c==1)    {hd->rt=(node *)malloc(sizeof(node)); create(hd->rt);}

    printf("\nDisplaying The Tree:");
    printf("\nIn-Order Traversal:  ");
    inorder(hd);
    printf("\nPre-Order Traversal:  ");
    preorder(hd);
    printf("\nPost-Order Traversal:  ");
    postorder(hd);
    return 0;
}

