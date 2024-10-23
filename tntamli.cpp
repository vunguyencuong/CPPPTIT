#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; // Số lượng khán giả
    cin >> n;
    vector<int> totalPoints(n);

    for (int i = 0; i < n; i++) {
        cin >> totalPoints[i];
    }

    int m; // Số người chơi
    cin >> m;

    vector<pair<int, int>> playerRanges(m);

    for (int i = 0; i < m; i++) {
        cin >> playerRanges[i].first >> playerRanges[i].second;
    }

    // Sắp xếp điểm của khán giả để dễ dàng tìm kiếm
    sort(totalPoints.begin(), totalPoints.end());

    // Duyệt qua mỗi người chơi và sử dụng upper_bound và lower_bound để tìm số lượng khán giả phù hợp
    for (int i = 0; i < m; i++) {
        int lower = lower_bound(totalPoints.begin(), totalPoints.end(), playerRanges[i].first) - totalPoints.begin();
        int upper = upper_bound(totalPoints.begin(), totalPoints.end(), playerRanges[i].second) - totalPoints.begin();
        int suitableCount = upper - lower;
        cout << suitableCount << endl;
    }

    return 0;
}
