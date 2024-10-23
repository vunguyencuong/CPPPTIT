#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	int m = 0;
	int res = n;
	while(res){
		m = m*10 + res%10;
		res /= 10;
	}
	if(n == m) return true;
	else return false;
}	

int main(){
	int n; cin>> n;
	if(n > 9 && check(n)) cout<< "Yes" << endl;
	else cout<< "No" << endl;
}



//0 1 1 2 3 vv.....

