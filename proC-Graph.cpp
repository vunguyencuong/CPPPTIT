#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const nmax = 1e2+5;
vector<int> ke[nmax];

int main()
{
    faster();
    int nut,canh;
    cin>> nut >> canh;
    int u,v;
    for(int i = 1; i <= canh; i++)
    {
        cin>> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i = 1; i <= nut; i++)
    {
        cout<< ke[i].size() << endl;
    }
}