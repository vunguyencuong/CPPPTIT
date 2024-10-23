#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  endl '\n'
#define base int (1e9+7)
#define ll long long
using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	vector <int> a(n);
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	long long result = 0;
	int tmp;
	for (int i=0; i<n; i++) {
		tmp = k-a[i];
		vector<int>:: iterator res1 = upper_bound(a.begin() + i + 1, a.end(), tmp);
		vector<int>:: iterator res2 = lower_bound(a.begin() + i + 1, a.end(), tmp);
		result += res1-res2;
	}
	cout << result << endl;
}


int main(){
	faster();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;    
}