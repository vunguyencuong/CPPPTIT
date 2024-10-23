#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const nmax = 1e6+5;
vector<int> ke[nmax];
bool chuaxet[nmax];
void nhap(int n, int m)
{
    int u,v;
    for(int i = 1; i <= m; i++)
    {
        cin>> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
}
void BFS(int u, int &count)
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        chuaxet[u] = false;
        for(int i = 0; i < ke[u].size(); i++)
        {
            int v = ke[u][i];
            if(chuaxet[v])
            {
                chuaxet[v] = false;
                q.push(v);
                count++;
            }
        }
    }
}
int main()
{
    faster();
    int n,m;
    cin>> n >> m;
    int max = -1, count = 1;
    nhap(n,m);
    for(int i = 1; i <= n; i++)
    {
        if(chuaxet[i])
        {
            BFS(i,count);
            if(max < count) max = count;
            count = 1;
        }
    }
    cout<< max << endl;
}


