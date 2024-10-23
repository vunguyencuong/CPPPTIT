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
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int top = q.front(); q.pop();
        chuaxet[top] = false;
        for(int i = 0; i < ke[top].size(); i++)
        {
            if(chuaxet[ke[top][i]])
            {
                chuaxet[ke[top][i]] = false;
                q.push(ke[top][i]);
            }
        }
    }
}
int main()
{
    nhap();
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(chuaxet[i])   // đỉnh chưa đc xét = > bắt đầu 1 liên thông mới
        {
            count++;
            BFS(i);
        }
    }
    cout<< count;
}