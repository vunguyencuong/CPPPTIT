#include <iostream>
#include <vector>
using namespace std;

void findLCS(string a, string b) {
    int len1 = a.length(), len2 = b.length();

    // Use rolling arrays to optimize space
    vector<vector<int>> save(2, vector<int>(len2 + 1, 0));

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (a[i] == b[j]) {
                save[(i + 1) % 2][j + 1] = save[i % 2][j] + 1;
            } else {
                save[(i + 1) % 2][j + 1] = max(save[i % 2][j + 1], save[(i + 1) % 2][j]);
            }
        }
    }

    int length = save[len1 % 2][len2];
    int i = len1, j = len2;

    // Tạo xâu con chung bằng cách lùi ngược từ điểm cuối.
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            i--;
            j--;
        } else if (save[(i - 1) % 2][j] > save[i % 2][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    cout << length << endl;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    findLCS(s1, s2);

    return 0;
}
