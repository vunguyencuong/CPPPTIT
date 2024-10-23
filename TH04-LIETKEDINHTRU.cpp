#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e3+5;
vector<int> ke[nmax];
bool chuaxet[nmax];
int n,m;

void reset()
{
    for(int i = 1; i <= nmax; i++) chuaxet[i] = true; 
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
    reset();
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
        int count = 0; // dem so tplt ban dau;
        for(int i = 1; i <= n; i++)
        {
            if(chuaxet[i])
            {
                count++;
                DFS(i);
            }
        }
        for(int i = 1; i <= n; i++)
        {
            reset();
            chuaxet[i] = false;
            int count2 = 0;
            for(int j = 1; j <= n; j++)
            {
                if(chuaxet[j])
                {
                    count2++; // dem so tplt moi sau khi bot di 1 dinh
                    DFS(j);
                }
            }
            if(count2 > count) cout<< i << " "; // dinh tru la dinh khi bo di thi so tplt tang len
        }
        cout<< endl;
    }
}