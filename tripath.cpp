#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int triangle[n][n];

    // Nhập giá trị cho tam giác
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cin >> triangle[i][j];
        }
    }

    // Bắt đầu tính tổng lớn nhất
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            // Chọn giá trị lớn nhất giữa hai giá trị con dưới nó
            triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }

    // Kết quả cuối cùng là giá trị ở đỉnh của tam giác
    int result = triangle[0][0];
    cout << result << endl;

    return 0;
}
