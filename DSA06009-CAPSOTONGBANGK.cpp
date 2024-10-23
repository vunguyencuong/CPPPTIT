
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        int ts[10005] = {0};
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin>> x;
            ts[x]++;
        }
        for(int i = 0 ;i <= k; i++)
        {
            if(i*2 == k)
            {
                ans += (ts[i]*(ts[i]-1) )/2;
            }
            else ans += ts[i]*ts[k-i];
            ts[i] = 0, ts[k-i] = 0;
        }
        cout<< ans << endl;
    }
}


