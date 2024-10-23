#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int m,n,p; cin>> m >> n >> p;
        vector<ll> a,b,c; a.resize(m), b.resize(n), c.resize(p);
        vector<long long> ans;
        for(int i = 0; i < m; i++)
        {
            cin>> a[i];
        }
        for(int j = 0; j < n; j++)
        {
            cin>> b[j];
        }
        for(int k = 0; k < p; k++)
        { 
            cin>> c[k];
        }
        int pos1 = 0, pos2 = 0, pos3 = 0;
        while(pos1 < m && pos2 < n && pos3 < p)
        {
            if(a[pos1] == b[pos2] && b[pos2] == c[pos3])
            {
                ans.push_back(a[pos1]);
                pos1++;
                pos2++;
                pos3++;
                continue;
            }
            long long tmp = min(a[pos1],b[pos2]);
            long long tmp2 = min(tmp,c[pos3]);
            if(tmp2 == a[pos1]) pos1++;
            if(tmp2 == b[pos2]) pos2++;
            if(tmp2 == c[pos3]) pos3++;
        }
        if(ans.size() == 0) cout<< "-1";
        else for(long long i : ans) cout<< i << " ";
        cout<< endl;
       
    }
}