#include<bits/stdc++.h>
using namespace std;

int const nmax = 1e3+5;
int n,m,s;
vector<int> ke[nmax];
bool chuaxet[nmax];

void reset()
{
    for(int i = 0; i < nmax; i++) chuaxet[i] = true;
    for(int i = 1; i <= nmax; i++) ke[i].clear();
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

void BFS(int u)
{
    chuaxet[u] = false;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int k = q.front(); q.pop();
        cout<< k << " ";
        for(int i = 0; i < ke[k].size(); i++)
        {
            int v = ke[k][i];
            if(chuaxet[v])
            {
                q.push(v);
                chuaxet[v] = false;
            }
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
        BFS(s);
        cout<< endl;
    }
}