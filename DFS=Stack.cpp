#include<bits/stdc++.h>
using namespace std;
int const nmax = 1000005;
vector<int> ke[nmax];
int n,m;
bool chuaxet[nmax];
// nhập dữ liệu biểu diễn bằng đồ thị
/*
void nhap()
{
    cin>> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u,v; cin>> u >> v;
        ke[u].push_back(v); // push đỉnh v vào danh sách kề với đỉnh u
        ke[v].push_back(u); // push đỉnh u vào danh sách kề với đỉnh v
    }
    for(int i = 1; i<= n; i++) chuaxet[i] = true;
}
*/

void nhap()
{
    int n; cin>> n;
    int x;
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
}

// cài đặt hàm stack cho DFS
void DFS_Stack(int u)
{
    stack<int> s; // khai báo stack
    s.push(u); // push đỉnh đầu tiên vào stack
    chuaxet[u] = false; // đánh dấu đã xét đỉnh u
    cout<< u << " ";
    while(!s.empty())  // duyệt tới khi stack rỗng
    {
        u = s.top(); s.pop(); // lấy đỉnh ở top của stack ra
        for(int i = 0; i < ke[u].size(); i++)
        {
            int v = ke[u][i];
            if(chuaxet[v])
            {
                cout<< v << " ";
                chuaxet[v] = false;
                // nếu đi đến được v thì push(v) vào stack
                // tuy nhiên cũng cần bước quay lui lại đỉnh u nên ta push u về lại stack
                s.push(u);
                s.push(v);
                break;
            }
        }
    }
}
int main()
{
    nhap();
    DFS_Stack(1); // duyệt đồ thị bắt đầu từ đỉnh 1
}
// input
// 6 5
// 1 2
// 2 4
// 4 3
// 4 5
// 5 6