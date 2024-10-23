#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const MAX = 1e9+7;
ll pow(int x, int n)
{
    if(n == 0) return 1;
    if(n == 1) return x%MAX;
    ll y = pow(x,n/2)%MAX;
    if(n % 2 == 0) return (y*y)%MAX;
    else return ((y*y)%MAX * x%MAX)%MAX;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,x;
        cin>> n >> x;
        int a[n+5]={};
        for(int i = 0; i < n; i++) cin>> a[i];
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            ll m = pow(x,n-i-1)%MAX;
            ans = (ans%MAX + a[i]%MAX*m)%MAX;
        }
        cout<< ans << endl;
    }
}