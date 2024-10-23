// Cach 1
/*
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const nmax = 1e3;
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
       ke[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
    for(int i = 1; i <= n; i++) sort(ke[i].begin(),ke[i].end());
}
void DFS(int s)
{
    cout<< s << " ";
    chuaxet[s] = false;
    for(int i = 0; i < ke[s].size(); i++)
    {
        int v = ke[s][i];
        if(chuaxet[v])
        {
            DFS(v);
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
        DFS(s);
        cout<< endl;   
        for(int i = 1; i <= n; i++) ke[i].clear();
    }
}
*/
//Cách 2, thêm break vì tư tưởng của đào sâu chỉ cần tìm 1 đinh kề và đào sâu hết mức chứ ko tìm hết các đỉnh kề rồi mới đào sâu
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const nmax = 1e3;
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
       ke[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
    for(int i = 1; i <= n; i++) sort(ke[i].begin(),ke[i].end());
}
void DFS(int s)
{
    stack<int> st;
    st.push(s);
    chuaxet[s] = false;
    cout<< s << " ";
    while(!st.empty())
    {
    	int u = st.top(); st.pop();
    	for(int i = 0; i < ke[u].size(); i++)
    	{
    		int v =ke[u][i];
    		if(chuaxet[v])
    		{
    			cout<< v << " ";
    			chuaxet[v] = false;
    			st.push(u);
    			st.push(v);
    			break;
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
        DFS(s);
        cout<< endl;   
        for(int i = 1; i <= n; i++) ke[i].clear();
    }
}
