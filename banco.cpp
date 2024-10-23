#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // Đọc dữ liệu từ input và khởi tạo bảng chứa giá trị của các ô.
    vector<vector<int>> board(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    // Tạo mảng 2D dp để lưu tổng lớn nhất tại mỗi ô (i, j).
    vector<vector<int>> dp(m, vector<int>(n, 0));

    // Duyệt qua từng dòng và từ trái qua phải.
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int max_sum = 0;

            // Xét các ô mà quân mã có thể đi tới.
            for (int x = i - 1; x >= 0; x--) {
                for (int y = j - 2; y <= j + 2; y++) {
                    if (y >= 0 && y < n) {
                        max_sum = max(max_sum, dp[x][y]);
                    }
                }
            }

            // Cập nhật tổng tại ô (i, j).
            dp[i][j] = max_sum + board[i][j];
        }
    }

    // Tìm tổng lớn nhất tại hàng cuối cùng.
    int max_total = 0;
    for (int j = 0; j < n; j++) {
        max_total = max(max_total, dp[m - 1][j]);
    }

    // In ra tổng lớn nhất.
    cout << max_total << endl;

    return 0;
}
