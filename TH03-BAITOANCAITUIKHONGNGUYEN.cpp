#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<pair<int, int>, double> a, pair<pair<int, int>, double> b) {
    return a.second > b.second;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,w; cin>> n >> w;
        vector<pair< pair<int,int>, double>> res(n);
        for(int i = 0; i < n; i++)
        {
            cin>> res[i].first.second >> res[i].first.first;
            res[i].second = (double) res[i].first.second /res[i].first.first;
        }
        sort(res.begin(),res.end(),cmp);
        double ans = 0;
        for(int i = 0; i < n; i++)
        {   
            if(w == 0) break;
            if(res[i].first.first <= w)
            {
                ans += (double) res[i].first.second;
                w -= (double) res[i].first.first;
            }
            else{
                ans += (double) res[i].first.second*w / res[i].first.first;
                w = 0;
            }
        }   
        cout<< fixed << setprecision(2) << ans << endl;
    }
}