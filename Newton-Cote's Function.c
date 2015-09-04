#include<stdio.h>
#include<math.h>
float func(float x)
{
 float y;
 y=(4*x)-(3*x*x);
 return y;

}
void main()
{
  float a,b,h,y,s=0,sum=0;
  int i,ch,n;
  printf("enter the lower limit");
  scanf("%f",&a);
  printf("enter the upper limit");
  scanf("%f",&b);
  printf("enter the value of n");
  scanf("%d",&n);
  h=(b-a)/n;
  printf("enter the choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    for(i=1;i<=(n-1);i++)
  {
   s=s+func(a+i*h);
  }
  y=(func(a)+func(b)+2*s)*h/2;
  printf("the trapezoidal value is %f",y);
  break;
  case 2:
          for(i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
            sum=sum+func(a+i*h);

        }
        else
        {
            s=s+func(a+i*h);
        }

    }
    y=(func(a)+func(b)+4*s+2*sum)*(h/3);
    printf(" the simpsons 1/3 value is %f",y);
    break;
  case 3:
    for(i=1;i<=n-1;i++)
        {
        if(i%3==0)
        {
            sum=sum+func(a+i*h);

        }
        else
        {
            s=s+func(a+i*h);
        }

    }
    y=(func(a)+func(b)+3*s+2*sum)*((3*h)/8);
    printf(" the simpsons 3/8 value is %f",y);
    break;

}
}
