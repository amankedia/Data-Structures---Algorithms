#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
bool prime[10000001];
int hash [10000001];
void sieve()
{
LL i,j,k;
for(i=2;i<3164;i++)
{
if(!prime[i])
{
for(j=i*i;j<=10000000;j=j+i)
{
prime[j]=1;
}
}
}
}
void rom()
{
    int j,r;
    for(int i=2;i<=10000000;i++)
    {
        if(prime[i]==0)
            hash[i]=1;
        else
        {
            j=2;
            r=i/2;
            while(j<=r)
            {
                if((prime[j]==0)&&(i%j==0))
                   hash[i]++;
                j++;
            }
        }
    }
}
int main()
{
sieve();
rom();
LL t;
scanf("%lld",&t);
while(t--)
{
    int a,b,k,c=0;
    cin>>a>>b>>k;
    for(int i=a;i<=b;i++)
    {
        /*cnt=0;
        if(prime[i]==0)
            cnt=1;
        else
        {
            j=2;
            r=i/2;
            while(j<=r)
            {
                if((prime[j]==0)&&(i%j==0))
                   cnt++;
                j++;
            }
        }*/
        if(hash[i]==k)
            c++;
    }
    cout<<c<<endl;
}
return 0;
}
