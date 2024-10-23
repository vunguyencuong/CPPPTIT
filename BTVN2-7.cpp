#include <iostream>
using namespace std;

int main(){
	int n; 
	cin>> n;
	int p = n;
	int m = 0;
	while(n){
		m = m*10 + n%10;
		n /= 10;
	}
	cout<< m  << endl;
	if(p == m) cout<< "YES" << endl;
	else cout<< "NO" << endl;
	return 0;
}
