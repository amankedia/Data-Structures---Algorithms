#include<iostream>
using namespace std;
template <class T>
T add(T ob1,T ob2)
{
    T c=ob1+ob2;
    return c;
}
int main()
{
    int x=10,y=20,z;
    z=add(x,y);
    cout<<z<<endl;
    float a=7.4,b=9.3,c;
    c=add(a,b);
    cout<<c<<endl;
    return 0;
}
