#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,m; cin>> n >> m;
        vector<int> ke[n+5];
        int u,v;
        for(int i = 1; i <= m; i++)
        {
            cin>> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }     
        for(int i = 1; i <= n; i++)
        {
            cout<< i << ": ";
            for(int j = 0; j < ke[i].size(); j++)
            {
                cout<< ke[i][j] << " ";
            }
            cout<< endl;
        }
    }
}