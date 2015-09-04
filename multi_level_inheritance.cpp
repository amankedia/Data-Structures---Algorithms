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
class B:public A{
    int b;
    public:
        B(int k,int f):A(f)
        {
            b=k;
        }
        void output();
};
class C:public B{
    int c;
    public:
        C(int k,int f,int j):B(f,j)
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
