#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int UCLN(ll a, ll b)
{
    while(b)
    {
        ll tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll a,b;
        cin>> a >> b;
        int m = UCLN(a,b);
        cout<< (a*b)/m << " " << m << endl;
    }
}