#include<bits/stdc++.h>
using namespace std;

int main() {
    // ifstream input("BAI4.INP");
    // ofstream output("BAI4.OUT");

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<long long> dp(n, 0);
    dp[0] = b[0];

    for (int i = 1; i < n; i++) {
        dp[i] = b[i];
        for (int j = i - 1; j >= 0; j--) {
            if (a[i] - a[j] >= k) {
                dp[i] = max(dp[i], dp[j] + b[i]);
                break;
            }
        }
    }

    long long maxPoints = 0;
    for (int i = 0; i < n; i++) {
        maxPoints = max(maxPoints, dp[i]);
    }

    cout << maxPoints << endl;

    // input.close();
    // output.close();

    return 0;
}
