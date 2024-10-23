#include<bits/stdc++.h>
using namespace std;

#define maxn 105
int da[maxn];

struct graph{
    int n,u;
    int a[maxn][maxn];
};

struct canh{
    int v1,v2,ts;
};

void dfs(int k, graph g){
    da[k] = 1;
    for(int i = 1; i <= g.n; i++){
        if(da[i] == 0 && g.a[k][i] != 0){
            dfs(i,g);
        }
    }
}


main(){
    graph g;
    cin >> g.n >> g.u;
    for(int i = 1; i <= g.n; i++){
        for(int j = 1; j <= g.n; j++) cin >>g.a[i][j];
    }
    int dem = 0;
    for(int i = 1; i <= g.n; i++){
        if(da[i] == 0){
            dem++;
            dfs(i,g);
        }
    }
    
    if(dem > 1) cout << "No spanning tree";
    else{
        int VT[maxn]={0};
        canh ET[maxn];
        int nET = 0, w = 0;
        VT[g.u] = 1;
        while(nET < (g.n - 1)){
            int min = INT_MAX;
            canh tmp;
            for(int v = 1; v <= g.n; v++){
                if(VT[v] == 1){
                    for(int s = 1; s <= g.n; s++){
                        if(VT[s] == 0 && g.a[v][s] != 0 && min > g.a[v][s]){
                            tmp.ts = min = g.a[v][s];
                            tmp.v1 = v; tmp.v2 = s;
                        }
                    }
                }
            }
            w += tmp.ts;
            ET[nET++] = tmp;
            VT[tmp.v2] = 1;
        }
        cout << "dH = "<<w << endl;
        for(int i = 0; i < nET; i++){
            cout << min(ET[i].v1, ET[i].v2) << " " << max(ET[i].v1, ET[i].v2) << endl;
        }
    }
}