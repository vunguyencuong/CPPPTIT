#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        int a[n+5]={};
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
        }
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] <= k)
            {
                count++;
            }
        }
        int bad = 0;
        for(int i = 1; i <= count; i++)
        {
            if(a[i] > k) bad++;
        }
        int ans = bad;
        for(int i = 1, j = count; j < n; i++,j++)
        {
            if(a[i] > k) bad--;
            if(a[j] > k) bad++;
        }
        ans = min(ans,bad);
    }
}