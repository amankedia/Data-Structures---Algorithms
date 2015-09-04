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
class C:public A{
    int c;
    public:
        C(int k,int f):A(f)
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
    C ob(10,20);
    B ob1(40,50);
    ob.output();
    ob.A::output();
    ob1.output();
    ob1.A::output();
    return 0;
}
