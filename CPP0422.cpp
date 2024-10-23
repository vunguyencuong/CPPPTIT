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
        vector<ll> b;
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin>> x;
            if(x != 0) a.push_back(x);
            else b.push_back(x);
        }
        ll len1 = a.size();
        ll len2 = b.size();
        for(int i = 0; i < len1; i++) cout<< a[i] << " ";
        for(int i = 0; i < len2; i++) cout<< b[i] << " ";
        cout<< endl;

    }
}