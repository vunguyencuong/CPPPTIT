#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool snt(int n)
{
    if(n < 2) return false;
    for(int i = 2;  i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
ll solve(int n)
{
    ll sum = 0;
    if(snt(n)) return n;
    for(int i = 2; i*i <= n; i++)
    {
        while(n % i == 0)
        {
            sum += i;
            n /= i;
        }
    }
    if(n != 1) sum += n;
    return sum;
}
int main()
{
    int n; cin>> n;
    int a[n+5]={};
    for(int i = 1; i <= n; i++) cin>> a[i];
    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += solve(a[i]);
    }
    cout<< ans;
}