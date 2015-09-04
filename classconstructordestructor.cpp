#include<iostream>
using namespace std;
class aman
{
    int a;
    char b;
    float c;
    public:
        aman();
        aman(char,int,float);
        aman(aman &);
        ~aman();
        void displa();
};
aman :: aman()
{
    this->a=0;
    this->b='e';
    this->c=0.0;
}
aman :: aman(char b1,int a1,float c1)
{
    this->a=a1;
    this->b=b1;
    this->c=c1;
}
aman :: aman(aman &obj)
{
    this->a=obj.a;
    this->b=obj.b;
    this->c=obj.c;
}
void aman :: displa()
{
    cout<<"\n"<<a;
    cout<<"\n"<<b;
    cout<<"\n"<<c;
}
aman :: ~aman()
{
    a=NULL;
    b=NULL;
    c=NULL;
    cout<<"\nDestroying object";
}
int main()
{
    aman obj1;
    aman obj2('d',50,3.12);
    //aman obj3 = ('M',100,3.12);
    aman obj4(obj1);
    obj1.displa();
    obj2.displa();
    //obj3.displa();
    obj4.displa();
    return 0;
}
