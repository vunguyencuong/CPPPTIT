#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b; 
	cin>> a >> b;
	long long x = (long long)a*b;
//	while(b != 0){
//		int tmp = b;
//		b = a%b;
//		a = tmp;
//	}
	int ucln = __gcd(a,b);
	cout<< ucln << endl;
//	cout<< a << endl;
	cout<< x/ucln << endl;
	return 0;
}
