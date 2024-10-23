#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105][105];
bool havecheck[100][100];
int ans = 0;

void Try(int i, int j)
{
    if(i == n && j == m) ans++;
    if(i > n || j > m) return;
    
    if(i < n && !havecheck[i+1][j])
    {
        havecheck[i][j] = true;
        Try(i+1,j);
        havecheck[i][j] = false;
    }

    if(j < m && !havecheck[i][j+1])
    {
        havecheck[i][j] = true;
        Try(i,j+1);
        havecheck[i][j] = false;
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin>> a[i][j];
            }
        }
        ans = 0;
        Try(1,1);
        cout<< ans << endl;
    }
}