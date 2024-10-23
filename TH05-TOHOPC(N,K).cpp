#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int const mod = 1e9+7;
ll a[1001][1001];

int main()
{
    a[0][0] = 1;
    for(int i = 1; i < 1001; i++)
    {
        a[i][0] = 1;
        for(int j = 1; j <= 1000; j++)
        {
            a[i][j] = (a[i-1][j]%mod + a[i-1][j-1]%mod)%mod; // C(n,k) = C(n-1,k-1) + C(n-1,k)
        }
    }
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        cout<< a[n][k] << endl;
    }
}