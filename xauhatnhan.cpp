#include<bits/stdc++.h>
using namespace std;

string findP(string s){
	int n = s.length();
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			string p = s.substr(0,i);
			bool check = true;
			for(int j = 0; j < n; j+=i){
				if(s.substr(j,i) != p){
					check = false;
					break;
				}
			}
			if(check) return p;
		}
	}
	return s;
}


int main(){
	string s; cin>> s;
	cout<< findP(s) << endl;
}
