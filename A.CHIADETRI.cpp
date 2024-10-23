#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Mod = 1e9+7;

long long Pow(ll n, ll k)
{
    if(k == 0) return 1;
    if(k == 1) return n;
    if(n == 1) return 1;
    if(k % 2 == 0) return Pow(n*n%Mod,k/2)%Mod;
    else return n*Pow(n*n%Mod,k/2)%Mod; 
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n,k;
        cin>> n >> k;
        cout<< Pow(n,k) << endl;
    }
}