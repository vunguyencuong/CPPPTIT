#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlaceCows(vector<int>& positions, int cows, int minDist) {
    int count = 1;
    int lastPos = positions[0];

    for (int i = 1; i < positions.size(); i++) {
        if (positions[i] - lastPos >= minDist) {
            lastPos = positions[i];
            count++;
            if (count == cows) return true;
        }
    }
    return false;
}

int main() {
    int n, c;
    cin >> n >> c;
    vector<int> positions(n);
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    sort(positions.begin(), positions.end());

    int low = 1, high = positions[n - 1] - positions[0], mid;
    int best = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        if (canPlaceCows(positions, c, mid)) {
            best = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << best << endl;
    return 0;
}


// Ý tưởng là sẽ tìm kiếm nhị phân khoảng cách nhỏ nhất giữa hai con bò 
// mà chúng ta có thể đạt được, từ đó tìm ra khoảng cách lớn nhất có thể. 
// Các bước cơ bản như sau:

// 1. Sắp xếp mảng chứa vị trí các cọc để chuẩn bị cho việc tìm kiếm nhị phân.
// 2. Thiết lập biên dưới (low) cho khoảng cách là 1 (khoảng cách nhỏ nhất có thể) 
//và biên trên (high) là khoảng cách giữa cọc đầu tiên và cọc cuối cùng (khoảng cách lớn nhất có thể).
// 3. Sử dụng tìm kiếm nhị phân để tìm khoảng cách nhỏ nhất giữa hai con bò. 
//Với mỗi giá trị khoảng cách m (mid = (low + high) / 2), kiểm tra xem có thể buộc c con bò vào các cọc sao cho khoảng cách giữa chúng ít nhất là m hay không.
// 4. Nếu có thể, ta cập nhật biên dưới (low = mid + 1). 
//Nếu không, ta cập nhật biên trên (high = mid - 1).
// 5. Tiếp tục cho đến khi biên dưới lớn hơn biên trên, giá trị của high sẽ là đáp án.