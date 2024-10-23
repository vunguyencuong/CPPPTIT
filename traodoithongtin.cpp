#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestCommonRectangle(int M, int N, const vector<string>& A, const vector<string>& B) {
    // Khởi tạo ma trận dp để lưu trữ kết quả tạm thời
    vector<vector<int>> dp(M + 1, vector<int>(N + 1, 0));

    int maxArea = 0;  // Diện tích lớn nhất tìm được

    // Lặp qua từng cặp dòng của hai ma trận
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            // Nếu ký tự ở vị trí (i-1, j-1) giống nhau
            if (A[i - 1][j - 1] == B[i - 1][j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = 0;
            }

            // Cập nhật diện tích lớn nhất
            maxArea = max(maxArea, dp[i][j]);
        }
    }

    return maxArea;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int M, N;
        cin >> M >> N;

        // Đọc ma trận A
        vector<string> A(M);
        for (int i = 0; i < M; ++i) {
            cin >> A[i];
        }

        // Đọc ma trận B
        vector<string> B(M);
        for (int i = 0; i < M; ++i) {
            cin >> B[i];
        }

        int result = largestCommonRectangle(M, N, A, B);
        cout << result << endl;
    }

    return 0;
}
