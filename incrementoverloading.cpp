#include<iostream>
using namespace std;
class incr{
    int a,b;
    public:
        incr();
        void operator++();
        void operator++(int n);
        void display();
        incr operator+(incr &);
        incr operator-(incr &);
        incr operator=(incr &);
};
incr :: incr()
{
    a=10;
    b=20;
}
void incr :: operator++()
{
    a++;
    b++;
}
void incr :: operator++(int n)
{
    cout<<"Inside pre";
    a++;
    b++;
}
void incr :: display()
{
    cout<<a<<" "<<b<<endl;
}
incr incr :: operator+(incr &d2)
{
    incr d3;
    d3.a=a+d2.a;
    d3.b=b+d2.b;
    return d3;
}
incr incr :: operator-(incr &d2)
{
    incr d3;
    d3.a=a-d2.a;
    d3.b=b-d2.b;
    return d3;
}
incr incr :: operator=(incr &d2)
{
    a=d2.a;
    b=d2.b;
    return *this;
}
int main()
{
    incr obj,obj2,obj3;
    obj++;
    obj.display();
    ++obj;
    obj.display();
    /*obj=(obj+obj2);
    obj.display();
    obj=(obj-obj2);
    obj.display();*/
    obj3=obj;
    obj3.display();
    return 0;
}
