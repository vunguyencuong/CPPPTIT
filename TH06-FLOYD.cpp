#include<bits/stdc++.h> 
using namespace std;


void solve()
{
    int a[101][5005]={};
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) a[i][j] = 0;
            else a[i][j] = 1e9;
        }
    }
    for(int i=1; i<=m; i++){
        int u, v, c;
        cin>>u>>v>>c;
        a[u][v]=c;
        a[v][u]=c;
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][j] > a[i][k] + a[j][k]){
                    a[i][j] = a[i][k] + a[j][k];
                }
            }
        }
    }
    int q; cin>>q;
    while(q--){
        int u, v;
        cin>>u>>v;
        cout<<a[u][v]<<endl;
        
    }
}

int main()
{
    solve();
}