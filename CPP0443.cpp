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
        cin>> n;
        vector<ll> a;
        for(int i = 0; i < n-1; i++)
        {
            ll x;
            cin>> x;
            a.push_back(x);
        }
        ll sum = 0;
        for(int i = 0; i < n-1; i++)
        {
            sum += a[i];
        }
        ll sum1 = n*(n+1)/2;
        //cout<< sum << " " << sum1;
        cout<< sum1 - sum << endl;
    }
}