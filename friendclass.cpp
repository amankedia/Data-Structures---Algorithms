#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int);
    friend class min1;
};
A :: A(int c)
{
    a=c;
}
class min1{
    public:
    int mini(A x,A y);
};
int min1::mini(A d,A f)
{
    return d.a>f.a?f.a:d.a;
}
int main()
{
    A ob1(10),ob2(20);
    min1 m;
    cout<<m.mini(ob1,ob2);
    return 0;
}
