#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int ts[100005] = {0};
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            ts[a[i]]++;
        }
        sort(a.begin(),a.end());
        int ans = 0;
        for(int i = a[0]; i <= a[n-1]; i++)
        {
            if(ts[i] == 0) ans++;
        }
        cout<< ans << endl;
    }
}