#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    for (int i = 0; i < n; i++) {
        cin >> applicants[i];
    }

    vector<int> apartments(m);
    for (int i = 0; i < m; i++) {
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int count = 0;
    int l = 0, r = 0;
 
    while (l < n && r < m) {
        if (abs(applicants[l] - apartments[r]) <= k) {
            count++;
            l++;
            r++;
        } else if (applicants[l] < apartments[r]) {
            l++;
        } else {
            r++;
        }
    }
    cout<< count << endl;
    return 0;
}
