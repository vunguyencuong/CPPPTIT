#include <iostream>
using namespace std;

// Hàm tính nhanh a^b mod m
long long fast_pow(long long a, long long b, long long m) {
    long long result = 1;
    while (b > 0) {
        if (b & 1)
            result = (result * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return result;
}

int main() {
    long long x,y,n,m;
    cin>> x >> y >> n >> m;
    // Tính x^n % m và y^n % m
    long long x_pow_n_mod_m = fast_pow(x, n, m);
    long long y_pow_n_mod_m = fast_pow(y, n, m);

    // Tính (x^n - y^n) % m
    long long result = (x_pow_n_mod_m - y_pow_n_mod_m + m) % m;

    cout << result << endl;

    return 0;
}
