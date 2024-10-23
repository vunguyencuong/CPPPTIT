#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll multi(ll a, ll b, ll c)
{
    if(b == 0) return 1;
    if(b == 1) return a%c;
    ll d = multi(a,b/2,c)%c;
    if(b % 2 == 0) return (2*d)%c;
    else return ((d*2)%c + a%c)%c;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll a ,b, c;
        cin>> a >> b >> c;
        cout<< multi(a,b,c) << endl;
    }
}