#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int minSumPath(int N, int M, vector<vector<int>> A) {
    // Tạo một ma trận dp để lưu tổng điểm nhỏ nhất tại mỗi ô (i, j)
    vector< vector<int> > dp(N, vector<int>(M, INF));

    // Gán giá trị cho ô (1, 1)
    dp[0][0] = A[0][0];

    // Duyệt qua từng hàng và cột
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            // Cập nhật tổng điểm nhỏ nhất tại ô (i, j)
            if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + A[i][j]); // Di chuyển từ ô phía trên
            if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + A[i][j]); // Di chuyển từ ô phía trái
            if (i > 0 && j > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + A[i][j]); // Di chuyển từ ô chéo trên trái
        }
    }

    return dp[N - 1][M - 1]; // Trả về tổng điểm nhỏ nhất tại ô (N, M)
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector< vector<int> > A(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> A[i][j];
            }
        }
        int result = minSumPath(N, M, A);
        cout << result << endl;
    }
    return 0;
}
