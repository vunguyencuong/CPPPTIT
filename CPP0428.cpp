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
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(int i = 0; i < a.size(); i++) cout<< a[i] << " ";
        cout<< endl;
    }
}