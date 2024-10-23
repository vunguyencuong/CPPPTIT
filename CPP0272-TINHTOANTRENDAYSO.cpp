#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const nmax = 100;
ll const mod = 1e9+7;
int n;
ll a[nmax]={};
ll Pow(ll hx, ll gx)
{
    if(hx == 0) return 0;
    if(gx == 0) return 1;
    if(gx == 1) return hx%mod;
    ll a = Pow(hx,gx/2)%mod;
    if(gx % 2 == 0) return ((a%mod)*(a%mod))%mod;
    else return (((a*hx)%mod)*(a%mod))%mod;
}
void solve()
{
    cin>> n;
    ll hx = 1;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        hx *= a[i];
        hx %= mod;
    }
    ll gx = a[0] ;
    for(int i = 1; i < n; i++)
    {
        gx = __gcd(a[i],gx);
    }
    cout<< Pow(hx,gx) << endl;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}
