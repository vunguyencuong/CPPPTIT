#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p[1001][1001] = {}, mod = 1e9+7;
void solve()
{
    
    for(int i = 1; i <= 1000; i++) p[i][1] = i;
    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 2; j <= i; j++)
        {
            p[i][j] = (p[i-1][j-1]*i) % mod;
        }
    }
}

int main()
{
    solve();
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        cout<< p[n][k] << endl;
    }
}