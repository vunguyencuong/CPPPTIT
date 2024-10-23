#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
// (a^b)%m = (a%m)^b
ll modu(string a, ll m)
{
    ll mod = 0;
    for(int i = 0; i < a.length(); i++)
    {
        mod = (mod*10 + a[i]-'0')%m;
    }
    return mod;
}
ll pow(string a, ll b, ll m)
{
    if(b == 0) return 1;
    if(b == 1) return modu(a,m);
    ll c = pow(a,b/2,m)%m;
    if(b%2 == 0) return (c*c)%m;
    else return ((c*c)%m*modu(a,m))%m;
}
int main()
{
    faster();
    int t;
    cin>> t;
    while(t--)
    {
        string a;
        ll b,m;
        cin>> a;
        cin>> b >> m;
        cout<< pow(a,b,m) << endl;
    }
}