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
        vector<ll> a(n+5,-1);
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin>> x;
            if(x >= 0 && x < n) a[x] = x;
        }
        for(int i = 0; i < n; i++) cout<< a[i] << " ";
        cout<< endl;
    }
}