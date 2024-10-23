#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define itemOf(a) a.begin(), a.end()
#define vecvi vector<vector<int>>
#define veci vector<int>
#define pii pair<int, int>
#define return(val) cout << val; return;
const int MOD = 1e9 + 7;


void zip(map<int, int>& freqs, int raw, int need) {
    while (raw > need && freqs[3] >= 2) {
        freqs[3] -= 2;
        freqs[9]++;
        raw--;
    }
    while (raw > need && freqs[4] && freqs[2]) {
        freqs[4]--; freqs[2]--;
        freqs[8]++;
        raw--;
    }
    while (raw > need && freqs[3] && freqs[2]) {
        freqs[3]--; freqs[2]--;
        freqs[6]++;
        raw--;
    }
    while (raw > need && raw - need > 1 && freqs[2] >= 3) {
        freqs[2] -= 3;
        freqs[8]++;
        raw -= 2;
    }
    while (raw > need && freqs[2] >= 2) {
        freqs[2] -= 2;
        freqs[4]++;
        raw--;
    }
}

veci phanTichNhanTu(int n) {
    veci nhanTu;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            nhanTu.push_back(i);
            n /= i;
        }
    }
    return nhanTu;
}

map<int, int> extractFreq(veci nhanTu) {
    map<int, int> freqs = { {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0},
                           {8, 0}, {9, 0} };
    for (int i = 0; i < nhanTu.size(); i++) {
        freqs[nhanTu[i]]++;
    }
    return freqs;
}

void solve() {
    int n, k;
    cin >> n >> k;
    veci nhanTu = phanTichNhanTu(n);
    sort(itemOf(nhanTu));
    if (nhanTu[nhanTu.size() - 1] > 9) {
        return(-1);
    }
    map<int, int> freqs = extractFreq(nhanTu);

    int raw = freqs[2] + freqs[3] + freqs[4];
    int greaterThanFour = freqs[5] + freqs[6] + freqs[7] + freqs[8] + freqs[9];
    int need = k - greaterThanFour;

    if (raw < need || (greaterThanFour == k && raw > 0)) {
        return(-1);
    }
    zip(freqs, raw, need);

    if (freqs[2] + freqs[3] + freqs[4] + freqs[5] + freqs[6] + freqs[7] + freqs[8] + freqs[9] != k) {
        return(-1);
    }
    for (int i = 2; i <= 9; i++) {
        for (int j = 0; j < freqs[i]; j++) {
            cout << i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}