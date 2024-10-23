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
        if(n < k)
        {
            cout<< n*(n+1)/2 << endl;
        }
        else if( n == k) cout<< n*(n-1)/2 << endl;
        else
        {
            ll ans = 0;
            ll m = n/k;
            ans = (k*(k-1)/2)*m;
            for(ll i = m*k+1; i <= n; i++)
            {
                ans += i%k;
            }
            cout<< ans << endl;
        }
    }
}