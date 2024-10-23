#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll x, ll y, ll p)
{
    if(y == 1) return x%p;
    ll s = solve(x,y/2,p)%p;
    if(y % 2 == 0) return (s*s)%p;
    else return (((x*s)%p)*s)%p;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll x,y;
        ll p;
        cin>> x >> y >> p;
        ll ans = solve(x,y,p);
        cout<< ans << endl;
    }
}