#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n; cin>> n;
	int a[n+5] = {0};
	for(int i = 0; i < n; i++) cin>> a[i];
 
	int id[n+5] = {0};
	int dem = 1;
	int max = 0;
	// max cua i = n-2 => i+1 = n-1
	for(int i = 0; i < n-1; i++){
		if(a[i]*a[i+1] > 0) dem++;
		else{
			if(max <= dem){
				max = dem;
				id[i-dem+1] = dem;
			}
			dem = 1;
		}
	}
	cout<< max << endl;
	for(int i = 0; i <= n; i++){
		if(id[i] == max){
			for(int j = i; j <= i + max-1; j++){
				cout<< a[j] << " ";
			}
			cout<< endl;
		}
	}	 
}
// 9
// 1 2 3 4 -1 -2 4 3 -2  
// (so cuoi - so dau)/1 + 1 = khoang cach
// so dau = so cuoi - khoang cach +1
// so cuoi = so dau + khoang cach - 1
