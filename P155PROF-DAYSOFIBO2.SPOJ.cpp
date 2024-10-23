#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll f1,f2;
	cin>> f1 >> f2;
	ll n;
	cin>> n;
	long long Mod = 1e9+7;
	if(n % 6 == 0) n = 6;
	else n = n%6;
	ll fn;
	for(int i = 3 ;i<= n ;i++)
	{
		fn = (f2-f1)%Mod;
		f1 = f2;
		f2 = fn;
	}
	ll ans;
	if(n == 1) ans = f1%Mod;
	else if(n==2) ans = f2%Mod;
	else ans =fn;
	if(ans < 0) cout<< ans+Mod;
	else cout<< ans;
	
	return 0;
}
