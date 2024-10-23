#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool bsearch(ll a[], int l, int r, ll k)
{
    while(l <= r)
    {
        int pivot = (l+r)/2;
        if(a[pivot] == k) return true;
        else if(a[pivot] > k) r = pivot - 1;
        else l = pivot + 1;
    }
    return false;
}

void solve()
{
    ll n,k; cin>> n >> k;
    ll a[n+5] = {};
    for(int i = 0; i < n; i++) cin>> a[i];
    sort(a,a+n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(bsearch(a,j+1,n-1,k-a[i]-a[j]))
            {
                cout<< "YES" << endl;
                return;
            }
        }
    }
    cout<< "NO" << endl;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}