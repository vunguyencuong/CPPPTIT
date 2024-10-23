#include<bits/stdc++.h>
using namespace std;

int const nmax = 1e6+5;
int n,m, k;
vector<int> ke[nmax];
bool chuaxet[nmax];

void reset()
{
    for(int i = 1; i < nmax; i++) chuaxet[i] = true;
}

void nhap()
{
    cin>> n >> m >> k;
    for(int i = 1; i <= m; i++)
    {
        int u,v;
        cin>> u >> v;
        ke[u].push_back(v);
    }
}

void BFS(int u)
{
    chuaxet[u] = false;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int v = q.front(); q.pop();
        cout<< v << " ";
        for(int i = 0; i < ke[v].size(); i++)
        {
            int s = ke[v][i];
            if(chuaxet[s])
            {
                q.push(s);
                chuaxet[s] = false;
            }
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
        BFS(k);
        cout<< endl;
    }
}