#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> pages(N + 1, 0);

    // Nhập số lượng trang sách của từng quyển
    for (int i = 1; i <= N; ++i) {
        cin >> pages[i];
        pages[i] += pages[i - 1]; // Tính prefix sum
    }

    int count = 0;

    // Duyệt qua tất cả các cặp quyển sách
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            // Tính tổng số trang sách của các quyển còn lại
            int remaining_pages = pages[N] - pages[j] + pages[i - 1];
            
            // Kiểm tra xem tổng số trang sách còn lại có phải là số chẵn không
            if (remaining_pages % 2 == 0) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
