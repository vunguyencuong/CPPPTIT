#include<bits/stdc++.h>
using namespace std;

int const nmax  = 1e6+5;
vector<int> ke[nmax];
bool chuaxet[nmax];
int n,m,k;

void nhap()
{
    cin>> n >> m >> k;
    int u,v;
    for(int i = 1; i <= m; i++)
    {
        cin>> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i = 0; i <= 1000000; i++) chuaxet[i] = true;
}

void DFS(int u)
{
    int v;
    cout<< u << " ";
    chuaxet[u] = false;
    for(int i = 0; i < ke[u].size(); i++)
    {
        if(chuaxet[ke[u][i]])
        {
            DFS(ke[u][i]);
        }
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        for(int i = 0; i < nmax; i++) ke[i].clear();
        nhap();
        DFS(k);
        cout<< endl;
    }
}