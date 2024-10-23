#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 3;

// Hàm để tính lũy thừa theo modulo
int power(int x, int y, int p) {
    int res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

// Hàm để tính nghịch đảo theo modulo
int modInverse(int n, int p) {
    return power(n, p - 2, p);
}

// Hàm để tính giai thừa theo modulo
int modFact(int n, int p) {
    int res = 1;
    for (int i = 1; i <= n; i++)
        res = (res * i) % p;
    return res;
}

// Hàm để tính số lượng các số không âm nhỏ hơn n, có tổng bình phương các chữ số chia hết cho 3
long long countNumbers(long long n) {
    int p = MOD;
    if (n >= p)
        return -1; // Không thể tính toán cho n lớn hơn hoặc bằng p

    int fact = modFact(n, p);
    int inv = modInverse(2, p);
    int result = (fact * (inv + 1)) % p;

    return result;
}

int main() {
    long long n;
    cin >> n;

    cout << "So luong cac so khong am nho hon n, co tong binh phuong cac chu so chia het cho 3 la: " << countNumbers(n) << endl;

    return 0;
}
