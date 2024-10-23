#include<bits/stdc++.h>
using namespace std;

int const nmax = 1e3+5;
int n,m,x,y;
vector<int> ke[nmax];
bool chuaxet[nmax];

void reset()
{
    for(int i = 1; i <nmax; i++) chuaxet[i] = true;
}

void nhap()
{
    cin>> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u,v;
        cin>> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}

void DFS(int u)
{
    chuaxet[u] = false;
    for(int i = 0; i < ke[u].size(); i++)
    {
        int v = ke[u][i];
        if(chuaxet[v])
        {
            DFS(v);
        }
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        for(int i = 1; i <= n; i++) ke[i].clear();
        nhap(); reset();
        int q; cin>> q;
        while(q--)
        {
            cin>> x >> y;
            DFS(x);
            if(chuaxet[y]) cout<< "NO" << endl;
            else cout<< "YES" << endl;
            reset();
        }
    }
}