#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void input();
        void output();
};
class B:public virtual A{
    int b;
    public:
        void input();
        void output();
};
class C:public virtual A{
    int c;
    public:
        void input();
        void output();
};
class D:public B,public C{
    int d;
    public:
        void input();
        void output();
};
void A::input()
{
    cout<<"Enter value of a:";
    cin>>a;
}
void B::input()
{
    cout<<"Enter value of b:";
    cin>>b;
}
void C::input()
{
    cout<<"Enter value of c:";
    cin>>c;
}
void D::input()
{
    cout<<"Enter value of d:";
    cin>>d;
}
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
void D::output()
{
    cout<<d<<endl;
}
int main()
{
    D ob;
    ob.A::input();
    ob.B::input();
    ob.C::input();
    ob.input();
    ob.output();
    ob.C::output();
    ob.B::output();
    ob.A::output();
    return 0;
}
