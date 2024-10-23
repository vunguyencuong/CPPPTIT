#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,x; cin>> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin>> a[i];
	vector<int> ts(1000005,0);
	int ans = 0;
	int y;
	for(int i = 0; i < n; i++){
		if(x > a[i]){
			y = x - a[i];
			// neu y da xuat hien truoc do => +1 cap so
			ans += ts[y];
			// tang tan suat xuat hien cua so hien tai
			ts[a[i]]++;
		}
	}
	cout<< ans << endl;
}
