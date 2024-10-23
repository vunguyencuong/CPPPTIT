#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int const MOD = 1e9+7;
int const nmax = 1e3+5;
vector<vector<ll>> c(nmax,vector<ll>(nmax));
void solve()
{
    for(int i = 0; i <= 1e3; i++) // k
    {
        for(int j = i; j <= 1e3; j++) // n
        {
            if(i == 0 || i == j) c[i][j] = 1;
            else c[i][j] = (c[i][j-1]%MOD + c[i-1][j-1]%MOD) % MOD;
        }
    }
} 
int main()
{
    faster();
    solve();
    int t; cin>> t;
    while(t--)
    {
        int k,n; cin>> n >> k;
        printf("%lld\n",c[k][n]);
    }
}