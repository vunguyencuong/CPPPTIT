#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e6+5;
vector<int> ke[nmax];
bool chuaxet[nmax];
int n,m;

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
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
}

void DFS(int u)
{
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
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(chuaxet[i])   // đỉnh chưa đc xét = > bắt đầu 1 liên thông mới
            {
                count++;
                DFS(i);
            }
        }
        cout<< count << endl;
    }
}