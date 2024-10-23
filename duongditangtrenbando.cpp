#include<bits/stdc++.h>
using namespace std;

const int MAX_M = 1000;
const int MAX_N = 1000;

int m, n;
int grid[MAX_M][MAX_N];
int dp[MAX_M][MAX_N];

int dfs(int i, int j) {
    if (dp[i][j] != -1)
        return dp[i][j];
    
    int result = 1;
    if (i > 0 && grid[i][j] < grid[i - 1][j]) // Kiểm tra ô phía trên
        result = max(result, 1 + dfs(i - 1, j));
    if (i < m - 1 && grid[i][j] < grid[i + 1][j]) // Kiểm tra ô phía dưới
        result = max(result, 1 + dfs(i + 1, j));
    if (j > 0 && grid[i][j] < grid[i][j - 1]) // Kiểm tra ô bên trái
        result = max(result, 1 + dfs(i, j - 1));
    if (j < n - 1 && grid[i][j] < grid[i][j + 1]) // Kiểm tra ô bên phải
        result = max(result, 1 + dfs(i, j + 1));
    
    return dp[i][j] = result;
}

int main() {
    cin >> m >> n;
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    // Khởi tạo mảng dp
    for (int i = 0; i < MAX_M; ++i) {
        for (int j = 0; j < MAX_N; ++j) {
            dp[i][j] = -1;
        }
    }

    int max_length = 0;
    
    // Duyệt qua từng ô trong lưới để tìm đường đi tăng dài nhất bắt đầu từ ô đó
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            max_length = max(max_length, dfs(i, j));
        }
    }

    cout << max_length << endl;

    return 0;
}
