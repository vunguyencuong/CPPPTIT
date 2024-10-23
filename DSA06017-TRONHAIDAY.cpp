#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,m; cin>> n >> m;
        vector<long long> a(n),b(m);
        vector<long long> ans;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            ans.push_back(a[i]);
        }
        for(int j = 0; j < m; j++)
        {
            cin>> b[j];
            ans.push_back(b[j]);
        }
        sort(ans.begin(),ans.end());
        for(int i : ans) cout<< i << " " ;
        cout<< endl;
    }
}