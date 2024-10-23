#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,u,v;
    cin>> n >> m;
    vector<int> ke[n+1];
    for(int i = 1; i <= m; i++)
    {
        cin>> u >> v;
        ke[u].push_back(v); // push đỉnh v vào danh sách kề với u
        // đồ thị có hướng từ u => v
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < ke[i].size(); j++)
        {
            cout<< ke[i][j] << " ";
        }
        cout<< endl;
    }
}