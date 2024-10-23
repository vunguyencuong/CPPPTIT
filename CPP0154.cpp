#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n;
        ll k;
        cin>> n >> k;
        ll ans = 0;
        if(n < k)
        {
            ans = n*(n+1)/2;
        }
        else if( n == k) ans = n*(n-1)/2;
        else
        {
            ll m = n/k;
            ans = (k*(k-1)/2)*m;
            for(ll i = m*k+1; i <= n; i++)
            {
                ans += i%k;
            }
        }
        if(ans == k) cout<< 1 << endl;
        else cout<< 0 << endl;
    }
}