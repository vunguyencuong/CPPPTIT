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

/*
void nhap()
{
    cin>> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int x; cin>> x;
            if(x) ke[i].push_back(j);
        }
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
}
*/

bool DFS(int u)
{
    int S = 0; // đếm số đỉnh đi qua
    stack<int> st;
    S++; st.push(u);
    chuaxet[u] = false;
    while(!st.empty())
    {
        int s = st.top(); st.pop();
         for(int i = 0; i < ke[s].size(); i++)
        {
            if(chuaxet[ke[s][i]])
            {
                S++;
                chuaxet[ke[s][i]] = false;
                st.push(s);
                st.push(ke[s][i]);
                break;
            }
        } 
    }
    return S == n;
}
int main()
{
    nhap();
    int count = 1;
    for(int i = 1; i <= n; i++)
    {
        if(!DFS(i)) // đỉnh nào không có đường đi đến hoặc đi về 
        {
            count = 0;
            break;
        }
    }
    if(count == 0) cout<< "not strongly connected" << endl;
    else cout<< "strongly connected" << endl;
}