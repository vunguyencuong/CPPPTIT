#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    int a[n+5]={};
    for(int i = 0; i < n; i++) cin>> a[i];
    int l,r; cin>> l >> r;
    int giam = 0, tang = 0;
    for(int i = l; i < r; i++)
    {
        if(a[i] < a[i+1])
        {
            if(giam > 0)
            {
                cout<< "No" << endl;
                return;
            }
            tang++;
        }
        if(a[i] > a[i+1]) giam++;
    }
    cout<< "Yes" << endl;
    return;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}