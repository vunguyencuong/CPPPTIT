#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> prices(N);
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int minCost = 0;
    int maxCost = 0;

    for (int i = 0; i < N; i += K) {
        minCost += prices[i];
        maxCost += prices[min(i + K - 1, N - 1)];
    }

    cout << minCost << " " << maxCost << endl;

    return 0;
}
