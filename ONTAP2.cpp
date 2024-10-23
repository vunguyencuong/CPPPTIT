#include <bits/stdc++.h>
#define oo 105
#define endl '\n'
#define speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
 
using namespace std;
 
int b[oo][oo], tong = 500000;
 
int hoanvi(int t, int a[], int n, int check[], int tmp){
	if (t == n-1){
		tmp += b[a[t - 1] - 1][0];
		tong = min (tong, tmp);
		tmp -= b[a[t - 1] - 1][0];
	}
	else {
		for (int i = 2; i < n; i++){
			if (check[i] == 0){
				a[t] = i;
				check[i] = 1;
				tmp += b[a[t] - 1][a[t - 1] - 1];
				if (tmp >= tong){
					tmp -= b[a[t] - 1][a[t - 1] - 1];
					continue;
				}
				hoanvi (t + 1, a, n, check, tmp);
				check[i] = 0;
                tmp -= b[a[t] - 1][a[t - 1] - 1];
			}
		}
	}
}
 
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) cin >> b[i][j];
	}
	int a[oo] = {0}, check[500000] = {0};
	a[0] = 1;
	hoanvi (1, a, n, check, 0);
	cout << tong;
}