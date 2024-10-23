#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long p;
    cin >> n >> p;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxJump = 0;
    int i = 0, j = 0;

    while (j < n) {
        if (a[j] - a[i] >= p) {
            if(maxJump <= j-i){
            	maxJump = j-i;
            	i++;
			}
			else j++;
        } else {
            j++;
        }
    }

    cout << maxJump << endl;
    
    return 0;
}

