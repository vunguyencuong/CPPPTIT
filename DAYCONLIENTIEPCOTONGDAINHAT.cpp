
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k; cin>> n >> k;
	vector<int> a(n);
	for(int i = 0; i< n; i++) cin>> a[i];
	
	long long sum = 0;
	for(int i = 0; i < k; i++) sum += a[i];
	long long maxSum = sum;
	for(int i = k; i < n; i++){
		sum = sum - a[i-k] + a[i];
		maxSum = max(maxSum, sum);
	}
	cout<< maxSum << endl;
}
