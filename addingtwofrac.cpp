#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;
typedef long long LL;

#define forall(i,a,b)for(int i=(a);i<(long long)(b);i++)
#define GCD(a,b)abs(__gcd(a,b))
string print(LL p, LL q){
    stringstream ss;
    ss<<p;
    if(p!=0 && q != 1)
        ss << '/' << q;
    return ss.str();
}

int main(){
    int t;
    string s;
    getline(cin, s);
    sscanf(s.c_str(), "%d", &t);
    while(t--){
        LL a, b, c, d, p, q, g1, g2, g3;
        // Read fractions a/b and c/d from input
        cin>>a;
        char ch = cin.peek();
        if(ch=='/')
            cin>>ch>>b;
        else
            b=1;
        cin >> c;
        ch = cin.peek();
        if(ch == '/')
            cin >> ch >> d;
        else
            d = 1;

        // Sanitize the input fractions
        g1 = GCD(a, b);
        a /= g1; b /= g1;
        g2 = GCD(c, d);
        c /= g2; d /= g2;
        if(b < 0) { a *= -1; b *= -1; }
        if(d < 0) { c *= -1; d *= -1; }

        // Compute answer
        q = (b*d)/GCD(b, d);
        p = a*q/b + c*q/d;
        g3 = GCD(p, q);
        p /= g3; q /= g3;
        cout << print(p, q) << endl;
    }
    return 0;
}
