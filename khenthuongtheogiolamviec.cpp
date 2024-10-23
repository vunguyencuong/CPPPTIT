#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    vector<int> hours(n);
    int totalHours = 0;

    for (int i = 0; i < n; ++i) {
        cin >> hours[i];
        totalHours += hours[i];
    }

    int target = totalHours / 2; // Mục tiêu là chia thành hai nhóm có tổng giờ làm việc bằng nhau
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= target; ++j) {
            if (hours[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - hours[i - 1]] + hours[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    int remainingHours = totalHours - dp[n][target];
    cout << "2 " << totalHours - remainingHours << endl;

    int i = n;
    int j = target;

    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i - 1][j]) {
            cout << hours[i - 1] << " ";
            j -= hours[i - 1];
        }
        --i;
    }

    cout << endl;

    for (int k = 0; k < i; ++k) {
        cout << hours[k] << " ";
    }

    cout << endl;

    return 0;
}