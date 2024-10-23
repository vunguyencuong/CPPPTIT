#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, M;
    cin >> n >> M;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int maxBanh = 0;

    // Mua mỗi loại bánh 1 chiếc
    for (int i = 0; i < n; ++i) {
        if (M >= prices[i]) {
            M -= prices[i];
            maxBanh++;
        } else {
            break;
        }
    }

    // Ưu tiên mua loại bánh giá rẻ để mua được nhiều số bánh nhất
    for (int i = 0; i < n; ++i) {
        if (prices[i] <= M) {
            while(prices[i] <= M){
                M -= prices[i];
                maxBanh++;
            }   
        } else {
            break;
        }
    }

    cout << maxBanh << endl;
    return 0;
}
