#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,m; cin>> n >> k >> m;
	
	int a[1005] = {0};
	long long sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i >= m-1 && i < m+k-1){
			sum += a[i];
		}
	}
	cout<< sum << endl;
}
