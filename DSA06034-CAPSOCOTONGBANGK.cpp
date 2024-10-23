#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t; cin>> t;
    while(t--)
    {
        ll n,k; cin>> n >> k;
        map<ll, ll> mp;
        ll a[n+5] = {};
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            mp[a[i]]++;
        }
        ll count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] * 2 == k)
            {
                ll m = mp[a[i]];
                count += m*(m-1)/2;
                mp[a[i]] = 0;
            }
            else
            {
                count += mp[a[i]]*mp[k-a[i]];
                mp[a[i]] = 0, mp[k-a[i]] = 0;
            }
        }
        cout<< count << endl;
    }
}