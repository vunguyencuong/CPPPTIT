#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

ll solve(int n, int k, int id, vector<vector<ll>> &res){
    if(n * 9 < k) return 0;
    if(n == 0) return k == 0;
    if(res[n][k]) return res[n][k];
    ll ans = 0;
    for(int i = id; i < 10; i++)
    {
        if(k - i >= 0){
            ans += solve(n-1,k-i,0,res);
            ans %= mod;
        }
    }
    return res[n][k] = ans;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        vector<vector<ll>> res(n+1, vector<ll>(k+1,0));
        cout<< solve(n,k,1,res) << endl;
    }
}