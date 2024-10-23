#include<bits/stdc++.h>
using namespace std;

bool scp(int n){
	if(n == 1) return true;
	int m = sqrt(n);
	if(m*m == n) return true;
	return false;
	
}

int main(){
	int t; cin>> t;
	int n;
	while(t--){
		cin>> n;
		if(scp(n)) cout<< "YES" << endl;
		else cout<< "NO" << endl;
	}
}
