#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e3+5;
int n;
int a[nmax]={}, b[nmax]={};
void solve()
{
    cin>> n;
    int lmax = 0;
    for(int i = 0; i < n; i++) cin>> a[i];
    for(int i = 0; i < n; i++) cin>> b[i];
    for(int i = 0; i < n; i++)
    {
        int dem1 = 0, dem2 = 0;
        for(int j = i; j < n; j++)
        {
            dem1 += a[j];
            dem2 += b[j];
            if(dem1 == dem2)
            {
                if(lmax < j-i+1) lmax = j-i+1;
            }
        }
    }
    cout<< lmax << endl;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}