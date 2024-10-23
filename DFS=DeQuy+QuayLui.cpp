#include<bits/stdc++.h>
using namespace std;
int const nmax = 1000005;
vector<int> ke[nmax];
int n,m;
bool chuaxet[nmax];
// nhập dữ liệu biểu diễn bằng đồ thị
void nhap()
{
    cin>> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u,v; cin>> u >> v;
        ke[u].push_back(v); // push đỉnh v vào danh sách kề với đỉnh u
        ke[v].push_back(u); // push đỉnh u vào danh sách kề với đỉnh v
    }
    for(int i = 1; i<= nmax; i++) chuaxet[i] = true;
}

// nhập dữ liệu biểu diễn bằng ma trận 
/*
    cin>> n,x;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>> x;
            if(x)
            {
                ke[i].push_back(j);
            }
        }
    } 
    for(int i = 1; i<= n; i++) chuaxet[i] = true;
*/
// cài đặt hàm đệ quy cho DFS
void DFS_Dequy(int u)
{
    int v;
    cout<< u;   
    chuaxet[u] = false; // đánh dấu đã xét
    for(int i = 0; i < ke[u].size(); i++)  // duyệt danh sách kề
    {
        v = ke[u][i];
        if(chuaxet[v])
        {
            DFS_Dequy(v); // đi sâu vào
        }
    }
}
int main()
{
    nhap();
    DFS_Dequy(1); // duyệt đồ thị bắt đầu từ đỉnh 1
}

