#include<iostream>
using namespace std;
class dist{
    int f, i;
    public:
        dist();
        dist(int,int);
        dist operator +(dist &);
        void display();
};
dist :: dist()
{
    f=0;
    i=0;
}
dist :: dist(int a,int b)
{
    f=a;
    i=b;
}
dist dist :: operator+(dist &d2)
{
    dist d3;
    d3.f=f+d2.f;
    d3.i=i+d2.i;
    if(d3.i>=12)
    {
        d3.f+=(d3.i/12);
        d3.i=d3.i%12;
    }
    return d3;
}
void dist:: display()
{
    cout<<f<<" ft "<<i<<endl;
}
int main()
{
    dist d1(18,14),d2(7,4),d3;
    d1=d1+d2;
    d1.display();
    return 0;
}
