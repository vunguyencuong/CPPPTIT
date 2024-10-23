#include<bits/stdc++.h>
using namespace std;

#define inf 10000000
int const nmax = 105;
int n,s;
int a[nmax][nmax];
int d[nmax],truoc[nmax], chuaxet[nmax];


void nhap()
{
    cin>> n >> s;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>> a[i][j];
            if(a[i][j] == 0) a[i][j] = inf;
        }
    }
}

void Dijkstra(int s)
{
    // khoi tao
    d[s] = 0; truoc[s] = s;
    for(int i = 1; i <= n; i++) chuaxet[i] = 1;
    chuaxet[s] = 0;
    for(int v = 1; v <= n; v++)
    {
        if(v != s)
        {
            d[v] = a[s][v];
            truoc[v] = s;
        }
    }

    // lap
    for(int k = 1; k <= n-1; k++)
    {
        // tim du = min{dz voi z thuoc T hay chuaxet[z] = 1}
        int du = inf;
        int u;
        for(int z = 1; z <= n; z++)
        {
            if((chuaxet[z] == 1) && (du > d[z]))
            {
                du = d[z]; u = z;
            }
        }
        if(du != inf)
        {
            chuaxet[u] = 0;
            for(int v = 1; v <= n; v++)
            {
                if((chuaxet[v] == 1) && (a[u][v] != inf) && (d[v] > du+a[u][v]))
                {
                    d[v] = du + a[u][v]; truoc[v] = u;
                }
            }
        }
    }

    // in kq
    for(int t = 1; t <= n; t++)
    {
        if(d[t] == inf) cout<< "K/c " << s << " ->" << t << " = INF;" << endl;
        else{
            cout<< "K/c " << s << " -> " << t << " = " << d[t] << "; ";
            cout<< t << " <- ";
            int u=truoc[t];
            while(u!=s){
                cout<< u << " <- ";
                u=truoc[u];
            }
            cout<<s<<endl;
        }
    }
}

int main()
{
    nhap();
    Dijkstra(s);
}