#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

// Hàm tính lũy thừa với modulo
int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (1LL * res * x) % MOD;
        }
        y /= 2;
        x = (1LL * x * x) % MOD;
    }
    return res;
}

// Hàm tính nghịch đảo của số a modulo MOD
int modInverse(int a) {
    return power(a, MOD - 2);
}

// Hàm tính tổ hợp C(n, k) modulo MOD
int nChooseK(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    
    vector<int> fact(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
    }

    return (1LL * fact[n] * modInverse((1LL * fact[k] * fact[n - k]) % MOD)) % MOD;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        cout << nChooseK(n, k) << endl;
    }
    return 0;
}
