#include <iostream>
using namespace std;

int main() {
    int g, s, k;
    cin >> g >> s >> k;

    int n;
    cin >> n;

    int totalMoneyInKnat = g * 17 * 29 + s * 29 + k;
    
    // Tính số tiền phải trả khi mua n thứ
    for (int i = 0; i < n; i++) {
        int pi, qi, ri;
        cin >> pi >> qi >> ri;

        // Tính tổng giá của thứ i trong đơn vị knat
        int totalCostInKnat = pi * 17 * 29 + qi * 29 + ri;

        // Nếu không đủ tiền, in -1 và kết thúc chương trình
        if (totalMoneyInKnat < totalCostInKnat) {
            cout << -1 << endl;
            return 0;
        }

        // Trừ số tiền đã trả cho thứ i
        totalMoneyInKnat -= totalCostInKnat;
    }

    // Chuyển số tiền còn lại về đơn vị galeo, sikel, knat
    int remainingG = totalMoneyInKnat / (17 * 29);
    int remainingS = (totalMoneyInKnat % (17 * 29)) / 29;
    int remainingK = totalMoneyInKnat % 29;

    // In số tiền còn lại
    cout << remainingG << " " << remainingS << " " << remainingK << endl;

    return 0;
}
