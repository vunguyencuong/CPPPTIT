#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const MOD = 1e9+7;
int const nmax = 1e3+5;
vector<vector<ll>> c(nmax,vector<ll>(nmax));
int main()
{
    for(int i = 0; i <= 1e3; i++)
    {
        c[i][0] = 1;
        for(int j = i+1; j <= 1e3; j++) c[i][j] = 0;
    }
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            c[i][j] = (c[i-1][j] + c[i-1][j-1]) % MOD;
        }
    }
    cout<< c[4][3];
} 