#include<bits/stdc++.h>
using namespace std;
int const nmax = 1000005;
vector<int> ke[nmax];
int n,m,s;
bool chuaxet[nmax];

void reset()
{
    for(int i = 0; i < nmax; i++) chuaxet[i] = true;
    for(int i = 1; i <= n; i++) ke[i].clear();
}

void nhap()
{
    cin>> n >> m >> s; // số đỉnh và cạnh
    for(int i = 1; i <= m; i++)
    {
        int u,v;
        cin>> u >> v;
        ke[u].push_back(v);     // push đỉnh v vào danh sách kề với đỉnh u
        ke[v].push_back(u);     // push đỉnh u vào danh sách kề với đỉnh v
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
}


void BFS(int s)
{
    queue<int> q;
    q.push(s);  // đỉnh s là đỉnh xuất phát
    chuaxet[s] = false;
    while(!q.empty())
    {
        int u  = q.front(); q.pop(); // lấy 1 đỉnh ở đàu queue
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
    int t; cin>> t;
    while(t--)
    {
        reset();
        nhap();
        BFS(s);
        cout<< endl;
    }
}