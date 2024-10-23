#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> sum_index;
    int max_length = 0;
    int sum = 0;
    
    // Khởi tạo map với giá trị 0 và index -1 để xử lý trường hợp không có tổng đối xứng
    sum_index[0] = -1;

    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (sum_index.find(sum) != sum_index.end()) {
            int length = i - sum_index[sum];
            max_length = max(max_length, length);
        } else {
            sum_index[sum] = i;
        }
    }

    cout << max_length << endl;

    return 0;
}