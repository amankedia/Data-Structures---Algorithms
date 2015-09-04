#include<iostream>
using namespace std;
class A{
    public:
        virtual void out()=0;
};
class B:public A{
    public:
        void out()
        {
            cout<<"HI\n";
        }
};
class C:public A{
    public:
        void out()
        {
            cout<<"Hello\n";
        }
};
int main()
{
    A *ptr;
    B ob;
    C ob1;
    ptr=&ob;
    ptr->out();
    ptr=&ob1;
    ptr->out();
    return 0;
}
