#include<bits/stdc++.h>
using namespace std;

int n,m;
bool check[1001];
vector<int> A[1001];
set<pair<int,int>> S;

void reset()
{
    for(int i = 0; i < 1001; i++) A[i].clear(), check[i] = false;
}

bool DFS(int u)
{
    for(auto x : A[u])
    {
        for(auto y : A[x])
        {
            if(S.count({x,y}) == 0 && x != u) return false;
        }
    }
    return true;
}

string Internet()
{
    for(int i = 1; i < n+1; i++)
    {
        if(!DFS(i))
        {
            return "NO\n";
        }

    }
    return "YES\n";
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        reset();
        S.clear();
        cin>> n >> m;
        for(int i = 0; i < m; i++)
        {
            int a,b; cin>> a >> b;
            A[a].push_back(b);
            A[b].push_back(a);
            S.insert({a,b});
            S.insert({b,a});
        }
        cout<< Internet();
    }
    return 0;
}