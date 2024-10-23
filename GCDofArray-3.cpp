#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const MAX = 1e9+7;

ll pow(ll a, ll b)
{
    if(b == 0) return 1;
    if(b % 2 == 0) return (pow(a,b/2)%MAX)*(pow(a,b/2)%MAX);
    else return ((pow(a,b/2)*a)%MAX)*(pow(a,b/2)%MAX);
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n+1];
        ll ucln;
        ll tich = 1;
        for(int i = 0; i < n; i++) cin>> a[i];
        for(int i = 0; i < n-1; i++)
        {
            ucln = __gcd(a[i],a[i+1])%MAX;
        }
        for(int i = 0; i < n; i++)
        {
            tich = (tich*a[i])%MAX;
        }
        ll ans = pow(tich,ucln);
        cout<< ans << endl;
    }
}