#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Phân tích n thành tổng của k số nguyên tố lớn nhất
vector<int> primeSum(int n, int k) {
    vector<int> primes;
    for (int i = 2; i <= n && primes.size() < k; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
            n -= i;
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    cout << "Nhập số nguyên k: ";
    int k;
    cin >> k;

    vector<int> result = primeSum(n, k);
    if (result.size() == k) {
        cout << "Phân tích " << n << " thành tổng của " << k << " số nguyên tố lớn nhất là: ";
        for (int i = 0; i < k; ++i) {
            cout << result[i];
            if (i < k - 1) cout << " + ";
        }
        cout << endl;
    } else {
        cout << "Không thể phân tích " << n << " thành tổng của " << k << " số nguyên tố." << endl;
    }

    return 0;
}
