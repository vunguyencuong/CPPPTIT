#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,s=0,t=0;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(ll i=2;i*i<=n;i++){
        ll d=0;
        while(n%i==0){
            n/=i;
            d++;
        }
        if(d%2==0) s+=d;
        else t+=d;
    }
    if(n!=1) t++;
    cout<<s<<endl<<t;
    return 0;
}
