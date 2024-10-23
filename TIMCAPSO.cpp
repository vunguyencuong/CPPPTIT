#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x; cin>> n >> x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>> a[i];
	} 
	vector<bool> mark(n,false);
	int l = 0,r = n-1;
	int check = 0;
	while(l < r){
		int sum = a[l] + a[r];
		if(sum == x && a[l] != a[r]){
			cout<< l << " " << r << endl;
			check = 1;
			l++,r--;
		}
		else if(sum < x){
			l++;
		} else r--;
	}
	if(check == 0) cout<< "No solution" << endl;
}
