#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p;
    cin>> n >> m >> p;
    int a[n+2][m+2];
    int b[m+2][p+2];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>> a[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cin>> b[i][j];
        }
    }
    int ans[n+2][p+2];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            ans[i][j] = 0;
            for(int k = 0; k < m; k++)
            {
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cout<< ans[i][j] << " ";
        }
        cout<< endl;
    }
}