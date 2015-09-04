#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int n,m[10][10],queue[10],rear=-1,front=0,visited[10],v;
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
void bfs(int j)
{
for(i=0;i<n;i++)
{
if(m[j][i]!=0 && visited[i]==0)
queue[++rear]=i;
}
if(front<=rear)
{
visited[queue[front]]=1;
front++;
bfs(queue[front-1]);
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
visited[i]=0;
queue[i]=0;
}
cout<<"\nEnter starting vertex:";
cin>>v;
visited[v]=1;
bfs(v);
cout<<"\n visited are:";
for(i=0;i<n;++i)
if(visited[i])
cout<<i<<"\t";
else
cout<<"bfs not possible";
return 0;
}

