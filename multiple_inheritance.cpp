#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(int k)
        {
            a=k;
        }
        void output();
};
class B{
    int b;
    public:
        B(int k)
        {
            b=k;
        }
        void output();
};
class C:public A,public B{
    int c;
    public:
        C(int k,int f,int j):A(f),B(j)
        {
            c=k;
        }
        void output();
};
void A::output()
{
    cout<<a<<endl;
}
void B::output()
{
    cout<<b<<endl;
}
void C::output()
{
    cout<<c<<endl;
}
int main()
{
    C ob(10,20,30);
    ob.output();
    ob.B::output();
    ob.A::output();
    return 0;
}
