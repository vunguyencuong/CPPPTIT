#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

ll solve(int a, ll b)
{
    if(b == 0) return 1;
    ll x = solve(a,b/2);
    if(b % 2 == 0)
    {
        return x%mod*x%mod;
    }
    else{
        return a*(x%mod*x%mod) % mod;
    }
}

int main()
{
    while(true)
    {
        int a; ll b; cin>> a >> b;
        if(a == 0 && b == 0) return 0;
        else{
            cout<< solve(a,b) << endl;
        }
    }
}