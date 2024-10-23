#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const nmax = 1e3+5;
vector<int> ke[nmax];
bool chuaxet[nmax];
int n,m,s;
void nhap(int n, int m)
{
    for(int i = 1; i <= m; i++)
    {
        int u,v;
        cin>> u >> v;
        ke[u].push_back(v);
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
    for(int i = 1; i <= n; i++) sort(ke[i].begin(),ke[i].end());
}
void BFS(int s)
{
    queue<int> q;
    q.push(s);
    chuaxet[s] = false;
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        cout<< u << " ";
        for(int i = 0; i < ke[u].size(); i++)
        {
            int v = ke[u][i];
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
    faster();
    int t;
    cin>> t;
    while(t--)
    {
        cin>> n >> m >> s;
        nhap(n,m);
        BFS(s);
        cout<< endl;
        for(int i = 1; i <= n; i++) ke[i].clear();
    }
}