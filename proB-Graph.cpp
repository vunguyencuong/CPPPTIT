#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const nmax = 1e2+5;
int ke[nmax][nmax];
int check[nmax] = {0};
int main()
{
    faster();
    int nut,canh;
    cin>> nut >> canh;
    for(int i = 1; i <= nut; i++)
    {
        for(int j = 1; j <= nut; j++)
        {
            ke[i][j] = 0;
        }
    }
    for(int i = 1; i <= canh; i++)
    {
        int u,v;
        cin>> u >> v;
        ke[u][v] = 1;
        ke[v][u] = 1;
        check[u] = check[v] = 1;
    }
    for(int i = 1; i <= nut; i++)
    {
        if(check[i] == 1)
        {
            cout<< "Dinh ke cua " << i << " : ";
            for(int j = 1; j <= nut; j++)
            {
                if(ke[i][j] == 1)
                {
                    cout<< j << " ";
                }
            }
            cout<< endl;
        }
    }
}