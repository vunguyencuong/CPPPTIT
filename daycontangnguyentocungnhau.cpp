#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_map<long long, int> dp; // Dùng để lưu độ dài của dãy con kết thúc tại mỗi phần tử
    int maxLength = 0;

    for (int i = 0; i < N; ++i) {
        vector<long long> factors; // Dùng để lưu trữ các thừa số nguyên tố của A[i]
        
        for (long long j = 2; j * j <= A[i]; ++j) {
            if (A[i] % j == 0 && isPrime(j)) {
                factors.push_back(j);
                while (A[i] % j == 0) {
                    A[i] /= j;
                }
            }
        }

        if (A[i] > 1 && isPrime(A[i])) {
            factors.push_back(A[i]);
        }

        int maxLenEndingAtI = 1;

        for (long long factor : factors) {
            if (dp.find(factor - 1) != dp.end()) {
                maxLenEndingAtI = max(maxLenEndingAtI, dp[factor - 1] + 1);
            }
        }

        dp[A[i]] = maxLenEndingAtI;
        maxLength = max(maxLength, maxLenEndingAtI);
    }

    cout << maxLength << endl;

    return 0;
}
