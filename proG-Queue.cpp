#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main()
{
    faster();
    int n;
    cin>> n;
    priority_queue<ll, vector<ll>, greater_equal<ll>> q;
    while(n--)
    {
        int x;
        cin>> x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size() > 1)
    {
        ll a = q.top();
        q.pop();
        ll b = q.top();
        q.pop();
        ans += a+b;
        q.push(a+b);
    }
    cout<< ans << endl;
}