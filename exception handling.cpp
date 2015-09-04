#include<iostream>
using namespace std;
class num{
    int n;
    public:
        class positive_exc{};
        class negative_exc{};
        num(int ni)
        {
            if(ni>0)
                throw positive_exc();
            else if(ni<0)
                throw negative_exc();
            else
                n=ni;
        }
        void output()
        {
            cout<<n<<endl;
        }
};
int main()
{
    try
    {
        int k;
        cout<<"enter 0:";
        cin>>k;
        num ob(k);
        ob.output();
    }
    catch(num::positive_exc)
    {
        cout<<"posi";
    }
    catch(num::negative_exc)
    {
        cout<<"nega";
    }
    return 0;
}
