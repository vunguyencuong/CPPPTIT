#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,m;
        cin>> n >> m;
        vector<ll> a;
        vector<ll> b;
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin>> x;
            a.push_back(x);
        }
        for(int i = 0; i < m; i++)
        {
            ll x;
            cin>> x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans = a[n-1]*b[0];
        cout<< ans << endl;
    }
}