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
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin>> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        cout<< a[a.size()-1] << endl;
        
    }
}