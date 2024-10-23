#include<bits/stdc++.h>

using namespace std;

int main() {


    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<long long> D(N), C(N);
        for (int i = 0; i < N; i++) {
            cin >> D[i] >> C[i];
        }

        long long L, P;
        cin >> L >> P;

        int stops = 0;  // Số lượng trạm cung cấp năng lượng cần dừng lại
        priority_queue<long long> max_energy;  // Sử dụng priority queue để lựa chọn trạm có năng lượng lớn nhất

        for (int i = 0; i < N; i++) {
            while (L - D[i] < 0) {
                if (max_energy.empty()) {
                    stops = -1;
                    break;
                }
                P += max_energy.top();
                max_energy.pop();
                stops++;
                L += 1;
            }

            if (stops == -1) {
                break;
            }

            max_energy.push(C[i]);
            L -= D[i];
        }

        if (stops != -1) {
            while (L < 0) {
                if (max_energy.empty()) {
                    stops = -1;
                    break;
                }
                P += max_energy.top();
                max_energy.pop();
                stops++;
                L += 1;
            }
        }

        if (stops != -1) {
            cout << stops << endl;
        } else {
            cout << -1 << endl;
        }
    }


    return 0;
}
