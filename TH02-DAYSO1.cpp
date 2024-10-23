#include<bits/stdc++.h>
using namespace std;
int n, a[30];

void in()
{
    cout<< "[";
    for(int i = 1; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<< a[n] << "]" << endl;
}

void solve()
{
    while(n > 1)
    {
        for(int i = 1; i < n; i++)
        {
            a[i] += a[i+1];
        }
        n--;
        in();
    }

}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        for(int i = 1; i <= n; i++) cin>> a[i];
        in();
        solve();
    }

}