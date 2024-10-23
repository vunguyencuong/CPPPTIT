#include<bits/stdc++.h>
using namespace std;

int maxSquareSize(int N, int M, vector< vector<int> > matrix) {
    vector< vector<int> > dp(N, vector<int>(M, 0));
    int max_size = 0;

    // Copy hàng đầu tiên và cột đầu tiên từ ma trận ban đầu
    for (int i = 0; i < N; ++i) {
        dp[i][0] = matrix[i][0];
        max_size = max(max_size, dp[i][0]);
    }
    for (int j = 0; j < M; ++j) {
        dp[0][j] = matrix[0][j];
        max_size = max(max_size, dp[0][j]);
    }

    // Duyệt qua ma trận ban đầu và cập nhật ma trận DP
    for (int i = 1; i < N; ++i) {
        for (int j = 1; j < M; ++j) {
            if (matrix[i][j] == 1) {
                dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                max_size = max(max_size, dp[i][j]);
            }
        }
    }

    return max_size;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector< vector<int> > matrix(N, vector<int>(M, 0));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }
        int result = maxSquareSize(N, M, matrix);
        cout << result << endl;
    }
    return 0;
}

//Sử dụng một ma trận dp để lưu kích thước của hình vuông lớn nhất tại mỗi ô trong ma trận ban đầu.
//Khởi tạo hàng đầu tiên và cột đầu tiên của ma trận dp bằng giá trị của ma trận ban đầu tương ứng.
//Duyệt qua ma trận ban đầu và cập nhật giá trị của ma trận dp theo công thức: Nếu ô hiện tại là 1, ta cập nhật giá trị dp tại ô đó bằng giá trị nhỏ nhất trong 3 ô bên trên, bên trái và bên trên bên trái cộng thêm 1. Nếu ô hiện tại là 0, ta bỏ qua.
//Cuối cùng, ta duyệt qua ma trận dp để tìm kích thước lớn nhất của hình vuông và in ra kết quả.