#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
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

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < N; ++i) {
        if (A[i] > A[i - 1] && isPrime(A[i]) && isPrime(A[i - 1])) {
            currentLength = currentLength + 1;
        } else {
            currentLength = 1;
        }
        maxLength = max(maxLength, currentLength);
    }

    cout << maxLength << endl;

    return 0;
}