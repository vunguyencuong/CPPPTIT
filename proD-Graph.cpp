#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define DOWN 0
#define RIGHT 1
int n;
int const nmax = 205;
bool check[nmax][nmax], matrix[nmax][nmax], trace[nmax][nmax];
// x, y là tọa độ
void BFS(int x, int y)
{
    queue<pair<int,int> > q;
    q.push({x,y}); // == makepair(x,y);
    check[x][y] = true;
    while(!q.empty())
    {
        pair<int, int> tmp = q.front();
        q.pop();
        if(tmp.first == n && tmp.second == n) //đi tới cuối đường => dừng
        {
            return;
        }
        x = tmp.first; y = tmp.second;
        if(matrix[x+1][y] && !check[x+1][y]) // có thể tiếp tục đi xuống 
        {
            q.push({x+1,y});
            check[x+1][y] = true;
            trace[x+1][y] = DOWN;
        }
        if(matrix[x][y+1] && !check[x][y+1]) // có thể đi tiếp sang bên phải
        {
            q.push({x,y+1});
            check[x][y+1] = true;
            trace[x][y+1] = RIGHT;
        }
    }
}
// truy vết lại để tìm ra đường đi đầy đủ
string traceBack(int x, int y)
{
    string res = "";
    while(x != 1 || y != 1)
    {
        if(trace[x][y] == DOWN)
        {
            res = "D"+res;
            x--;
        }
        else
        {
            res = "R"+res;
            y--;
        }
    }
    return res;
}

void solve()
{
    cin>> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>> matrix[i][j];
        }
    }
    if(matrix[1][1] == 0 || matrix[n][n] == 0) cout<< -1;
    else
    {
        BFS(1,1);
        if(check[n][n] == true)
        {
            cout<< traceBack(n,n);
        }
        else cout<< -1;
    }
}
int main()
{
    faster();
    solve();
    return 0;
}