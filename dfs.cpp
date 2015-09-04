#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int n,m[10][10],reached[10],v;
int i,j;
FILE *fp;
void readgraph()
{
char* line =NULL;
size_t size=0;
int i=0;
while(getline(&line,&size,fp)!=-1)
{

char* edge;
int j=0;
while((edge=strsep(&line,"\t"))!=NULL)
{
m[i][j++]=atoi(edge);
}
i++;
}
}
void dfs(int j)
{
cout<<j<<"->";
reached[j]=1;
for(int i=0;i<n;i++)
{
if(m[j][i]!=0 && reached[i]==0)
{
dfs(i);
}
}
}
int main()
{
fp=fopen("/home/student/Desktop/ak.txt","r");
cout<<"How many vertices do u want?";
cin>>n;
readgraph();
for(i=0;i<n;++i)
{
for(j=0;j<n;j++)
{
cout<<m[i][j];
printf("\t");
}
printf("\n");
}
for(i=0;i<n;i++)
{
reached[i]=0;
}
cout<<"\nEnter starting vertex:";
cin>>v;
dfs(v);
return 0;
}

