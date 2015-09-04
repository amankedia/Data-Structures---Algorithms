#include<iostream>
using namespace std;
class b;
class a{
    int c;
    public:
        //a();
        a(int);
        friend void add(a&,b&);
};
class b{
    int d;
    public:
        //b();
        b(int);
        friend void add(a&,b&);
};
a::a(int k)
{
    c=k;
}
b::b(int k)
{
    d=k;
}
void add(a &ob1,b &ob2)
{
    cout<<ob1.c+ob2.d;
}
int main()
{
    a ob(2);
    b ob1(3);
    add(ob,ob1);
    return 0;
}
