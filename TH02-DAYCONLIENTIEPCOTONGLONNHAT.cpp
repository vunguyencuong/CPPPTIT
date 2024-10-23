#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int a[n+5] = {};
        for(int i = 1; i <= n; i++) cin>> a[i];
        long long sum = 0, ans = 0;
        for(int i = 1; i <= n; i++)
        {
            sum += a[i];
            ans = max(sum,ans);
            if(sum < 0) sum = 0;
        }
        cout<< ans << endl;
    }
}
