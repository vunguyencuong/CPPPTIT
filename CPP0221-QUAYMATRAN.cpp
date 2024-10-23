#include<bits/stdc++.h>
using namespace std;
int const nmax = 100;
int a[nmax][nmax]={};
int n,m;
void solve()
{
    cin>> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
          
        }
    }
   
    cout<< endl;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}