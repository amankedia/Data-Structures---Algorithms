#include<iostream>
using namespace std;
class aman
{
    public:
        void add(int,int);
        double add(double,double);
        int add(int[]);
};
void aman :: add(int a,int b)
{
    int c=a+b;
    cout<<c<<endl;
}
double aman :: add(double a,double b)
{
    double c=a+b;
    return c;
}
int aman :: add(int a[])
{
    int sum=0;
    for(int i=0;i<5;i++)
        sum+=a[i];
    return sum;
}
int main()
{
    int arr[5]={0,1,2,3,4};
    aman obj;
    obj.add(10,20);
    double d=obj.add(10.6,20.9);
    cout<<d<<endl;
    int f=obj.add(arr);
    cout<<f<<endl;
    return 0;
}
