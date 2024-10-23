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
        vector<ll> a(10,0);
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin>> x;
            while(x)
            {
                int y = x%10;
                x /= 10;
                a[y]++;
            }
        }
        for(int i = 0; i <= 9; i++)
        {
            if(a[i] != 0) cout<< i << " ";
        }
        cout<< endl;
    }
}