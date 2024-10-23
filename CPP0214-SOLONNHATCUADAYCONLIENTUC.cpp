#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
void solve()
{
    deque<ll> q;
    cin>> n >> k;
    vector<ll> a(n+5);
    for(int i = 0; i < n; i++) cin>> a[i];
    for(int i = 0; i < n; i++)
    {
        while(!q.empty() && a[q.back()] <= a[i]) q.pop_back();
        q.push_back(i);
        while(q.front() + k <= i)
        {
            q.pop_front();
        }
        if(i >= k - 1)
        {
            cout<< a[q.front()] << " ";
        }
    }
    cout<< endl;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}