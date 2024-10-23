#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<pair<int, int>> results;

    // Duyệt qua tất cả các trường hợp có thể
    for (int p = a; p <= x; ++p) {
        for (int q = b; q <= y; ++q) {
            // Kiểm tra điều kiện thoả mãn
            if (p > q) {
                results.push_back(make_pair(p, q));
            }
        }
    }

    // In kết quả
    cout << results.size() << endl;
    // for (const auto& result : results) {
    //     cout << result.first << " " << result.second << endl;
    // }

	for(int i = 0; i < results.size(); i++){
		cout<< results[i].first << " " << results[i].second << endl;
	}

    return 0;
}
