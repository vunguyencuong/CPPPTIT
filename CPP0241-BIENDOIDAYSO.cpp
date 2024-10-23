#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e3+5;
int a[nmax]={};
int n;
void solve()
{
    cin>> n;
    for(int i = 0; i < n; i++) cin>> a[i];
    int l = 0, r = n-1, count = 0;
    while(l <= r)
    {
        if(a[l] == a[r])
        {
            l++,r--;
        }
        else if(a[l] < a[r])
        {
            l++;
            a[l] += a[l-1];
            count++;
        }
        else if(a[l] > a[r])
        {
            r--;
            a[r] += a[r+1];
            count++;
        }
    }
    cout<< count << endl;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}