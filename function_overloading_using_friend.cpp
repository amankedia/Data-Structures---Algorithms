#include<iostream>
using namespace std;
class a{
    int c;
    public:
        //a();
        a(int);
        friend a operator+(a &,a &);
        friend void operator++(a &);
        friend void operator++(a &,int n);
        void disp();
};
void a::disp()
{
    cout<<c<<endl;
}
a::a(int k)
{
    c=k;
}
void operator++(a &ob1)
{
    ob1.c++;
}
void operator++(a &ob1,int n)
{
    ob1.c++;
}
a operator+(a &ob1,a &ob2)
{
    a ob(0);
    ob.c=ob1.c+ob2.c;
    return ob;
}
int main()
{
    a ob(2);
    a ob1(3);
    ob=ob+ob1;
    ob.disp();
    ob++;
    ob.disp();
    ++ob;
    ob.disp();
    return 0;
}
