#include<bits/stdc++.h>
using namespace std;

int const nmax = 1e3+5;
int n,m,s;
vector<int> ke[nmax];
bool chuaxet[nmax];

void reset()
{
    for(int i = 1; i < nmax; i++) chuaxet[i] = true;
    for(int i = 1; i <= nmax; i++)
    {
        ke[i].clear();
    }
}

void nhap()
{
    cin>> n >> m >> s;
    int u,v;
    for(int i = 1; i <= m; i++)
    {
        cin>> u >> v;
        ke[u].push_back(v);
    }
}

void DFS(int u)
{
    chuaxet[u] = false;
    cout<< u << " ";
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
        reset();
        nhap();
        DFS(s);
        cout<< endl;
    }
}