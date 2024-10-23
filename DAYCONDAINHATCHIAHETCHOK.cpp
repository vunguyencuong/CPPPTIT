// #include<bits/stdc++.h>
// using namespace std;

// int main(){
	
// 	int n,k; cin>> n >> k;
// 	vector<int> a(n);
// 	for(int i = 0; i< n; i++) cin>> a[i];
	
// 	vector<int> id(k,-1); // chua gia tri vi tri cuoi cung 
// 	//ma tong cac phan tu den vi tri do chia het cho k
// 	int maxLen = 0; // do dai cua doan con dai nhat
// 	int sum = 0;
	
// 	for(int i = 0; i<n;i++){
// 		sum = (sum + a[i])%k; // tinh tong
// 		if(sum == 0) maxLen = i+1; // chia het => cap nhat do dai cua chuoi con
// 		else if(id[sum] == -1){
// 			id[sum] = i; // vi tri dau tien sum xuat hien
// 		} else {
// 			int len = i-id[sum]; //
// 			if(len > maxLen) {
// 				maxLen = len;
// 			}
// 		}
// 	}
// 	cout<< maxLen << endl;
// }
// 9 4
// 3 9 9 5 1 1 10 3 5
// sum = 0
// i = 0: sum = (0 + 3 ) % 4 = 3; id[3] = 0
// i = 1: sum = (3+9) % 4 = 0 => maxLen = 1+1 = 2
// i = 2: sum = (0 + 9) % 4 = 1; id[1] = 2
// i = 3: sum = (1 + 5) % 4 = 2; id[2] = 3
// i = 4: sum = (2+ 1) % 4 = 3;  id[3] = 0 => len = 4 - 0 = 4 > maxLen => maxLen = 4;
// i = 5: sum = (0 + 1) % 4 = 1; id[1] = 2 => len = 5-2 =3
// i = 6: sum = (1 + 10) % 4 = 3; id[3] = 0 => len = 6-0 = 6 => maxLen = 6;
// i =7: sum = (3 + 3) % 4 = 2; id[2] = 7-3 = 4 => len = 4; 

#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9+7;
int main(){
	int n,k, a[1500], f[1500][55];
	cin>> n >> k;
	for(int i = 1; i <= n; i++){
		cin>> a[i];
		a[i] %= k;
	} 
	for(int i = 1; i <= k-1;i++) f[1][i] = -inf;
	f[1][a[1]] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 0; j <= k-1;j++){
			f[i][j] = max(f[i-1][j],f[i-1][(j-a[i]+k)%k]+1);
		}
	}
	cout<< f[n][0];
}