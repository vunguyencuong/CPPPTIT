#include<bits/stdc++.h>
using namespace std;
int n,M;
struct data
{
    int m = 0;
    int v = 0;
};
data a[105];
int b[105][105]; // Lưu giá trị lớn nhất có thể khi mà chọn gói hàng thứ i và khối lượng tối đa có thể vác là j 
int ans = 0;
void solve()
{
    for(int i = 0; i <= M; i++) b[0][i] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            // kiểm tra xem có lấy được gói thứ i hay không
            if(j - a[i].m >= 0)//Lấy được gói hàng i khi cộng khối lượng của gói hàng i thì vẫn thỏa mãn giới hạn j
            {          
                b[i][j] = max(b[i-1][j],b[i-1][j-a[i].m]+a[i].v);
                //b[i][j] sẽ được cộng thêm 1 lượng v[i] so với b[i-1][j-m[i]]
            }
            else b[i][j] = b[i-1][j]; // không lấy được gói hàng i
            if(ans < b[i][j]) ans = b[i][j];
        }
    }
    cout<< ans << endl;
}
// // thực hiện truy vết
// int choice[105];
// void trace()
// {
//     int i = n, j = M;
//     while(i != 0)
//     {
//         if(b[i][j] != b[i-1][j]) // gói hàng i được chọn
//         {
//             choice[i] = 1;
//             j = j- a[i].m;
//         }
//         i--;
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         if(choice[i]) cout<< i << " ";
//     }
// }
int main()
{
    cin>> n >> M;
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i].m; // khối lượng
        cin>> a[i].v; // giá trị
    }
    solve();
    // trace();
}
