#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,q;
        cin>> n >> q;
        int a[10005];
        for(int i = 1; i <= n; i++) cin>> a[i];
        while(q--)
        {
            int l,r;
            cin>> l >> r;
            int ans = 0;
            for(int i = l; i <= r; i++)
            {
                ans += a[i];
            }
            cout<< ans << endl;
        }

    }
}