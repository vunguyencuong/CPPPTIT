#include<bits/stdc++.h>

using namespace std;

int main(){
	long long x; cin>> x;
	int dem = 0;
	if(x % 10 == 0){
		cout<< 0 << endl;	
	} else{
		while(x < 1e18){
			dem++;
			x = pow(2,dem)*x;
			if(x % 10 ==0) break;
		}
		if(dem != 0) cout<< dem << endl;
		else cout<< -1 << endl;
	}
	return 0;
}
