#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        long long a[n+5] = {};
        for(int i = 0; i < n; i++) cin>> a[i];
        sort(a,a+n);
        long long ans = 0;
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int x = lower_bound(a+j+1,a+n,k-a[i]-a[j]) - a;
                ans += x-j-1;
            }
        }
        cout<< ans << endl;
    }
}