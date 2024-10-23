#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e6+5;
int n,m;
vector<int> ke[nmax];
bool chuaxet[nmax];


void nhap()
{
    cin>> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u,v;
        cin>> u >> v;
        ke[u].push_back(v);
    }
   // for(int i = 1; i <= nmax; i++) chuaxet[i] = true;
}

bool DFS(int u)
{
    int S = 0; // dem so dinh di qua
    stack<int> st;
    S++; st.push(u);
    chuaxet[u] = false;
    while(!st.empty())
    {
        int s = st.top(); st.pop();
        for(int i = 0; i < ke[s].size(); i++)
        {
            int v = ke[s][i];
            if(chuaxet[v])
            {
                S++;
                chuaxet[v] = false;
                st.push(s);
                st.push(v);
                break;
            }
        }
    }
    return S == n;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        for(int i = 0; i < nmax; i++) ke[i].clear();
        nhap();
        int count = 1;
        for(int i = 1; i <= n; i++)
        {
            for(int i = 1; i <= 10000; i++) chuaxet[i] = true;
            if(!DFS(i))
            {
                count = 0;
                break;
            }
        }
        if(count == 0) cout<< "NO" << endl;
        else cout<< "YES" << endl;
    }
}