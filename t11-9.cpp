#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Sắp xếp dãy số theo thứ tự tăng dần
    sort(arr.begin(), arr.end());

    // Tìm ước số chung lớn nhất của các hiệu giữa các phần tử liên tiếp
    int gcdResult = arr[1] - arr[0];
    for (int i = 2; i < N; ++i) {
        gcdResult = __gcd(gcdResult, arr[i] - arr[i - 1]);
    }

    // Tìm và xuất các số K thỏa mãn yêu cầu
    vector<int> result;
    for (int i = 1; i * i <= gcdResult; ++i) {
        if (gcdResult % i == 0) {
            if(i!= 1) result.push_back(i);
            if (i != gcdResult / i) {
                result.push_back(gcdResult / i);
            }
        }
    }

    // Sắp xếp và xuất kết quả theo thứ tự tăng dần
    sort(result.begin(), result.end());

    // Kiểm tra xem có số K nào thỏa mãn hay không
    if (result.empty()) {
        cout << -1;
    } else {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
    }

    return 0;
}
