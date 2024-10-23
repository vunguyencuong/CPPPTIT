#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
// 2^2 * 3^2 = (2*3)^2
// 2^2 * 3^4 = (2*3^2)^2
// 2^3 * 3^2 * 2 = 2^4 * 3^2 = (2^2*3)^2
// 2^3 * 2 * 3*2 * 7^1 * 7 = 2^4 * 3^2 * 7^2
ll check(ll n){
    ll k=1;
    for(ll i=2;i*i<=n;i++){
        ll dem=0;
        while(n%i==0)
            n/=i,dem++;
        if(dem%2!=0) k*=i; // i^le *i = i^(le+1) = i^chan
    }
    if(n!=1) k*=n; // n^1 * n = n^2 
    return k;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    cout<<check(n);
    return 0;
} 
